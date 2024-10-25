
#ifndef _AUDIO_CONFIG_H_
#define _AUDIO_CONFIG_H_


#include "audio_basic.h"

#include "gpio.h"
#include "adc.h"
#include "dac.h"
#include "i2s.h"
#include "asrc.h"



#define AUDIO_SAMP_PER_FRAME            (64)  // mono samples per frame
#define AUDIO_SAMP_WIDTH_BYTES          (4)   // 32bit

#define AUDIO_I2SRX0_CHAN               (4)   // i2srx0 channel
#define AUDIO_I2SRX1_CHAN               (2)   // i2srx1 channel
#define AUDIO_I2STX0_CHAN               (4)   // i2stx0 channel
#define AUDIO_I2STX1_CHAN               (2)   // i2stx1 channel
#define AUDIO_ADC_CHAN                  (2)   // adc channel
#define AUDIO_DAC_CHAN                  (2)   // dac channel

#define AUDIO_I2SRX0_FRAME_SIZE         (AUDIO_SAMP_PER_FRAME * AUDIO_SAMP_WIDTH_BYTES * AUDIO_I2SRX0_CHAN)
#define AUDIO_I2SRX1_FRAME_SIZE         (AUDIO_SAMP_PER_FRAME * AUDIO_SAMP_WIDTH_BYTES * AUDIO_I2SRX1_CHAN)
#define AUDIO_I2STX0_FRAME_SIZE         (AUDIO_SAMP_PER_FRAME * AUDIO_SAMP_WIDTH_BYTES * AUDIO_I2STX0_CHAN)
#define AUDIO_I2STX1_FRAME_SIZE         (AUDIO_SAMP_PER_FRAME * AUDIO_SAMP_WIDTH_BYTES * AUDIO_I2STX1_CHAN)
#define AUDIO_ADC_FRAME_SIZE            (AUDIO_SAMP_PER_FRAME * AUDIO_SAMP_WIDTH_BYTES * AUDIO_ADC_CHAN)
#define AUDIO_DAC_FRAME_SIZE            (AUDIO_SAMP_PER_FRAME * AUDIO_SAMP_WIDTH_BYTES * AUDIO_DAC_CHAN)

#define AUDIO_I2SRX0_BUF_SIZE           (AUDIO_I2SRX0_FRAME_SIZE * 2)
#define AUDIO_I2SRX1_BUF_SIZE           (AUDIO_I2SRX1_FRAME_SIZE * 2)
#define AUDIO_I2STX0_BUF_SIZE           (AUDIO_I2STX0_FRAME_SIZE * 2)
#define AUDIO_I2STX1_BUF_SIZE           (AUDIO_I2STX1_FRAME_SIZE * 2)
#define AUDIO_ADC_BUF_SIZE              (AUDIO_ADC_FRAME_SIZE    * 2)
#define AUDIO_DAC_BUF_SIZE              (AUDIO_DAC_FRAME_SIZE    * 2)


#define RX0_DMA_CH      (0)
#define TX0_DMA_CH      (1)
#define ADC_DMA_CH      (2)
#define RX1_DMA_CH      (3)
#define TX1_DMA_CH      (4)
#define DAC_DMA_CH      (5)



typedef struct
{
	uint16_t dma_ch;
	volatile uint8_t rpos;
	volatile uint8_t wpos;

    int32_t buf_addr;
    uint32_t buf_bytes;
}audio_buf_t;

typedef struct
{
    i2s_cfg_t           *i2srx0_cfg;
    i2s_cfg_t           *i2srx1_cfg;
    i2s_cfg_t           *i2stx0_cfg;
    i2s_cfg_t           *i2stx1_cfg;
    adc_cfg_t           *adc_cfg;
    dac_cfg_t           *dac_cfg;
    asrc_cfg_t          *asrc_cfg;
    audio_buf_t         *i2srx0_buf;
    audio_buf_t         *i2srx1_buf;
    audio_buf_t         *adc_buf;
    audio_buf_t         *i2stx0_buf;
    audio_buf_t         *i2stx1_buf;
    audio_buf_t         *dac_buf;
}audio_config_t;


extern audio_buf_t i2srx0_buf;
extern audio_buf_t i2stx0_buf;
extern audio_buf_t adc_buf;


void get_dma_pingpang_buff(int *pin0, int *pin1, int *pout0, int *pout1);
void release_dma_pingpang_buff(int *pin0, int *pin1, int *pout0, int *pout1);

int audio_dma_config(audio_dev_e audio_dev, audio_buf_t *_buf_config);

void audio_buf_init(void);
void audio_init(audio_config_t audio_config);
void audio_path_config(void);
void audio_path_deinit(void);


#endif /* _AUDIO_CONFIG_H_ */
