#include <string.h>
#include "audio_config.h"
#include "cmu.h"
#include "uart.h"
#include "adc.h"

//app
#include "Message_Transfer.h"
#include "libQBS_ATS3619.h"
#include "host_dsp_com.h"
#include "timer_by_cnt.h"

//#define DBG_PRINT_EN
#ifdef DBG_PRINT_EN
#include "printk.h"
#define dbg_print   printk
#else
#define dbg_print(...)
#endif




extern uint32_t g_reinit_flag;
sample_rate_e g_sample_rate = SR_48000;
uint8 last_hotplug_state = 0;
uint8 debounce_cnt = 0;

/* slave bclk status detect irq handler */
void bclk_det_user_cb(bclk_det_sta_e _bclk_det_sta)
{
	if(_bclk_det_sta == BCLK_VALID)
	{
		dbg_print("bclk on\n");
	}
	else if(_bclk_det_sta == BCLK_INVALID)
	{
        /* add your own code here */
		#if 1
            gpio_config(GPIO_SEL_4, MFP_SET_GPIO);
            gpio_config(GPIO_SEL_5, MFP_SET_GPIO);
            gpio_config(GPIO_SEL_12, MFP_SET_GPIO);
            gpio_config(GPIO_SEL_11, MFP_SET_GPIO);
            g_reinit_flag = ENABLE;
		#else
			audiopll_from_hosc(g_sample_rate);
            gpio_config(GPIO_SEL_12, MFP_SET_GPIO);
            gpio_config(GPIO_SEL_11, MFP_SET_GPIO);
		#endif
			dbg_print("bclk off\n");
	}
	else
	{
		return;
	}
}

/* uart rx dma timeout irq handler */
uint32 uart_DMIC_RMS_send_tmr = 255;
extern uint8 g_mic_input_type;
int func_ret_for_uart = 0;
void uart_rx_user_cb(char *_buf, uint32_t bytes)
{
    /* add your own code here */
    /* do uart rx data process. for example, send received data out via uart tx */
#if (UART_GUI_TOOL ==1)

	uint8 cmd_type = 0;
	switch(_buf[3])
	{
		case MSG_COMMAND_ROOMCALIBRATION_MODE:
		//switch amic & dmic
			if(_buf[4] & 1)
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
			if(_buf[4] == 0 || _buf[4] == 1)
			{
				g_mic_input_type = ADC_AMIC_INPUT;
				g_reinit_flag = ENABLE;
				timer_stop(uart_DMIC_RMS_send_tmr);
			}
			else
			{
				g_mic_input_type = ADC_DMIC_INPUT;
				g_reinit_flag = ENABLE;
				uart_DMIC_RMS_send_tmr = timer_create(375, RUNNING_FOREVER, 0, &timer_cb_uart_DMIC_RMS_report);
			}
		default:
		break;
	}

	func_ret_for_uart = QBS_ATS3619_TranslateMessage((unsigned char*)_buf);
	cmd_type = DSP_CmdMapping(_buf[3]);
	dsp_com_data_transmation(&func_ret_for_uart, 4, cmd_type, TARGET_UART);
#endif
}

void timer_cb_hotplug_detect(void)
{
    uint8_t cur_hotplug_state = gpio_read_pin(GPIO_SEL_10);
    if(last_hotplug_state != cur_hotplug_state)
    {
        debounce_cnt++;
    }
    else
    {
        debounce_cnt = 0;
    }

    if(debounce_cnt >= 3)
    {
        last_hotplug_state = cur_hotplug_state;
    }
}

void mic_jita_detect(void)
{
    gpio_config(GPIO_SEL_10, INPUT_SET_GPIO);
    timer_create(10, RUNNING_FOREVER, 0, &timer_cb_hotplug_detect);
}

