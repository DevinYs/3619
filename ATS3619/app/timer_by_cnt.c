#include "uart.h"
#include <string.h>
//app
#include "timer_by_cnt.h"
#include "host_dsp_com.h"

//lib
#include "LG_XL3A_Struct.h"
#include "Message_Transfer.h"
#include "libLG_RoomCalibration.h"
#include "libQBS_ATS3619.h"


//#define DBG_PRINT_EN
#ifdef DBG_PRINT_EN
#include "printk.h"
#define dbg_print   printk
#else
#define dbg_print(...)
#endif

typedef enum
{
	e_status_stop = 0,
	e_status_running,

}timer_status_e;

typedef struct
{
	uint8 tmr_no;
	timer_status_e tmr_status;
	uint32 tmr_target_cnt;
	uint32 tmr_real_cnt;
	uint32 tmr_times; //��Ҫ���еĴ���
	uint32 tmr_delay;
	void (*tmr_cb)(void);

}timer_t;

timer_t timer[MAX_TIMER_NUM];

void timer_init()
{
	memset(&timer, 0, sizeof(timer_t)*MAX_TIMER_NUM);
}


uint8 timer_create(uint32 tmr_cnt, uint32 tmr_times, uint32 delay, void (*tmr_cb)(void))
{
	int i = 0;

	for(i = 0; i < MAX_TIMER_NUM; i++)
	{
		if(timer[i].tmr_status == e_status_stop)
		{
			timer[i].tmr_times = tmr_times;
			timer[i].tmr_no = i;
			timer[i].tmr_status = e_status_running;
			timer[i].tmr_target_cnt = tmr_cnt;
			timer[i].tmr_real_cnt = timer[i].tmr_target_cnt;
			timer[i].tmr_delay = delay;
			timer[i].tmr_cb = tmr_cb;

			return timer[i].tmr_no;
		}
	}

	return -1;
};


void timer_stop(uint8 tmr_no)
{
	if(tmr_no < MAX_TIMER_NUM)
	{
		timer[tmr_no].tmr_status = e_status_stop;
		timer[tmr_no].tmr_target_cnt = 0;
		timer[tmr_no].tmr_real_cnt = 0;
	}
}

void timer_run()
{
	int i = 0;
	for(i  = 0; i < MAX_TIMER_NUM; i++)
	{
		if(timer[i].tmr_delay != 0)
		{
			timer[i].tmr_delay--;
			return;
		}

		if(timer[i].tmr_status == e_status_running &&
			(--timer[i].tmr_real_cnt == 0))
		{
			dbg_print("timer.id = %d\n", timer[i].tmr_no);

			timer[i].tmr_cb();
			if(timer[i].tmr_times == RUNNING_FOREVER)
			{
				timer[i].tmr_real_cnt = timer[i].tmr_target_cnt;
			}
			else
			{
				if(--timer[i].tmr_times == 0)
				{
					dbg_print("stop this timer\n");
					timer_stop(timer[i].tmr_no);
				}
			}
		}

	}
}


extern param_RoomCal LG_RoomCal;
extern dspMessage DSP_Message;
uint8 *coeff;
uint32 byteOffset = 0;

void timer_cb_room_cal_status_report()
{
	dsp_com_data_transmation(&LG_RoomCal.ready ,4 ,MSG_COMMAND_ROOMCALIBRATION_STATUS, TARGET_SOC);
	coeff = LG_RoomCal_Upload_Coeff(&LG_RoomCal);
}


void timer_cb_room_cal_upload_pause1()
{
	byteOffset = 0;

	DSP_AppendHeader(&DSP_Message, MSG_DSP2SOC, MSG_COMMAND_ROOMCALIBRATION_UPLOAD);
	DSP_AppendMessage(&DSP_Message, &byteOffset, sizeof(uint32));
	DSP_AppendMessage(&DSP_Message, coeff + byteOffset, 200);
	DSP_AppendChkSum(&DSP_Message);
	dsp2host_msg_send(DSP_Message.mMessage, DSP_Message.mPosition);
}

void timer_cb_room_cal_upload_pause2()
{
	byteOffset = 200;

	DSP_AppendHeader(&DSP_Message, MSG_DSP2SOC, MSG_COMMAND_ROOMCALIBRATION_UPLOAD);
	DSP_AppendMessage(&DSP_Message, &byteOffset, sizeof(uint32));
	DSP_AppendMessage(&DSP_Message, coeff + byteOffset, 200);
	DSP_AppendChkSum(&DSP_Message);
	dsp2host_msg_send(DSP_Message.mMessage, DSP_Message.mPosition);
}

void timer_cb_uart_room_cal_status_report()
{
	dsp_com_data_transmation(&LG_RoomCal.ready ,4 ,MSG_COMMAND_ROOMCALIBRATION_STATUS, TARGET_UART);
	coeff = LG_RoomCal_Upload_Coeff(&LG_RoomCal);
}

void timer_cb_uart_room_cal_upload_pause1()
{
	byteOffset = 0;

	DSP_AppendHeader(&DSP_Message, MSG_DSP2SOC, MSG_COMMAND_ROOMCALIBRATION_UPLOAD);
	DSP_AppendMessage(&DSP_Message, &byteOffset, sizeof(uint32));
	DSP_AppendMessage(&DSP_Message, coeff + byteOffset, 200);
	DSP_AppendChkSum(&DSP_Message);
	uart_send_data((char*)DSP_Message.mMessage, DSP_Message.mPosition);
}

void timer_cb_uart_room_cal_upload_pause2()
{
	byteOffset = 200;

	DSP_AppendHeader(&DSP_Message, MSG_DSP2SOC, MSG_COMMAND_ROOMCALIBRATION_UPLOAD);
	DSP_AppendMessage(&DSP_Message, &byteOffset, sizeof(uint32));
	DSP_AppendMessage(&DSP_Message, coeff + byteOffset, 200);
	DSP_AppendChkSum(&DSP_Message);
	uart_send_data((char*)DSP_Message.mMessage, DSP_Message.mPosition);
}



extern uint32 frame_cnt;
void timer_cb_sys_heartbeat_msg_send()
{
	dsp_com_data_transmation(&frame_cnt, sizeof(float), MSG_COMMAND_MEASUREMENT_RMS, TARGET_SOC);
}


void timer_cb_DMIC_RMS_report()
{
	int MIC_test_RMS_value = QBS_ATS3619_Measurement_Get_RMS();
	dsp_com_data_transmation(&MIC_test_RMS_value, sizeof(int), MSG_COMMAND_MEASUREMENT_RMS, TARGET_SOC);
}


void timer_cb_uart_DMIC_RMS_report()
{
	int MIC_test_RMS_value = QBS_ATS3619_Measurement_Get_RMS();
	dsp_com_data_transmation(&MIC_test_RMS_value, sizeof(int), MSG_COMMAND_MEASUREMENT_RMS, TARGET_UART);
}





