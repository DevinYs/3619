
#include <string.h>
#include "audio_config.h"
#include "cmu.h"
#include "dma.h"

//#define DBG_PRINT_EN
#ifdef DBG_PRINT_EN
#include "printk.h"
#define dbg_print   printk
#else
#define dbg_print(...)
#endif

static unsigned char __attribute__ ((aligned (64))) I2SRX0_BUF[AUDIO_I2SRX0_BUF_SIZE];
static unsigned char __attribute__ ((aligned (64))) I2STX0_BUF[AUDIO_I2STX0_BUF_SIZE];
static unsigned char __attribute__ ((aligned (64))) ADC_BUF[AUDIO_ADC_BUF_SIZE];


audio_buf_t i2srx0_buf;
audio_buf_t i2stx0_buf;
audio_buf_t adc_buf;

extern uint32_t g_reinit_flag;


void audio_buf_init(void)
{
    memset(&i2srx0_buf, 0, sizeof(i2srx0_buf));
    i2srx0_buf.buf_addr = (int32_t)I2SRX0_BUF;
    i2srx0_buf.buf_bytes = AUDIO_I2SRX0_BUF_SIZE;
    i2srx0_buf.dma_ch   = RX0_DMA_CH;

	memset(&i2stx0_buf, 0, sizeof(i2stx0_buf));
    i2stx0_buf.buf_addr = (int32_t)I2STX0_BUF;
    i2stx0_buf.buf_bytes = AUDIO_I2STX0_BUF_SIZE;
	i2stx0_buf.dma_ch   = TX0_DMA_CH;

	memset(&adc_buf, 0, sizeof(adc_buf));
    adc_buf.buf_addr = (int32_t)ADC_BUF;
    adc_buf.buf_bytes = AUDIO_ADC_BUF_SIZE;
	adc_buf.dma_ch   = ADC_DMA_CH;

}

void get_dma_pingpang_buff(int *pin0, int *pin1, int *pout, int *pout1)
{
    int get_flag_in0 = 0, get_flag_in1 = 0, get_flag_out = 0, get_flag_out1 = 0;

    while(1)
    {
        if(pin0 != 0)
        {
            if((get_flag_in0 == 0) && (i2srx0_buf.rpos != i2srx0_buf.wpos))
            {
				get_flag_in0 = 1;
                if ((i2srx0_buf.rpos % 2) == 0)
                    *pin0 = i2srx0_buf.buf_addr;
                else
                    *pin0 = i2srx0_buf.buf_addr + i2srx0_buf.buf_bytes/2;
            }
        }
        else
        {
            get_flag_in0 = 1;
        }

        if(pin1 != 0)
        {
        	if((get_flag_in1 == 0) && (adc_buf.rpos != adc_buf.wpos))
            {
				get_flag_in1 = 1;
                if ((adc_buf.rpos % 2) == 0)
                    *pin1 = adc_buf.buf_addr;
                else
                    *pin1 = adc_buf.buf_addr + adc_buf.buf_bytes/2;
            }
        }
        else
        {
            get_flag_in1 = 1;
        }

        if(pout != 0)
        {
        	if(get_flag_out == 0)
            {
				get_flag_out = 1;
                if ((i2stx0_buf.rpos % 2) == 0)
                    *pout = i2stx0_buf.buf_addr;
                else
                    *pout = i2stx0_buf.buf_addr + i2stx0_buf.buf_bytes/2;
            }
        }
        else
        {
            get_flag_out = 1;
        }
#if 0
        if(pout1 != 0)
        {
        	if(get_flag_out1 == 0)
            {
				get_flag_out1 = 1;
                if ((dac_buf.rpos % 2) == 0)
                    *pout1 = dac_buf.buf_addr;
                else
                    *pout1 = dac_buf.buf_addr + dac_buf.buf_bytes/2;
            }
        }
        else
        {
            get_flag_out1 = 1;
        }
#else
        get_flag_out1 = 1;
#endif

        if(g_reinit_flag == ENABLE)
    	{
        	break;
    	}

        if((get_flag_in0==1) && (get_flag_in1==1) && (get_flag_out==1) && (get_flag_out1 ==1))
        {
            break;
        }
    }
}

void release_dma_pingpang_buff(int *pin0, int *pin1, int *pout, int *pout1)
{
    if(pin0 != 0)
    {
    	i2srx0_buf.rpos++;
    }

    if(pin1 != 0)
    {
    	adc_buf.rpos++;
    }

    if(pout != 0)
    {
    	i2stx0_buf.rpos++;
    }
#if 0
    if(pout1 != 0)
    {
    	dac_buf.rpos++;
    }
#endif
}


void audio_dma_cb(uint32_t dma_chan, dma_irq_type_e irq_type, void *user_data)
{
    audio_buf_t *_buf = (audio_buf_t *)user_data;
    _buf->wpos++;
}

