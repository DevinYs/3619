
#include <xtensa/xtruntime.h>
#include <string.h>
#include "basic.h"
#include "cmu.h"
#include "gpio.h"
#include "dma.h"
#include "uart.h"
#include "delay.h"



#define UART_IRQ_NUM                    (12)
#define UART_BAUD_DIV(freq, baud_rate)  ((((freq) / (baud_rate))) + ((((freq) % (baud_rate)) + ((baud_rate) >> 1)) / baud_rate))
#define UART_TX_IS_BUSY()               (act_read(UART_STA) & (1 << UART_STA_UTBB))

#define UART_TX_IO_MFP                  ((4 << GPIO0_CTL_PADDRV_SHIFT) | (7 << GPIO0_CTL_MFP_SHIFT))
#define UART_RX_IO_MFP                  ((4 << GPIO0_CTL_PADDRV_SHIFT) | (1 << GPIO0_CTL_GPIO50KPUEN) | (8 << GPIO0_CTL_MFP_SHIFT))



static char _uart_rx_buf[UART_RX_BUF_BYTES];

extern void uart_rx_user_cb(char *_buf, uint32_t bytes);

static void uart_rx_dma_config(void)
{
    dma_chan_config_t dma_cfg;

    memset(&dma_cfg, 0, sizeof(dma_cfg));
    dma_cfg.dma_chan     = UART_RX_DMA_CH;
    dma_cfg.trans_width  = DMA_TWS_8BIT;
    dma_cfg.reload       = DMA_RELOAD_DISABLE;
    dma_cfg.trans_mode   = DMA_SINGLE;

    dma_cfg.dest_type    = DMA_DEST_MEMORY;
    dma_cfg.daddr0       = (uint32_t)_uart_rx_buf;

    dma_cfg.src_type     = DMA_SRC_UART0_RX;
    dma_cfg.saddr0       = UART_RXDAT;

    dma_cfg.bytes        = UART_RX_BUF_BYTES;
    dma_cfg.irq_type     = DMA_IRQ_NONE;
    dma_cfg.dma_irq_user_cb   = NULL;

    dma_config(&dma_cfg);
}

void uart_irq_handler(void *arg)
{
    uart_rx_cb_t uart_rx_user_cb = (uart_rx_cb_t)arg;

    /* check if uart rx timeout*/
    if(act_read(UART_STA) & (1 << UART_STA_RXTO_PD))
    {
        act_or(UART_STA, (1 << UART_STA_RXTO_PD));

        /* if timeout, abort last uart rx dma transmission */
        dma_abort(UART_RX_DMA_CH);

        /* do data process */
        if(uart_rx_user_cb)
        {
            uart_rx_user_cb(_uart_rx_buf, UART_RX_BUF_BYTES - dma_get_remain_bytes(UART_RX_DMA_CH));
        }

        /* start another uart rx dma transmission, wait for new data input */
        dma_start(UART_RX_DMA_CH);
    }
}

void uart_rx_irq_config(void)
{
    uint32_t reg_val = 0;

	xtos_interrupt_disable(UART_IRQ_NUM);
    xtos_set_interrupt_handler(UART_IRQ_NUM, (xtos_handler)uart_irq_handler, (void *)uart_rx_user_cb, NULL);
    xtos_interrupt_enable(UART_IRQ_NUM);

    reg_val = 1 << UART_CTL2_RXTO_IRQ_EN;
    reg_val |= UART_RX_TIMEOUT_BYTES << UART_CTL2_RXTO_SHIFT;
    act_write(UART_CTL2, reg_val);
}

int uart_init(void)
{
    uint32_t reg_val = 0;

    /* cmu: disable uart clock */
	cmu_device_clock_enable(CLOCK_ID_UART, DISABLE);
    act_write(CMU_UARTCLK, 0);
    /* cmu: enable uart clock */
	cmu_device_clock_enable(CLOCK_ID_UART, ENABLE);

    /* mrcr: uart module reset */
	cmu_device_reset(RESET_ID_UART, MRCR_RESET);
    delay(1);
    /* mrcr: uart module normal run */
	cmu_device_reset(RESET_ID_UART, MRCR_NORMAL);

    /* config uart tx gpio mfp */
    if(UART_TX_IO != GPIO_SEL_NONE)
    {
        gpio_config(UART_TX_IO, UART_TX_IO_MFP);
    }

    /* config uart rx gpio mfp */
    if(UART_RX_IO != GPIO_SEL_NONE)
    {
        gpio_config(UART_RX_IO, UART_RX_IO_MFP);
    }

    /* set baud rate */
    act_write(UART_BR, (UART_BAUD_DIV(HOSC_FREQ, UART_BAUD_RATE) | (UART_BAUD_DIV(HOSC_FREQ, UART_BAUD_RATE) << 16)));

    /* config uart ctrl reg */
    reg_val = (1 << UART_CTL_RXENABLE)              // enable uart rx
            | (1 << UART_CTL_TXENABLE)              // enable uart tx    
            | (1 << UART_CTL_TX_FIFO_EN)            // enable uart tx fifo
            | (1 << UART_CTL_RX_FIFO_EN)            // enable uart rx fifo
            | (0 << UART_CTL_TX_FIFO_SEL_SHIFT)     // uart tx fifo accecced by dma
            | (1 << UART_CTL_RX_FIFO_SEL)           // uart rx fifo accecced by dma
            | (0 << UART_CTL_AFL_SHIFT)             // set auto flow control threshold
            | (0 << UART_CTL_LBEN)                  // disable rx -> tx loop back
            | (0 << UART_CTL_TXIE)                  // disable uart tx irq
            | (0 << UART_CTL_RXIE)                  // disable uart rx irq
            | (0 << UART_CTL_TXDE)                  // enable uart tx drq
            | (1 << UART_CTL_RXDE)                  // enable uart rx drq
            | (1 << UART_CTL_EN)                    // enable uart
            // | (0 << UART_CTL_RTSE)                  // disable uart RTS 
            // | (0 << UART_CTL_AFE)                   // disable uart auto flow control
            | (0 << UART_CTL_RDIC_SHIFT)            // rx drq triggered when rx fifo got at least 1 byte filled
            | (0 << UART_CTL_TDIC_SHIFT)            // tx drq triggered when tx fifo got at least 1 byte empty
            // | (0 << UART_CTL_CTSE)                  // disable uart CTS 
            | (0 << UART_CTL_PRS_SHIFT)             // none parity bit
            | (0 << UART_CTL_STPS)                  // 1 stop bit
            | (0x3 << UART_CTL_DWLS_SHIFT);         // 8 bit data width
    act_write(UART_CTL, reg_val);

    uart_rx_dma_config();

    dma_start(UART_RX_DMA_CH);
    uart_rx_irq_config();

	return 0;
}

void uart_send_data(char *_buf, uint32_t bytes)
{
    while(bytes != 0) {
        /* Wait for fifo to flush out*/
        while(act_readl(UART_STA) & (1 << UART_STA_UTBB));
        act_writel((unsigned int)(*_buf), UART_TXDAT);
        _buf++;
        bytes--;
    }
}
