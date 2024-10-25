
#include <xtensa/xtruntime.h>
#include <string.h>
#include "basic.h"
#include "cmu.h"
#include "dma.h"
#include "delay.h"

// #define DBG_PRINT_EN
#ifdef DBG_PRINT_EN
#include "printk.h"
#define dbg_print   printk
#else
#define dbg_print(...)
#endif


typedef struct dma_chan_reg {
	volatile uint32_t ctl;
	volatile uint32_t start;
	volatile uint32_t saddr0;
	volatile uint32_t saddr1;
	volatile uint32_t daddr0;
	volatile uint32_t daddr1;
	volatile uint32_t bc;
	volatile uint32_t rc;
} dma_chan_reg_t;

typedef struct dma_chan_para {
    uint32_t used;
    void *user_data;
    void (*dma_irq_user_cb)(uint32_t dma_chan, dma_irq_type_e irq_type, void *user_data);
} dma_chan_para_t;

static dma_chan_para_t dma_chan_para[DMA_MAX_CHANNELS];



void dma_device_init(void)
{
    /* cmu: disable dma clock */
    cmu_device_clock_enable(CLOCK_ID_DMA, DISABLE);
    /* cmu: enable dma clock */
	cmu_device_clock_enable(CLOCK_ID_DMA, ENABLE);

    /* mrcr: dma module reset */
	cmu_device_reset(RESET_ID_DMA, MRCR_RESET);
    delay(1);
    /* mrcr: dma module normal run */
	cmu_device_reset(RESET_ID_DMA, MRCR_NORMAL);

	memset(&dma_chan_para, 0, sizeof(dma_chan_para));
}

void dma_irq_handler(void *arg)
{
    uint32_t dma_irq_num = (uint32_t)arg;
    uint32_t pend_bit, irq_en_bit;
    uint32_t i;

    /* disable dma irq, avoid interrupt nesting */
    irq_en_bit = act_read(DMAIE);
    act_write(DMAIE, 0);

    /* record dma channel pend */
    pend_bit = act_read(DMAIP);

	xtos_interrupt_clear(dma_irq_num);

    for(i = 0; i < DMA_MAX_CHANNELS; i++)
    {
        /* check if dma chan is used */
        if(dma_chan_para[i].used == 0)
        {
            continue;
        }

        /* check if dma chan half transmit */
        if(irq_en_bit & pend_bit & (1 << (DMAIE_DMA0HFIE + i)))
        {
            /* write 1 to clear dma HF pend bit */
            do {
                act_write(DMAIP, 1 << (DMAIE_DMA0HFIE + i));
            }while(act_read(DMAIP) & (1 << (DMAIE_DMA0HFIE + i)));

            if(dma_chan_para[i].dma_irq_user_cb != NULL)
            {
                dma_chan_para[i].dma_irq_user_cb(i, DMA_IRQ_HF, dma_chan_para[i].user_data);
            }
        }

        /* check if dma chan transmit complete */
        if(irq_en_bit & pend_bit & (1 << (DMAIE_DMA0TCIE + i)))
        {
            /* write 1 to clear dma TC pend bit */
            do {
                act_write(DMAIP, 1 << (DMAIE_DMA0TCIE + i));
            }while(act_read(DMAIP) & (1 << (DMAIE_DMA0TCIE + i)));

            if(dma_chan_para[i].dma_irq_user_cb != NULL)
            {
                dma_chan_para[i].dma_irq_user_cb(i, DMA_IRQ_TC, dma_chan_para[i].user_data);
            }
        }
    }
    act_write(DMAIE, irq_en_bit);
}