void audio_path_config(void)
{
    audio_config_t audio_cfg;

    adc_dmic_cfg_t dmic_cfg;
	adc_hpf_cfg_t hfp_cfg;
    adc_cfg_t adc_cfg;

    i2s_cfg_t i2srx0_cfg;
    i2s_cfg_t i2stx0_cfg;

    memset(&audio_cfg, 0, sizeof(audio_cfg));

    audio_buf_init();

    dbg_print("g_sample_rate = %d\n", g_sample_rate);
/****************** I2SRX0 config parameters ******************/

    memset(&i2srx0_cfg, 0, sizeof(i2s_cfg_t));

    i2srx0_cfg.clk_group        = I2SCLK_GROUP0;
    i2srx0_cfg.mst_slv_mode     = SLAVE;
    i2srx0_cfg.sample_rate      = g_sample_rate;
    i2srx0_cfg.chan_width       = I2S_WIDTH_32BIT;

    i2srx0_cfg.mclk_gpio        = GPIO_SEL_NONE;
    i2srx0_cfg.bclk_gpio        = GPIO_SEL_3;
    i2srx0_cfg.lrclk_gpio       = GPIO_SEL_2;

    i2srx0_cfg.dataline_num     = LIN2;
    i2srx0_cfg.data_io[0]       = GPIO_SEL_16;
    i2srx0_cfg.data_io[1]       = GPIO_SEL_15;

    i2srx0_cfg.slot             = SLOT2;
    i2srx0_cfg.bclk2pll         = ENABLE;
    i2srx0_cfg.srd_en           = ENABLE;

    audio_cfg.i2srx0_cfg        = &i2srx0_cfg;
    audio_cfg.i2srx0_buf        = &i2srx0_buf;

/****************** I2STX0 config parameters ******************/

    memset(&i2stx0_cfg, 0, sizeof(i2s_cfg_t));

    i2stx0_cfg.clk_group        = I2SCLK_GROUP1;
    i2stx0_cfg.mst_slv_mode     = MASTER;
    i2stx0_cfg.sample_rate      = g_sample_rate;
    i2stx0_cfg.chan_width       = I2S_WIDTH_32BIT;

    i2stx0_cfg.mclk_gpio        = GPIO_SEL_NONE;
    i2stx0_cfg.bclk_gpio        = GPIO_SEL_4;
    i2stx0_cfg.lrclk_gpio       = GPIO_SEL_5;

    i2stx0_cfg.dataline_num     = LIN2;
    i2stx0_cfg.data_io[0]       = GPIO_SEL_12;
    i2stx0_cfg.data_io[1]       = GPIO_SEL_11;

    i2stx0_cfg.slot             = SLOT2;
    i2stx0_cfg.bclk2pll         = DISABLE;
    i2stx0_cfg.srd_en           = DISABLE;

    audio_cfg.i2stx0_cfg        = &i2stx0_cfg;
    audio_cfg.i2stx0_buf        = &i2stx0_buf;

/****************** ADC config parameters ******************/

    memset(&dmic_cfg, 0, sizeof(adc_dmic_cfg_t));
    memset(&hfp_cfg, 0, sizeof(adc_hpf_cfg_t));
    memset(&adc_cfg, 0, sizeof(adc_cfg_t));

    dmic_cfg.chan_sel           = DMIC_CHAN_LR;
    dmic_cfg.pre_gain           = DMIC_GAIN_1X;
    dmic_cfg.dmic_clk_pin       = GPIO_SEL_25;
    dmic_cfg.dmic_data_pin      = GPIO_SEL_26;

    hfp_cfg.ch0_hpf_en          = DISABLE;
    hfp_cfg.ch0_hpf_n           = 0;
    hfp_cfg.ch0_hpf_s           = 0;
    hfp_cfg.ch1_hpf_en          = DISABLE;
    hfp_cfg.ch1_hpf_n           = 0;
    hfp_cfg.ch1_hpf_s           = 0;

    adc_cfg.sample_rate         = g_sample_rate;
    adc_cfg.input_type          = g_mic_input_type;
    adc_cfg.dmic_cfg            = &dmic_cfg;
    adc_cfg.hpf_cfg             = &hfp_cfg;

    adc_cfg.ch0_input_mode      = ADC_SE_INPUT;
    adc_cfg.ch1_input_mode      = ADC_SE_INPUT;

// note: both again(analog gain) and dgain(digital gain) should be set with 1000x to avoid fractional part
// eg: '0' means 0dB, '6000' means +6dB, '-12000' means -12dB
    adc_cfg.ch0_again           = 0;
    adc_cfg.ch1_again           = 0;
    adc_cfg.ch0_dgain           = 0; // [-108, +63.625] dB
    adc_cfg.ch1_dgain           = 0; // [-108, +63.625] dB

    audio_cfg.adc_cfg           = &adc_cfg;
    audio_cfg.adc_buf           = &adc_buf;

/****************** audio parameters ******************/

    audio_init(audio_cfg);
}
