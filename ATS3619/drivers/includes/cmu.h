
#ifndef __CMU_H__
#define __CMU_H__


#include "basic.h"
#include "audio_basic.h"
#include "gpio.h"


/*
    cmu device clock enable register
    to enable clock source of peripheral devices
*/
typedef enum
{
    CLOCK_ID_DSP    	= 0,
    CLOCK_ID_ASRC   	= 1,
    CLOCK_ID_DMA    	= 2,
	CLOCK_ID_SPI0   	= 3,
    CLOCK_ID_I2C0   	= 4,
    CLOCK_ID_UART   	= 5,
	CLOCK_ID_SPI1   	= 6,
    CLOCK_ID_I2C1   	= 7,
    CLOCK_ID_ADC    	= 8,
	CLOCK_ID_DAC    	= 9,

	CLOCK_ID_I2STX0		= 12,
	CLOCK_ID_I2STX1		= 13,
	CLOCK_ID_I2SRX0		= 14,
	CLOCK_ID_I2SRX1		= 15,
    CLOCK_ID_I2STX5		= 16,
} dev_clock_id_e;


/*
    module reset control register
    to reset peripheral devices
*/
typedef enum
{
    RESET_ID_DSP    	= 0,
    RESET_ID_ASRC   	= 1,
    RESET_ID_DMA    	= 2,
	RESET_ID_SPI0   	= 3,
    RESET_ID_I2C0   	= 4,
    RESET_ID_UART   	= 5,
	RESET_ID_SPI1   	= 6,
    RESET_ID_I2C1   	= 7,
    RESET_ID_ADC    	= 8,
	RESET_ID_DAC    	= 9,
	RESET_ID_AUDIO_REF	= 10,

	RESET_ID_I2STX0		= 12,
	RESET_ID_I2STX1		= 13,
	RESET_ID_I2SRX0		= 14,
	RESET_ID_I2SRX1		= 15,
    RESET_ID_I2STX5		= 16,

	RESET_ID_I2SSRD0	= 18,
	RESET_ID_I2SSRD1	= 19,
	RESET_ID_I2SSRD2	= 20,
	RESET_ID_I2SSRD3	= 21,
} dev_rst_id_e;

/*
    module reset control register
    to reset peripheral devices
*/
typedef enum
{
    MRCR_RESET   = 0,
    MRCR_NORMAL  = 1,
} dev_rst_sta_e;

/*
    bclk detection status
    indicate the input slave bclk is valid or invalid
*/
typedef enum
{
    BCLK_VALID   = 0,
    BCLK_INVALID  = 1,
} bclk_det_sta_e;

typedef void (*bclk_det_cb_t)(bclk_det_sta_e);

int cmu_device_clock_enable(dev_clock_id_e dev_id, int status);
int cmu_device_reset(dev_rst_id_e dev_id, dev_rst_sta_e status);

void wdt_en(uint8_t enable);
void feed_wdt(void);

void sys_init(uint32_t dsp_freq_khz);

int audiopll_from_hosc(sample_rate_e sample_rate);
int audiopll_from_bclk(gpio_e bclk_io, uint32_t bclk_freq);

void cmu_bclk_detect_enable(gpio_e bclk_io, uint8_t clk_grp);
void cmu_bclk_detect_disable(void);

#endif /* __CMU_H__ */
