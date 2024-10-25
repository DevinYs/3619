
#include <xtensa/xtruntime.h>
#include <string.h>
#include "basic.h"
#include "adc.h"
#include "uart.h"
//lib
#include "libQBS_ATS3619.h"

//app
#include "host_dsp_com.h"
#include "Message_Transfer.h"
#include "timer_by_cnt.h"

//#define DBG_PRINT_EN
#ifdef DBG_PRINT_EN
#include "printk.h"
#define dbg_print   printk
#else
#define dbg_print(...)
#endif

static uint8 dsp_msg_uplink_buf[DSP_SPI_COM_BUFFER];
static uint8 dsp_msg_downlink_buf[DSP_SPI_COM_BUFFER];
extern dspMessage DSP_Message;


void dsp_com_data_transmation(void *data, uint8 data_size, uint8 command_type, e_send_target target)
{
	DSP_AppendHeader(&DSP_Message, MSG_DSP2SOC, command_type);
	DSP_AppendMessage(&DSP_Message, data, data_size);
	DSP_AppendChkSum(&DSP_Message);

	if(target == TARGET_SOC)
		dsp2host_msg_send((char *)DSP_Message.mMessage, DSP_Message.mPosition);
	else{
		uart_send_data((char *)DSP_Message.mMessage, DSP_Message.mPosition);
	}
}

uint8 DMIC_RMS_send_tmr = 255;
extern uint32_t g_reinit_flag;
extern uint8 g_mic_input_type;
extern uint8 last_hotplug_state;
int func_ret_for_spi = 0;
static void PEND_DSP_handler(void *arg)
{
	unsigned int dsp_irq_num = (unsigned int)arg;
	uint8 cmd_id = 0;


	while(act_read(SLAVE_CTRL) & (1<<5)) // clear irq pend bit
	{
		act_mask_or(SLAVE_CTRL, (1 << SLAVE_CTRL_SLV_PD), 1 << SLAVE_CTRL_SLV_PD);
	}
	xtos_interrupt_clear(dsp_irq_num);

	if(dsp_irq_num != PEND_DSP_INTERRUPT_NUM)
	{
		dbg_print("dsp pend irq num err\n");
		xtos_interrupt_disable(dsp_irq_num);
		return;
	}

	swapEndianArray(dsp_msg_downlink_buf, sizeof(dsp_msg_downlink_buf));
	//printk("[%s %d] msg form host : %x\n", __func__, __LINE__, *dsp_msg_downlink_buf);

	int i = 0;
#if 0
	for(i = 0; i < 12; i++)
	{
		dbg_print("%02x ", dsp_msg_downlink_buf[i]);
	}
	dbg_print("\n");
#endif

	switch(dsp_msg_downlink_buf[3])
	{
		case MSG_COMMAND_JACK_STATUS:
			if(last_hotplug_state)
			{
				dsp_msg_downlink_buf[4] &= 0x3;
			}
			else
			{
				dsp_msg_downlink_buf[4] &= 0x02;
			}
#if 0
			for(i = 0; i < 12; i++)
			{
				dbg_print("%02x ", dsp_msg_downlink_buf[i]);
			}
			dbg_print("\n");
#endif
		break;
		case MSG_COMMAND_ROOMCALIBRATION_MODE:
		//switch amic & dmic
			if(dsp_msg_downlink_buf[4] & 1)
			{
				g_mic_input_type = ADC_DMIC_INPUT;
				g_reinit_flag = ENABLE;
			}
			else
			{
				g_mic_input_type = ADC_AMIC_INPUT;
				g_reinit_flag = ENABLE;
			}
		break;
		case MSG_COMMAND_MEASUREMENT_MIC:
			if(dsp_msg_downlink_buf[4] == 0 || dsp_msg_downlink_buf[4] == 1)
			{
				g_mic_input_type = ADC_AMIC_INPUT;
				g_reinit_flag = ENABLE;
				timer_stop(DMIC_RMS_send_tmr);
			}
			else
			{
				g_mic_input_type = ADC_DMIC_INPUT;
				g_reinit_flag = ENABLE;
				DMIC_RMS_send_tmr = timer_create(375, RUNNING_FOREVER, 0, &timer_cb_DMIC_RMS_report);
			}
		break;
#if 0
		case MSG_COMMAND_ROOMCALIBRATION_DOWNLOAD:
		for(i = 0; i <210; i++)
		{
			dbg_print("%02x ", dsp_msg_downlink_buf[i]);
		}
		dbg_print("\n");
#endif
		break;
		default:
		break;
	}


	func_ret_for_spi = QBS_ATS3619_TranslateMessage(dsp_msg_downlink_buf);
	cmd_id = DSP_CmdMapping(dsp_msg_downlink_buf[3]);
	dsp_com_data_transmation(&func_ret_for_spi, 4, cmd_id, TARGET_SOC);

    return;
}


static int register_PEND_DSP_handler(void)
{
	xtos_set_interrupt_handler(PEND_DSP_INTERRUPT_NUM, (xtos_handler)PEND_DSP_handler, (void *)PEND_DSP_INTERRUPT_NUM, NULL);
	xtos_interrupt_enable(PEND_DSP_INTERRUPT_NUM);

	return 0;
}

static int host_dsp_com_buf_init(void)
{
    act_write(ATS361X_COM_MSG_UPLINK_ADDRESS, ((unsigned int )dsp_msg_uplink_buf));
    act_write(ATS361X_COM_MSG_DOWNLINK_ADDRESS, ((unsigned int)dsp_msg_downlink_buf));

    memset(dsp_msg_uplink_buf, 0, DSP_SPI_COM_BUFFER);
    memset(dsp_msg_downlink_buf, 0, DSP_SPI_COM_BUFFER);

    return 0;
}

int host_dsp_com_spi_init(void)
{
	host_dsp_com_buf_init();

    register_PEND_DSP_handler();

    return 0;
}


void dsp2host_msg_send(void *data, uint8 size)
{
	uint8 tmp_buf[256] = {0};

	memset(dsp_msg_uplink_buf, 0, sizeof(dsp_msg_uplink_buf));

	memcpy(tmp_buf, data, size);
	swapEndianArray(tmp_buf, sizeof(tmp_buf));
    memcpy(dsp_msg_uplink_buf, tmp_buf, sizeof(tmp_buf));
}


uint32_t swapEndian32(uint32_t val) {
	return ((val >> 24) & 0xff) 	|
	        ((val << 8) & 0xff0000) |
	        ((val >> 8) & 0xff00) 	|
	        ((val << 24) & 0xff000000);
}

void swapEndianArray(uint8_t *array, uint32 length) {
    if (length % 4 != 0) {
        return;
    }
    for (size_t i = 0; i < length; i += 4) {
        uint32_t *ptr = (uint32_t *)(array + i);
        *ptr = swapEndian32(*ptr);
    }
}