int audio_dma_config(audio_dev_e audio_dev, audio_buf_t *_buf_config)
{
    dma_chan_config_t dma_cfg;

    if(_buf_config == NULL)
    {
        dbg_print("audio buf of dev%d not exist\n", audio_dev);
        return -1;
    }

    memset(&dma_cfg, 0, sizeof(dma_cfg));

    dma_cfg.trans_width  = DMA_TWS_32BIT;
    dma_cfg.reload       = DMA_RELOAD_ENABLE;
    dma_cfg.trans_mode   = DMA_BURST8;
    dma_cfg.audio_type   = DMA_INTERLEAVED;
    dma_cfg.irq_type     = DMA_IRQ_HF_TC;

    dma_cfg.dest_type    = DMA_DEST_MEMORY;
    dma_cfg.src_type     = DMA_SRC_MEMORY;

    dma_cfg.dma_chan     = _buf_config->dma_ch;
    dma_cfg.bytes        = _buf_config->buf_bytes;

    if(audio_dev == DEV_I2SRX0)
    {
        dma_cfg.src_type     = DMA_SRC_IIS0_RX;
        dma_cfg.daddr0       = _buf_config->buf_addr;
        dma_cfg.saddr0       = I2SRX0_DAT;
    }
    else if(audio_dev == DEV_I2SRX1)
    {
        dma_cfg.src_type     = DMA_SRC_IIS1_RX;
        dma_cfg.daddr0       = _buf_config->buf_addr;
        dma_cfg.saddr0       = I2SRX0_DAT;
    }
    else if(audio_dev == DEV_I2STX0)
    {
        dma_cfg.dest_type    = DMA_DEST_IIS0_TX;
        dma_cfg.daddr0       = I2STX0_DAT;
        dma_cfg.saddr0       = _buf_config->buf_addr;
    }
    else if(audio_dev == DEV_I2STX1)
    {
        dma_cfg.dest_type    = DMA_DEST_IIS1_TX;
        dma_cfg.daddr0       = I2STX1_DAT;
        dma_cfg.saddr0       = _buf_config->buf_addr;
    }
    else if(audio_dev == DEV_ADC)
    {
        dma_cfg.src_type     = DMA_SRC_ADC;
        dma_cfg.daddr0       = _buf_config->buf_addr;
        dma_cfg.saddr0       = ADC_FIFO0_DAT;
    }
    else if(audio_dev == DEV_DAC)
    {
        dma_cfg.dest_type    = DMA_DEST_DAC0;
        dma_cfg.daddr0       = DAC_DAT_FIFO0;
        dma_cfg.saddr0       = _buf_config->buf_addr;
    }
    else{
        dbg_print("invalid audio device %d\n", audio_dev);
        return -1;
    }

    dma_cfg.user_data    = (void *)_buf_config;
    dma_cfg.dma_irq_user_cb   = audio_dma_cb;

    dma_config(&dma_cfg);

    return 0;
}

void audio_init(audio_config_t audio_config)
{
    uint32_t i2s_use = 0;
    sample_rate_e default_fs = SR_48000;
    gpio_e slave_lrclk_gpio = GPIO_SEL_NONE;

    if(audio_config.i2stx0_cfg && audio_config.i2stx0_cfg->sample_rate)
    {
        default_fs = audio_config.i2stx0_cfg->sample_rate;
    }

    audiopll_from_hosc(default_fs);
    i2s_clock_source_init();

    if(audio_config.i2srx0_cfg != NULL)
    {
        audio_dma_config(DEV_I2SRX0, audio_config.i2srx0_buf);
        i2s_init(DEV_I2SRX0, audio_config.i2srx0_cfg);
        if(audio_config.i2srx0_cfg->mst_slv_mode == SLAVE)
        {
            slave_lrclk_gpio = audio_config.i2srx0_cfg->lrclk_gpio;
        }
        i2s_use |= 1<<8;
    }
    if(audio_config.i2srx1_cfg != NULL)
    {
        audio_dma_config(DEV_I2SRX1, audio_config.i2srx1_buf);
        i2s_init(DEV_I2SRX1, audio_config.i2srx1_cfg);
        if(audio_config.i2srx1_cfg->mst_slv_mode == SLAVE)
        {
            slave_lrclk_gpio = audio_config.i2srx1_cfg->lrclk_gpio;
        }
        i2s_use |= 1<<9;
    }
    if(audio_config.i2stx0_cfg != NULL)
    {
        audio_dma_config(DEV_I2STX0, audio_config.i2stx0_buf);
        i2s_init(DEV_I2STX0, audio_config.i2stx0_cfg);
        if(audio_config.i2stx0_cfg->mst_slv_mode == SLAVE)
        {
            slave_lrclk_gpio = audio_config.i2stx0_cfg->lrclk_gpio;
        }
        i2s_use |= 1<<0;
    }
    if(audio_config.i2stx1_cfg != NULL)
    {
        audio_dma_config(DEV_I2STX1, audio_config.i2stx1_buf);
        i2s_init(DEV_I2STX1, audio_config.i2stx1_cfg);
        if(audio_config.i2stx1_cfg->mst_slv_mode == SLAVE)
        {
            slave_lrclk_gpio = audio_config.i2stx1_cfg->lrclk_gpio;
        }
        i2s_use |= 1<<1;
    }
    if(audio_config.adc_cfg != NULL)
    {
        audio_dma_config(DEV_ADC, audio_config.adc_buf);
        adc_init(audio_config.adc_cfg);
    }
    if(audio_config.dac_cfg != NULL)
    {
        audio_dma_config(DEV_DAC, audio_config.dac_buf);
        dac_init(audio_config.dac_cfg);
    }

	if(i2s_use)
	{
        i2s_start(i2s_use, slave_lrclk_gpio);
	}

    dma_start(i2srx0_buf.dma_ch);
    dma_start(i2stx0_buf.dma_ch);
    dma_start(adc_buf.dma_ch);
}


void audio_path_deinit(void)
{
    /* disable dma irq */
    act_write(DMAIE, 0);
}

