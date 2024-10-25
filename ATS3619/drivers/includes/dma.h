
#ifndef __DMA_H__
#define __DMA_H__


#include "basic.h"

#define DMA_MAX_CHANNELS        (16)
#define DMA_CHAN_OFFSET         (0x100)
#define DMA_CH_BASE(ch)         (DMA0CTL + DMA_CHAN_OFFSET * (ch))
#define DMA_CH_TO_IRQ_NUM(ch)   (((ch) >> 2) + 4)

/*
    DMA control register
    transmit data width
*/
typedef enum
{
    DMA_TWS_32BIT = 0,
    DMA_TWS_16BIT = 1,
    DMA_TWS_8BIT = 2,
}dma_tws_e;

/*
    DMA control register
    DMA reload enable
*/
typedef enum
{
    DMA_RELOAD_DISABLE = 0,
    DMA_RELOAD_ENABLE = 1,
}dma_reload_e;

/*
    DMA control register
    DMA transmit mode
*/
typedef enum
{
    DMA_BURST8 = 0,
    DMA_SINGLE = 1,
}dma_trm_e;

/*
    DMA control register
    DMA audio type
*/
typedef enum
{
    DMA_INTERLEAVED = 0,
    DMA_SEPARATED = 1,
}dma_audiotype_e;

/*
    DMA control register
    DMA destination address mode
*/
typedef enum
{
    DMA_DAM_INCRE = 0,
    DMA_DAM_CONST = 1,
}dma_dam_e;

/*
    DMA control register
    DMA destination select
*/
typedef enum
{
    DMA_DEST_MEMORY = 0,
    DMA_DEST_UART0_TX = 1,
    DMA_DEST_SPI0_TX = 2,
    DMA_DEST_DAC0 = 3,
    DMA_DEST_IIS0_TX = 4,
    DMA_DEST_IIS1_TX = 5,
    DMA_DEST_ASRC0_TX = 6,
    DMA_DEST_ASRC1_TX = 7,
    DMA_DEST_ASRC2_TX = 8,
    DMA_DEST_ASRC3_TX = 9,
    DMA_DEST_IIC0_TX = 10,
    DMA_DEST_IIC1_TX = 11,
    DMA_DEST_SPI1_TX = 12,
    DMA_DEST_DAC1 = 13,
}dma_dest_e;

/*
    DMA control register
    DMA source address mode
*/
typedef enum
{
    DMA_SAM_INCRE = 0,
    DMA_SAM_CONST = 1,
}dma_sam_e;

/*
    DMA control register
    DMA source select
*/
typedef enum
{
    DMA_SRC_MEMORY = 0,
    DMA_SRC_UART0_RX = 1,
    DMA_SRC_SPI0_RX = 2,
    DMA_SRC_ADC = 3,
    DMA_SRC_IIS0_RX = 4,
    DMA_SRC_IIS1_RX = 5,
    DMA_SRC_ASRC0_RX = 6,
    DMA_SRC_ASRC1_RX = 7,
    DMA_SRC_ASRC2_RX = 8,
    DMA_SRC_ASRC3_RX = 9,
    DMA_SRC_IIC0_RX = 10,
    DMA_SRC_IIC1_RX = 11,
    DMA_SRC_SPI1_RX = 12,
}dma_src_e;

/*
    DMA interrupt enable register
    DMA irq type select
*/
typedef enum
{
	DMA_IRQ_NONE = 0,
    DMA_IRQ_HF = 1,
    DMA_IRQ_TC = 2,
    DMA_IRQ_HF_TC = 3,
}dma_irq_type_e;

typedef struct dma_chan_config {
    uint32_t dma_chan;
    dma_tws_e trans_width;
    dma_reload_e reload;
    dma_trm_e trans_mode;
    dma_audiotype_e audio_type;

    dma_dest_e dest_type;
    unsigned int daddr0;
    unsigned int daddr1;

    dma_src_e src_type;
    unsigned int saddr0;
    unsigned int saddr1;

    unsigned int bytes;

    dma_irq_type_e irq_type;
    void *user_data;
    void (*dma_irq_user_cb)(uint32_t dma_chan, dma_irq_type_e irq_type, void *user_data);

} dma_chan_config_t;


void dma_device_init(void);
int dma_config(dma_chan_config_t *_config);
void dma_start(uint32_t dma_chan);
void dma_abort(uint32_t dma_chan);
void dma_reload(uint32_t dma_chan, uint32_t daddr, uint32_t saddr, uint32_t bytes);
int dma_get_remain_bytes(uint32_t dma_chan);
int dma_chan_is_busy(uint32_t dma_chan);
void dma_free(uint32_t dma_chan);

#endif /* __DMA_H__ */
