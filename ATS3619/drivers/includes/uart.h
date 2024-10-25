
#ifndef __UART_H__
#define __UART_H__

#include "basic.h"

#define UART_BAUD_RATE          (921600)
#define UART_TX_IO              (23)
#define UART_RX_IO              (24)


#define UART_TX_BUF_BYTES       (255)
#define UART_RX_BUF_BYTES       (255)
#define UART_RX_TIMEOUT_BYTES   (255) // uart rx timeout in bytes, 255 maximum

#define UART_TX_DMA_CH          (15)
#define UART_RX_DMA_CH          (14)


typedef void (*uart_rx_cb_t)(char *_buf, uint32_t bytes);


int uart_init(void);
void uart_send_data(char *_buf, uint32_t bytes);


#endif /* __UART_H__ */
