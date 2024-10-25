
#ifndef __DAC_H__
#define __DAC_H__


#include "audio_basic.h"
#include "asrc.h"
		

#define DAC_FIFO_LEVEL      (0xF)
#define DAC_DMA_WIDTH       (DAC_WIDTH_32BIT)
#define DAC_DITHER_EN       (ENABLE)
#define DAC_CHAN_SEL        (DAC_STRERO)
#define DAC_FIR_SEL         (DAC_FIR_A)



                              					
#define		AUTOMUTE_PA_EN										(1 << AUTO_MUTE_L_CTL_AUMUTE_PA_CTL)
#define		AUTOMUTE_SDM_EN										(1 << AUTO_MUTE_L_CTL_MUTE_SDM)
#define		AUTOMUTE_DIS										(0 << AUTO_MUTE_L_CTL_AUMUTE_PA_CTL)

#define		AUTOMUTE_PA_SDM_EN									AUTOMUTE_PA_EN | AUTOMUTE_SDM_EN

                              					
#define		PA_0p7vpp_large_res			  						0x0
#define		PA_1p4vpp_large_res			  						0x2
#define		PA_2p8vpp_large_res			  						0x4
#define		PA_5p6vpp_large_res			  						0x6
#define		PA_1p4vpp_small_res			  						0x1
#define		PA_2p8vpp_small_res			  						0x3
#define		PA_5p6vpp_small_res			  						0x5


typedef enum
{
	DACCLK_APLL_DIV4	= 0,
	DACCLK_HOSC			= 1,
} dac_clk_src_e;

typedef enum
{
	DAC_FIFO_0      = 0,
	DAC_FIFO_1      = 1,
} dac_fifo_e;

typedef enum
{
    DAC_FIFO_CPU_ACCESS = 0,
	DAC_FIFO_DMA_ACCESS	= 1,
} dac_fifo_access_e;

typedef enum
{
    DAC_WIDTH_32BIT     = 0,
    DAC_WIDTH_16BIT     = 1,
} dac_fifo_width_e;

typedef enum
{
	DAC_CIC_RATE_3072K  = 0, // dac cic rate 3.072/2.8224 MHz for high performance, refer to reg DAC_DIGCTL.CIC_RATE
	DAC_CIC_RATE_1536K  = 1, // dac cic rate 1.536/1.4112 MHz for lower power, refer to reg DAC_DIGCTL.CIC_RATE
} dac_cic_rate_e;

typedef enum
{
    DAC_CH_DISABLE      = 0, // dac no channel enable
    DAC_LCH_ENABLE      = 1, // dac left channel enable
    DAC_RCH_ENABLE      = 2, // dac right channel enable
    DAC_BOTH_CH_EN      = 3, // dac both two channel enable
} dac_ch_en_e;

typedef enum
{
    DAC_STRERO      = 0, // dac stereo output (default)
    DAC_MONO        = 1, // dac mono output
    DAC_MIX         = 2, // dac stereo, left & right channel mixed
} dac_chan_e;

typedef enum
{
    DAC_FIR_A        = 0, // high performance, narrow band, recommand 48KFS (default)
    DAC_FIR_B        = 1, // high performance, wild band, recommand 44.1KFS
    DAC_FIR_C        = 2, // ultra-low latency, recommand 16KFS
} dac_fir_e;

typedef struct
{
    sample_rate_e   sample_rate;
    int16_t         ch0_gain;
    int16_t         ch1_gain;
}dac_cfg_t;


void dac_init(dac_cfg_t* dac_cfg);
void dac_set_gain(dac_fifo_e _dac_fifo, int16_t ch0_gain, int16_t ch1_gain);
int dac_asrc_access_config(dac_fifo_e _dac_fifo, asrc_access_e fifo_access);

#endif /* __DAC_H__ */
