
#ifndef __ADC_H__
#define __ADC_H__


#include "gpio.h"
#include "audio_basic.h"
#include "asrc.h"



typedef enum
{
	ADCCLK_APLL_DIV4	= 0,
	ADCCLK_HOSC			= 1,
} adc_clk_src_e;

typedef enum
{
	ADC_AMIC_INPUT	= 0,
	ADC_DMIC_INPUT	= 1,
} adc_input_type_e;

typedef enum
{
    ADC_FIFO_CPU_ACCESS = 0,
	ADC_FIFO_DMA_ACCESS	= 1,
} adc_fifo_access_e;

typedef enum
{
	ADC_CH0     = 0,
	ADC_CH1     = 1,
} adc_chan_e;

typedef enum
{
    ADC_DIFF_INPUT  = 0, // adc input as differential mode, use inuptP and inputN as input
	ADC_SE_INPUT    = 1, // adc input as single-end mode, use inuptP or inputN as input (inuptP default)
} adc_input_mode_e;

typedef enum
{
    DMIC_GAIN_1X        = 0,
	DMIC_GAIN_2X        = 1,
    DMIC_GAIN_4X        = 2,
	DMIC_GAIN_8X        = 3,
    DMIC_GAIN_16X       = 4,
    DMIC_GAIN_32X       = 5,
    DMIC_GAIN_63X       = 6,
    DMIC_GAIN_127X      = 7,
} dmic_pre_gain_e;

typedef enum
{
    DMIC_CHAN_LR    = 0, // Latch left data on rising edge of clk
	DMIC_CHAN_RL	= 1, // Latch right data on rising edge of clk
} dmic_ch_sel_e;

typedef enum
{
    ADC_FIR_A = 0,
    ADC_FIR_B = 1,
    ADC_FIR_C = 2,
    ADC_FIR_D = 3,
    ADC_FIR_E = 4,
    ADC_FIR_F = 5,
    ADC_FIR_G = 6,
} adc_fir_mode_e;

typedef enum
{
    ADC_DATA_TO_FIFO = 0,
    ADC_DATA_TO_ASRC0 = 1,
    ADC_DATA_TO_ASRC1 = 2,
    ADC_DATA_TO_ASRC2 = 3,
    ADC_DATA_TO_ASRC3 = 4,
} adc_out_sel_e;

typedef struct{
	adc_clk_src_e       clk_src;
    adc_input_type_e    input_type;
}adc_clk_cfg_t;

typedef struct{
    uint16_t     ch0_hpf_en     : 1;
    uint16_t     ch1_hpf_en     : 1;
    uint16_t     ch0_hpf_s      : 1;
    uint16_t     ch1_hpf_s      : 1;
    uint16_t     ch0_hpf_n      : 6;
    uint16_t     ch1_hpf_n      : 6;
}adc_hpf_cfg_t;


typedef struct{
    dmic_pre_gain_e     pre_gain;
    dmic_ch_sel_e       chan_sel;
    gpio_e              dmic_clk_pin;
    gpio_e              dmic_data_pin;
}adc_dmic_cfg_t;

typedef struct{
    sample_rate_e           sample_rate;
    adc_input_type_e        input_type;
    adc_dmic_cfg_t          *dmic_cfg;
    adc_hpf_cfg_t           *hpf_cfg;
    adc_input_mode_e        ch0_input_mode;
    adc_input_mode_e        ch1_input_mode;
/*
note: both again(analog gain) and dgain(digital gain) should be set with 1000x to avoid fractional part
eg: '0' means 0dB, '6000' means +6dB, '-12000' means -12dB
*/
    int16_t                 ch0_again; /* ADC0_CTL.ADC_PREVOL, analog gain, for rough adjust */
    int16_t                 ch1_again; /* ADC1_CTL.ADC_PREVOL, analog gain, for rough adjust */
    int32_t                 ch0_dgain; /* CH0_GAIN.GAIN, digital gain, for fine adjust */
    int32_t                 ch1_dgain; /* CH1_GAIN.GAIN, digital gain, for fine adjust */
}adc_cfg_t;



void adc_set_digital_gain(adc_chan_e adc_ch, int32_t dgain);
int adc_init(adc_cfg_t *_adc_cfg);
int adc_asrc_access_config(asrc_access_e fifo_access);
void analog_digital_MIC_switch(adc_input_type_e eMICtype);

#endif /* __ADC_H__ */
