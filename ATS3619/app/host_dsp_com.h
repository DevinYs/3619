
#ifndef _HOST_DSP_COM_H_
#define _HOST_DSP_COM_H_

#include <stdint.h>

#define PEND_DSP_INTERRUPT_NUM          25
#define DSP_SPI_COM_BUFFER 256
enum
{
    ATS361X_COM_MSG_UPLINK_ADDRESS          = 0x30000000, //uplink msg start addr

	ATS361X_COM_MSG_DOWNLINK_ADDRESS		= 0x30000010, //downlink msg start addr
};

typedef enum
{
	TARGET_SOC = 0,
	TARGET_UART = 1,
}e_send_target;

int host_dsp_com_spi_init(void);
void dsp2host_msg_send(void *data, uint8 size);
void swapEndianArray(uint8_t *array, uint32 length);
void dsp_com_data_transmation(void *data, uint8 data_size, uint8 command_type, e_send_target target);
extern void timer_cb_DMIC_RMS_report(void);
#endif
