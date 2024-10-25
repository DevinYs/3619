#include <string.h>
#include "cmu.h"
#include "dma.h"
#include "uart.h"
#include "delay.h"
#include "audio_config.h"

//application
#include "host_dsp_com.h"
#include "Message_Transfer.h"
#include "timer_by_cnt.h"

//lib
#include "LG_XL3A_Struct.h"
#include "libQBS_ATS3619.h"
#include "libLG_RoomCalibration.h"

//#define DBG_PRINT_EN
#ifdef DBG_PRINT_EN
#include "printk.h"
#define dbg_print   printk
#else
#define dbg_print(...)
#endif

#define QBS_EN
#define ROOM_CAL_EN
volatile uint32_t g_reinit_flag = DISABLE;


#define FREE_GPIO6 6
#define FREE_GPIO7 7
#define FREE_GPIO8 8
#define FREE_GPIO9 9

void dsp_eq(int *prx0, int *padc, int *ptx0, int *pdac)
{
    int i;

    int *input0_ch0_ptr = prx0;
    int *input0_ch1_ptr = prx0 + 1;
    int *input0_ch2_ptr = prx0 + 2;
    int *input0_ch3_ptr = prx0 + 3;

    int *input1_ch0_ptr = padc;
    int *input1_ch1_ptr = padc + 1;

    int *output0_data_ptr = ptx0;


    for(i = 0; i < AUDIO_SAMP_PER_FRAME; i++)
    {
#if 1 // i2srx0 4ch --> i2stx0 4ch
        *output0_data_ptr++ = (*input0_ch0_ptr)+ (*input1_ch0_ptr); // -20dB
        *output0_data_ptr++ = (*input0_ch1_ptr)+ (*input1_ch0_ptr); // -20dB
        *output0_data_ptr++ = (*input0_ch2_ptr)+ (*input1_ch0_ptr); // -20dB
        *output0_data_ptr++ = (*input0_ch3_ptr)+ (*input1_ch0_ptr); // -20dB
#else // adc 2ch --> i2stx0 4ch
        *output0_data_ptr++ = (*input1_ch0_ptr);
        *output0_data_ptr++ = (*input1_ch1_ptr);
        *output0_data_ptr++ = (*input1_ch0_ptr);
        *output0_data_ptr++ = (*input1_ch1_ptr);
#endif
        input0_ch0_ptr += AUDIO_I2SRX0_CHAN;
        input0_ch1_ptr += AUDIO_I2SRX0_CHAN;
        input0_ch2_ptr += AUDIO_I2SRX0_CHAN;
        input0_ch3_ptr += AUDIO_I2SRX0_CHAN;

        input1_ch0_ptr += AUDIO_ADC_CHAN;
        input1_ch1_ptr += AUDIO_ADC_CHAN;
    }
}

