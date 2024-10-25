
#ifndef __AUDIO_BASIC_H__
#define __AUDIO_BASIC_H__

#include "basic.h"


#define AUDIO_PLL_FREQ_48K  (98304000)  // 98.304   MHz
#define AUDIO_PLL_FREQ_44K  (90316800)  // 90.3168  MHz


typedef enum
{
    DEV_ADC         = 0,
    DEV_DAC         = 1,
    DEV_I2SRX0      = 2,
    DEV_I2SRX1      = 3,
    DEV_I2STX0      = 4,
    DEV_I2STX1      = 5,
    DEV_I2STX5      = 6,
} audio_dev_e;


typedef enum
{
    /* 44.1KHz clock series */
    SR_11025        = 11025,
    SR_22050        = 22050,
    SR_44100        = 44100,
    SR_88200        = 88200,
    /* 48KHz clock series */
    SR_8000         = 8000,
    SR_12000        = 12000,
    SR_16000        = 16000,
    SR_24000        = 24000,
    SR_32000        = 32000,
    SR_48000        = 48000,
    SR_64000        = 64000,
    SR_96000        = 96000,
    /* only I2S support sample rate above 96KHz */
    SR_176400       = 176400,
    SR_192000       = 192000,
    SR_384000       = 384000,
} sample_rate_e;

#endif /* __AUDIO_BASIC_H__ */