int dma_config(dma_chan_config_t *_config)
{
    dma_chan_reg_t *reg_base = (dma_chan_reg_t *)DMA_CH_BASE(_config->dma_chan);
    uint32_t reg_val = 0;
    uint32_t dma_irq_num;

    if(_config->dma_chan >= DMA_MAX_CHANNELS)
    {
        dbg_print("%d invalid dma chan %d\n", __LINE__, _config->dma_chan);
        return -1;
    }

    dma_chan_para[_config->dma_chan].user_data = _config->user_data;
    dma_chan_para[_config->dma_chan].dma_irq_user_cb = _config->dma_irq_user_cb;
    dma_chan_para[_config->dma_chan].used = 1;

    /* config dma control reg */
    reg_val |= _config->trans_width << DMA0CTL_TWS_SHIFT;
    reg_val |= _config->reload << DMA0CTL_RELOAD;
    reg_val |= _config->trans_mode << DMA0CTL_TRM;
    reg_val |= _config->audio_type << DMA0CTL_AUDIOTYPE;

    /* config dma dest type */
    if(_config->dest_type != DMA_DEST_MEMORY)
    {
        reg_val |= DMA_DAM_CONST << DMA0CTL_DAM;
    }
    else
    {
        reg_val |= DMA_DAM_INCRE << DMA0CTL_DAM;
    }
    reg_val |= _config->dest_type << DMA0CTL_DSTSL_SHIFT;

    /* config dma src type */
    if(_config->src_type != DMA_SRC_MEMORY)
    {
        reg_val |= DMA_SAM_CONST << DMA0CTL_SAM;
    }
    else
    {
        reg_val |= DMA_SAM_INCRE << DMA0CTL_SAM;
    }
    reg_val |= _config->src_type << DMA0CTL_SRCSL_SHIFT;

    reg_base->ctl = reg_val;

    /* config dma dest/src addr */
    reg_base->daddr0 = _config->daddr0;
    reg_base->saddr0 = _config->saddr0;

    if(_config->audio_type == DMA_SEPARATED)
    {
        reg_base->daddr1 = _config->daddr1;
        reg_base->saddr1 = _config->saddr1;
    }

    if(_config->bytes > 0xfffff)
    {
        dbg_print("dma too much bytes %d\n", _config->bytes);
        return -1;
    }
    else
    {
        reg_base->bc = _config->bytes;
    }

    /* config dma irq */
    if(_config->irq_type != DMA_IRQ_NONE)
    {
        dma_irq_num = DMA_CH_TO_IRQ_NUM(_config->dma_chan);
        xtos_interrupt_disable(dma_irq_num);
        xtos_set_interrupt_handler(dma_irq_num, (xtos_handler)dma_irq_handler, (void *)dma_irq_num, NULL);
        xtos_interrupt_enable(dma_irq_num);

    	if(_config->irq_type & DMA_IRQ_HF)
		{
			act_or(DMAIE, 1 << (_config->dma_chan + DMAIE_DMA0HFIE));
		}

		if(_config->irq_type & DMA_IRQ_TC)
		{
			act_or(DMAIE, 1 << (_config->dma_chan));
		}
    }
#if 0
    if(_config->dma_chan < 14)
    {
        dbg_print("DMA_IE 0x%x\n", act_read(DMAIE));
        dbg_print("DMA%d_CTL 0x%x\n", _config->dma_chan, reg_base->ctl);
        dbg_print("DMA%d_SADDR0 0x%x\n", _config->dma_chan, reg_base->saddr0);
        dbg_print("DMA%d_DADDR0 0x%x\n", _config->dma_chan, reg_base->daddr0);
        dbg_print("DMA%d_BC 0x%x\n", _config->dma_chan, reg_base->bc);
    }
#endif
    return 0;
}

void dma_start(uint32_t dma_chan)
{
    dma_chan_reg_t *reg_base = (dma_chan_reg_t *)DMA_CH_BASE(dma_chan);
    reg_base->start = 1;
}

void dma_abort(uint32_t dma_chan)
{
    dma_chan_reg_t *reg_base = (dma_chan_reg_t *)DMA_CH_BASE(dma_chan);

    do{
        reg_base->start = 0;
    }while(reg_base->start != 0);
}

void dma_reload(uint32_t dma_chan, uint32_t daddr, uint32_t saddr, uint32_t bytes)
{
    dma_chan_reg_t *reg_base = (dma_chan_reg_t *)DMA_CH_BASE(dma_chan);

    reg_base->daddr0 = daddr;
    reg_base->saddr0 = saddr;
    reg_base->bc = bytes;
}

int dma_get_remain_bytes(uint32_t dma_chan)
{
    dma_chan_reg_t *reg_base = (dma_chan_reg_t *)DMA_CH_BASE(dma_chan);
    return reg_base->rc;
}

int dma_chan_is_busy(uint32_t dma_chan)
{
    dma_chan_reg_t *reg_base = (dma_chan_reg_t *)DMA_CH_BASE(dma_chan);
    return reg_base->start;
}

void dma_free(uint32_t dma_chan)
{
	dma_chan_reg_t *reg_base = (dma_chan_reg_t *)DMA_CH_BASE(dma_chan);

    reg_base->ctl = 0;
	dma_chan_para[dma_chan].dma_irq_user_cb = NULL;
	dma_chan_para[dma_chan].used = 0;
}