sint32 gMusicBuffer[4][NSAMPLEPERFRAME];
sint32 gPhoneBuffer[2][NSAMPLEPERFRAME];
param_RoomCal LG_RoomCal;
dspMessage DSP_Message;
uint32 frame_cnt;
uint8 g_mic_input_type = ADC_AMIC_INPUT;
int main(int argc, char **argv)
{
    uint32 lib_ver = 0;
    int inbuf0, inbuf1, outbuf0;
	unsigned int i, j;
    unsigned int nSample;

    act_write(GPIO_BASE + 4 * FREE_GPIO6, 0x00);
    act_write(GPIO_BASE + 4 * FREE_GPIO7, 0x00);
    act_write(GPIO_BASE + 4 * FREE_GPIO8, 0x00);
    act_write(GPIO_BASE + 4 * FREE_GPIO9, 0x00);
    act_write(REF_LDO_CTL, act_read(REF_LDO_CTL) & 0xFFFFF3FF);

    wdt_en(DISABLE); // disable watchdog
    // jtag_en(DISABLE); // disable jtag

    sys_init(200*1000); // set dsp freq kHz

    host_dsp_com_spi_init();
    timer_init();

#ifdef ROOM_CAL_EN
    LG_RoomCal_Init(&LG_RoomCal);
#endif

#ifdef QBS_EN
    DSP_InitMessage(&DSP_Message, MSG_COMPANY_ACTIONS, MSG_PROCESSOR_HIFI4, MSG_BOARD0);
    QBS_ATS3619_Init();
	//QBS_ATS3619_FeedbackSuppression_Set_Threshold(MIC_FEEDBACKSUPPRESSION_THRESHOLD);
    lib_ver = QBS_ATS3619_GetVersion();
    dsp_com_data_transmation(&lib_ver, sizeof(uint32),MSG_COMMAND_PROJECTID, TARGET_SOC);
#endif

    dbg_print("DSP frequency is %d kHz.\n",(act_read(DSPPLL_CTL)&0x3F)*6144);
    dbg_print("make at %s,%s\n\n", __DATE__, __TIME__);

	while(1)
	{
		dma_device_init();
		uart_init();

		audio_path_config();

		mic_jita_detect();
		/* please avoid doing anything lasts long here, otherwise rx/adc dma may overwrite the audio buffer */
		while(1)
		{
			frame_cnt++;
			timer_run();
			get_dma_pingpang_buff(&inbuf0, &inbuf1, &outbuf0, NULL);

			if(g_reinit_flag == ENABLE)
			{
				g_reinit_flag = DISABLE;
				dbg_print("audio patch reinit\n");
				break;
			}

	#ifdef QBS_EN
			nSample = AUDIO_SAMP_PER_FRAME;
			for (i = 0; i < 4; i++)
			{
				for (j = 0; j < nSample; j++)
				{
					gMusicBuffer[i][j] = act_read(inbuf0 + (i * 4) + (j * 16));
				}
			}
			for (i = 0; i < 2; i++)
			{
				for (j = 0; j < nSample; j++)
				{
					gPhoneBuffer[i][j] = act_read(inbuf1 + (i * 4) + (j * 8));
				}
			}
	#endif
	#ifdef ROOM_CAL_EN
			LG_RoomCal_Run(gMusicBuffer, gPhoneBuffer, &LG_RoomCal, nSample);
	#endif
	#ifdef QBS_EN
			if(LG_RoomCal.mode == 0)
			{
				QBS_ATS3619_Run(gMusicBuffer, gPhoneBuffer, nSample);
			}

			for (i = 0; i < 4; i++)
			{
				for (j = 0; j < nSample; j++)
				{
					act_write(outbuf0 + (i * 4) + (j * 16), gMusicBuffer[i][j]);

				}
			}

	#else
			dsp_eq((int *)inbuf0, (int *)inbuf1, (int *)outbuf0, NULL);
	#endif
			release_dma_pingpang_buff(&inbuf0, &inbuf1, &outbuf0, NULL);

	#ifdef ROOM_CAL_EN
			switch (LG_RoomCal_Upload_Ready(&LG_RoomCal))
			{
				case ROOMCAL_UPLOAD_READY:
					timer_create(1, 1, 0, &timer_cb_room_cal_status_report);
					timer_create(375, 1, 0, &timer_cb_room_cal_upload_pause1);
					timer_create(750, 1, 0, &timer_cb_room_cal_upload_pause2);

	#if(UART_ENABLE == 1 && UART_GUI_TOOL == 1)


					timer_create(1, 1, 0, &timer_cb_uart_room_cal_status_report);
					timer_create(350, 1, 0, &timer_cb_uart_room_cal_upload_pause1);
					timer_create(750, 1, 0, &timer_cb_uart_room_cal_upload_pause2);

	#endif
				break;
				case ROOMCAL_FAIL:
					timer_create(1, 1, 0, &timer_cb_room_cal_status_report);
	#if(UART_ENABLE == 1 && UART_GUI_TOOL == 1)
					timer_create(1, 1, 0, &timer_cb_uart_room_cal_status_report);
	#endif
				break;
				case ROOMCAL_UPLOAD_NOTREADY:
				default:
				break;
			}

	#endif
		}

		audio_path_deinit();
    }
}


