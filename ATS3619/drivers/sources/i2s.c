
#include <xtensa/xtruntime.h>
#include <string.h>
#include "cmu.h"
#include "audio_basic.h"
#include "i2s.h"
#include "gpio.h"
#include "delay.h"

// #define DBG_PRINT_EN
#ifdef DBG_PRINT_EN
#include "printk.h"
#define dbg_print   printk
#else
#define dbg_print(...)
#endif

#define I2SSRD0_IRQ_NUM     (19)
#define I2SSRD1_IRQ_NUM     (20)
#define I2SSRD2_IRQ_NUM     (21)
#define I2SSRD3_IRQ_NUM     (22)

#define I2S_MCLK_MFP        ((1<<15)|(1<<12)|(9<<0))
#define I2S_BCLK_MFP        ((1<<15)|(1<<12)|(17<<0))
#define I2S_LRCLK_MFP       ((1<<15)|(1<<12)|(13<<0))

#define I2STX0_D0_MFP       ((1<<15)|(1<<12)|(21<<0))
#define I2STX1_D0_MFP       ((1<<15)|(1<<12)|(29<<0))
#define I2SRX0_D0_MFP	    ((1<<15)|(1<<12)|(37<<0))
#define I2SRX1_D0_MFP	    ((1<<15)|(1<<12)|(45<<0))
#define I2STX5_D0_MFP	    ((1<<15)|(1<<12)|(56<<0))

const int16_t _lrclk_div_table[] = {16, 32, 64, 128, 256, 512};
const int16_t _clock_div_table[] = {1, 2, 3, 4, 6, 8, 12, 16, 24, 32, 48, 96};

/************************************ CMU I2S CLOCK GROUP config ************************************/
void i2s_clock_source_init(void)
{
    uint32_t reg_val = 0;
    /* cmu: disable all i2s clock */
    act_and(CMU_DEVCLKEN, (~((1 << CLOCK_ID_I2SRX0) | (1 << CLOCK_ID_I2SRX1) | (1 << CLOCK_ID_I2STX0) | (1 << CLOCK_ID_I2STX1) | (1 << CLOCK_ID_I2STX5))));

    act_write(CMU_I2SG0CLK, 0x00400020); // default value
    act_write(CMU_I2SG1CLK, 0x00400020); // default value
    act_write(CMU_I2SG2CLK, 0x00400020); // default value
    act_write(CMU_I2SG3CLK, 0x00400020); // default value
    act_write(CMU_I2SRXCLK, 0);
    act_write(CMU_I2STXCLK, 0);
    /* cmu: enable all i2s clock */
    act_or(CMU_DEVCLKEN, ((1 << CLOCK_ID_I2SRX0) | (1 << CLOCK_ID_I2SRX1) | (1 << CLOCK_ID_I2STX0) | (1 << CLOCK_ID_I2STX1) | (1 << CLOCK_ID_I2STX5)));

    /* mrcr: all i2s module reset */
	act_and(MRCR0, (~((1 << RESET_ID_I2SRX0) | (1 << RESET_ID_I2SRX1) | (1 << RESET_ID_I2STX0) | (1 << RESET_ID_I2STX1) | (1 << RESET_ID_I2STX5)\
                     | (1 << RESET_ID_I2SSRD0) | (1 << RESET_ID_I2SSRD1) | (1 << RESET_ID_I2SSRD2) | (1 << RESET_ID_I2SSRD3))));
    delay(1);
    /* mrcr: all i2s module normal run */
    act_or(MRCR0, ((1 << RESET_ID_I2SRX0) | (1 << RESET_ID_I2SRX1) | (1 << RESET_ID_I2STX0) | (1 << RESET_ID_I2STX1) | (1 << RESET_ID_I2STX5)\
                    | (1 << RESET_ID_I2SSRD0) | (1 << RESET_ID_I2SSRD1) | (1 << RESET_ID_I2SSRD2) | (1 << RESET_ID_I2SSRD3)));
}

static int get_clock_div(int16_t clk_div, const int16_t table[], uint8_t len)
{
    for(int i = 0; i < len; i++)
    {
        if(table[i] == clk_div)
        {
            return i;
        }
    }
    dbg_print("i2s clk div err %d\n", clk_div);
    return -1;
}

static int i2s_clk_group_init(i2s_cfg_t* i2s_cfg)
{
    uint32_t reg_val =  (0 << CMU_I2SG0CLK_BCLKORVS) |                     // do not reverse bclk output to pad
                        (0b01 << CMU_I2SG0CLK_LRCLKDEBTHRD_SHIFT) |        // set lrclk debounce threshold 2.4ns (default value)
                        (1 << CMU_I2SG0CLK_LRCLKDEBEN) |                   // disable lrclk debounce, bypass
                        (0 << CMU_I2SG0CLK_LRCLKPROC_SHIFT) |              // lrclk process 50% duty (default value)
                        (0 << CMU_I2SG0CLK_BCLKDIV_SHIFT) |                // bclk is equal to mclk divided by 4 (default value)
                        (0 << CMU_I2SG0CLK_BCLKEXTREV) |                   // do not reverse bclk from external
                        (1 << CMU_I2SG0CLK_BCLKDEBEN) |                    // disable bclk debounce, bypass
                        (0 << CMU_I2SG0CLK_MCLKEXTREV) |                   // do not reverse mclk from external
                        (0 << CMU_I2SG0CLK_MCLKSRC_SHIFT) |                // use I2SCLKGx as clock source, only G0 could choose other clock source (DAC_256FS or External)
                        (1 << CMU_I2SG0CLK_G0CLKEN) |                      // enable i2s clock group
                        (0b01 << CMU_I2SG0CLK_BCLKDEBTHRD_SHIFT);          // set bclk debounce threshold 2.4ns (default value)

    uint8_t _chan_width = (i2s_cfg->chan_width == I2S_WIDTH_32BIT) ? 32 : 16;
    uint8_t _slot = 1 << i2s_cfg->slot;

    int16_t lrclk_div = _slot * _chan_width;
    uint32_t bclk_freq = i2s_cfg->sample_rate * lrclk_div; // bclk = lrclk * slot * bit_width

    int16_t clock_div = 0;

    gpio_config(i2s_cfg->bclk_gpio, (I2S_BCLK_MFP + i2s_cfg->clk_group)); // config gpio mfp as bclk
    gpio_config(i2s_cfg->lrclk_gpio, (I2S_LRCLK_MFP + i2s_cfg->clk_group)); // config gpio mfp as lrclk

    if(i2s_cfg->slot > SLOT2)
    {
        reg_val |= 1 << CMU_I2SG0CLK_LRCLKPROC_SHIFT; // normally we config pulse width of LRCLK as 1bclk when tdm mode
    }

    if(i2s_cfg->mst_slv_mode == MASTER)
    {
        lrclk_div = get_clock_div(lrclk_div, _lrclk_div_table, ARRAY_SIZE(_lrclk_div_table));
        if(lrclk_div == -1)
        {
            return -1;
        }

        switch (i2s_cfg->sample_rate)
        {
            /* 44.1 KHz clock series */
            case SR_11025 :
            case SR_22050 :
            case SR_44100 :
            case SR_88200 :
            case SR_176400 :
                clock_div = (AUDIO_PLL_FREQ_44K / 4) / bclk_freq; // we use "mclk = 4 * bclk" as default
            break;
            /* 48 KHz clock series */
            default:
                clock_div = (AUDIO_PLL_FREQ_48K / 4) / bclk_freq; // we use "mclk = 4 * bclk" as default
            break;
        }

        clock_div = get_clock_div(clock_div, _clock_div_table, ARRAY_SIZE(_clock_div_table));
        if(clock_div == -1)
        {
            return -1;
        }

        reg_val |= (1 << CMU_I2SG0CLK_LRCLKOEN)                     // master, output lrclk
                 | (1 << CMU_I2SG0CLK_BCLKOEN)                      // master, output bclk
                 | (0 << CMU_I2SG0CLK_BLRCLKSRC)                    // master, bclk/lrclk from dsp own mclk
                 | (lrclk_div << CMU_I2SG0CLK_LRCLKDIV_SHIFT)       // config lrclk_div, lrclk_div = bclk / lrclk
                 | (clock_div << CMU_I2SG0CLK_G0CLKDIV_SHIFT);      // config clock_div, clock_div = audioPLL / mclk

        if(i2s_cfg->mclk_gpio != GPIO_SEL_NONE)
        {
            reg_val |= (1 << CMU_I2SG0CLK_MCLKOEN);                 // master, enbale mclk output
            gpio_config(i2s_cfg->mclk_gpio, (I2S_MCLK_MFP + i2s_cfg->clk_group)); // config gpio mfp as mclk
        }

        act_write((CMU_I2SG0CLK + 4 * i2s_cfg->clk_group), reg_val);
    }
    else // i2s_cfg->mst_slv_mode == SLAVE
    {
        if(i2s_cfg->bclk2pll == ENABLE)
        {
            audiopll_from_bclk(i2s_cfg->bclk_gpio, bclk_freq);
        }
        reg_val |= (0 << CMU_I2SG0CLK_LRCLKOEN)                     // slave, receive lrclk
                 | (0 << CMU_I2SG0CLK_BCLKOEN)                      // slave, receive bclk
                 | (1 << CMU_I2SG0CLK_BLRCLKSRC)                    // slave, bclk/lrclk receive through pad
                 | (lrclk_div << CMU_I2SG0CLK_LRCLKDIV_SHIFT);      // config lrclk_div, lrclk_div = bclk / lrclk

        act_write((CMU_I2SG0CLK + 4 * i2s_cfg->clk_group), reg_val);

        cmu_bclk_detect_enable(i2s_cfg->bclk_gpio, i2s_cfg->clk_group);
    }

    dbg_print("I2SCLKG%d 0x%x\n", i2s_cfg->clk_group, act_read(CMU_I2SG0CLK + 4 * i2s_cfg->clk_group));
    return 0;
}

static void i2s_assign_clk_group_to_interface(audio_dev_e i2s_interface, clk_group_e i2s_clk_group)
{
    uint32_t reg_addr = 0;
    uint32_t reg_val = 0;

    switch(i2s_interface)
    {
        case DEV_I2SRX0:
			reg_addr = CMU_I2SRXCLK;
            reg_val = (1 << CMU_I2SRXCLK_I2SRX0FIFOCLKEN) | (i2s_clk_group << CMU_I2SRXCLK_I2SRX0CLKSRC_SHIFT);
		break;

		case DEV_I2SRX1:
			reg_addr = CMU_I2SRXCLK;
            reg_val = (1 << CMU_I2SRXCLK_I2SRX1FIFOCLKEN) | (i2s_clk_group << CMU_I2SRXCLK_I2SRX1CLKSRC_SHIFT);
		break;

		case DEV_I2STX0:
			reg_addr = CMU_I2STXCLK;
            reg_val = (1 << CMU_I2STXCLK_I2STX0FIFOCLKEN) | (i2s_clk_group << CMU_I2STXCLK_I2STX0CLKSRC_SHIFT);
		break;

		case DEV_I2STX1:
			reg_addr = CMU_I2STXCLK;
            reg_val = (1 << CMU_I2STXCLK_I2STX1FIFOCLKEN) | (i2s_clk_group << CMU_I2STXCLK_I2STX1CLKSRC_SHIFT);
		break;

        case DEV_I2STX5:/* I2STX5 can only use I2SCLKG0 as clock source */
		default:{dbg_print("i2s interface err\n");return;}
    }
    act_write(reg_addr, reg_val);

    dbg_print("CMU_I2SRXCLK 0x%x\n", act_read(CMU_I2SRXCLK));
    dbg_print("CMU_I2STXCLK 0x%x\n", act_read(CMU_I2STXCLK));
}


static int i2s_dataline_mfp_config(audio_dev_e i2s_interface, i2s_cfg_t* i2s_cfg)
{
	int i = 0;
	uint32_t mfp_val_base = MFP_SET_GPIO;

	if(i2s_cfg->dataline_num > LIN8) // i2s supports 8 dataline maximum
	{
		dbg_print("i2s dataline err %d\n", i2s_cfg->dataline_num);
		return -1;
	}

	switch(i2s_interface)
	{
		case DEV_I2SRX0:{mfp_val_base = I2SRX0_D0_MFP; break;}
		case DEV_I2SRX1:{mfp_val_base = I2SRX1_D0_MFP; break;}
		case DEV_I2STX0:{mfp_val_base = I2STX0_D0_MFP; break;}
		case DEV_I2STX1:{mfp_val_base = I2STX1_D0_MFP; break;}
        case DEV_I2STX5:{mfp_val_base = I2STX5_D0_MFP; i2s_cfg->dataline_num = LIN1; break;}
		default:{dbg_print("i2s interface err\n");return -1;}
	}

	for(i = 0; i < i2s_cfg->dataline_num + 1; i++)
	{
		act_write((GPIO_BASE + (i2s_cfg->data_io[i]) * 4), (mfp_val_base + i));
	}

	return 0;
}

/************************************ I2S CTL config ************************************/
static void i2s_ctl_config(audio_dev_e i2s_interface, i2s_cfg_t* i2s_cfg)
{
    uint32_t reg_addr = 0;
    uint32_t reg_val = 0;

    reg_val = (0 << I2STX0_CTL_SENDCPU_INTEN)                               // disable i2s irq to INTC
            | (i2s_cfg->dataline_num << I2STX0_CTL_DLINE_SHIFT)             // config dataline num
            | (i2s_cfg->slot << I2STX0_CTL_SLOT_SHIFT)                      // config channel num
            | (1 << I2STX0_CTL_SYNC)                                        // default: frame data start at lrclk falling edge
            | (0 << I2STX0_CTL_DSOURCE_SHIFT)                               // default: data operated by i2s fifo, this bit may changed if asrc used
            | (i2s_cfg->clk_group << I2STX0_CTL_MUTSOURCE_SHIFT)            // SRD follows corresponding clock group
            | (0 << I2STX0_CTL_ORDER)                                       // default: data MSB
            | (0 << I2STX0_CTL_MODE)                                        // default: data transmitted as slot by slot
            | (0x3 << I2STX0_CTL_SAMPSIZE_SHIFT)                            // default: data sampsize 32bit
            | (i2s_cfg->chan_width << I2STX0_CTL_CHANWID);

    switch(i2s_interface)
    {
        case DEV_I2SRX0:{reg_addr = I2SRX0_CTL;reg_val |= (I2SRX0_FORMAT << I2STX0_CTL_FORMAT_SHIFT);break;}
		case DEV_I2SRX1:{reg_addr = I2SRX1_CTL;reg_val |= (I2SRX1_FORMAT << I2STX0_CTL_FORMAT_SHIFT);break;}
		case DEV_I2STX0:{reg_addr = I2STX0_CTL;reg_val |= (I2STX0_FORMAT << I2STX0_CTL_FORMAT_SHIFT);break;}
		case DEV_I2STX1:{reg_addr = I2STX1_CTL;reg_val |= (I2STX1_FORMAT << I2STX0_CTL_FORMAT_SHIFT);break;}
        case DEV_I2STX5:{reg_addr = I2STX5_CTL;reg_val = 0x1040022;break;} // i2stx5 ctl default value
		default:{dbg_print("i2s interface err\n");return;}
    }

    if((reg_val & (0x3 << I2STX0_CTL_FORMAT_SHIFT)) != (0x1 << I2STX0_CTL_FORMAT_SHIFT))
    {
        reg_val &= ~(1 << I2STX0_CTL_SYNC);
    }
    if(i2s_cfg->chan_width == I2S_WIDTH_16BIT)
    {
        reg_val &= ~(0x3 << I2STX0_CTL_SAMPSIZE_SHIFT);
    }
    act_write(reg_addr, reg_val);

    dbg_print("I2Sx_CTL addr 0x%x val 0x%x\n", reg_addr, act_read(reg_addr));
}

int i2s_asrc_access_config(audio_dev_e i2s_interface, asrc_access_e fifo_access)
{
    uint32_t reg_addr = 0;
    uint32_t reg_val = 0;

    switch(i2s_interface)
    {
        case DEV_I2SRX0:{reg_addr = I2SRX0_CTL;break;}
		case DEV_I2SRX1:
            if(fifo_access > ASRC3_ACCESS)
            {
                goto _ERR_EXIT;
            }
            reg_addr = I2SRX1_CTL;
        break;
		case DEV_I2STX0:
            if(fifo_access > MULTI_ASRC_ACCESS)
            {
                goto _ERR_EXIT;
            }
            reg_addr = I2STX0_CTL;
        break;
		case DEV_I2STX1:
            if(fifo_access > ASRC3_ACCESS)
            {
                goto _ERR_EXIT;
            }
            reg_addr = I2STX1_CTL;
        break;
		default: goto _ERR_EXIT;
    }

    act_mask_or(reg_addr, (0x7 << I2STX0_CTL_DSOURCE_SHIFT), (fifo_access << I2STX0_CTL_DSOURCE_SHIFT));
    dbg_print("I2Sx_CTL addr 0x%x val 0x%x\n", reg_addr, act_read(reg_addr));
    return 0;

_ERR_EXIT:
    dbg_print("i2s asrc access err\n");
    return -1;
}

/************************************ I2S FIFO config ************************************/
static void i2s_fifo_config(audio_dev_e i2s_interface, i2s_cfg_t* i2s_cfg)
{
    uint32_t reg_addr = 0;
    uint32_t reg_val = 0;

    reg_val = (0 << I2STX0_FIFOCTL_NOTFILL_LEVEL_SHIFT)                     // default: clear fifo level, set by marco
            | (0 << I2STX0_FIFOCTL_TX_ER_IE)                                // disable i2s fifo error irq to INTC
            | (i2s_cfg->chan_width << I2STX0_FIFOCTL_TXFIFO_DMAWIDTH)       // config channel num
            | (0x1 << I2STX0_FIFOCTL_FIFO_IN_SEL_SHIFT)                     // default: i2s fifo accessed by dma
            | (0 << I2STX0_FIFOCTL_FIFO_IEN)                                // default: disable fifo level irq
            | (1 << I2STX0_FIFOCTL_FIFO_DEN)                                // default: enable fifo level drq
            | (1 << I2STX0_FIFOCTL_FIFO_RST);                               // default: enable fifo

    switch(i2s_interface)
    {
        case DEV_I2SRX0:{reg_addr = I2SRX0_FIFOCTL; reg_val |= (I2SRX0_FIFO_LEVEL << I2STX0_FIFOCTL_NOTFILL_LEVEL_SHIFT); break;}
		case DEV_I2SRX1:{reg_addr = I2SRX1_FIFOCTL; reg_val |= (I2SRX1_FIFO_LEVEL << I2STX0_FIFOCTL_NOTFILL_LEVEL_SHIFT); break;}
		case DEV_I2STX0:{reg_addr = I2STX0_FIFOCTL; reg_val |= (I2STX0_FIFO_LEVEL << I2STX0_FIFOCTL_NOTFILL_LEVEL_SHIFT); break;}
		case DEV_I2STX1:{reg_addr = I2STX1_FIFOCTL; reg_val |= (I2STX1_FIFO_LEVEL << I2STX0_FIFOCTL_NOTFILL_LEVEL_SHIFT); break;}
        case DEV_I2STX5:
		default:{return;}
    }

    act_write(reg_addr, reg_val);
    dbg_print("I2Sx_FIFOCTL addr 0x%x val 0x%x\n", reg_addr, act_read(reg_addr));
}


/************************************ I2S SAMPLE RATE DETECT config ************************************/
void i2s_srd_irq_handler(void *arg)
{
    uint32_t srd_irq_num = (uint32_t)arg;
    uint32_t i2s_srd_ctl_addr = 0, i2s_srd_sta_addr = 0;
    uint32_t i2s_srd_ctl_data = 0, i2s_srd_sta_data = 0;
    uint32_t reg_lrclk = 0, new_lrclk = SR_48000;
    uint32_t reg_val = 0;

    if(srd_irq_num == I2SSRD0_IRQ_NUM) // I2S clock group 0
    {
    	i2s_srd_ctl_addr = I2SRD0_CTL;
        i2s_srd_sta_addr = I2SRD0_STA;
    }
    else if(srd_irq_num == I2SSRD1_IRQ_NUM) // I2S clock group 1
    {
    	i2s_srd_ctl_addr = I2SRD1_CTL;
        i2s_srd_sta_addr = I2SRD1_STA;
    }
    else if(srd_irq_num == I2SSRD2_IRQ_NUM) // I2S clock group 2
    {
    	i2s_srd_ctl_addr = I2SRD2_CTL;
        i2s_srd_sta_addr = I2SRD2_STA;
    }
    else if(srd_irq_num == I2SSRD3_IRQ_NUM) // I2S clock group 3
    {
    	i2s_srd_ctl_addr = I2SRD3_CTL;
        i2s_srd_sta_addr = I2SRD3_STA;
    }
    else // wrong irq num
    {
        return;
    }

    i2s_srd_ctl_data = act_read(i2s_srd_ctl_addr) & (0b1101 << I2SRD0_CTL_CHW_IE);
    i2s_srd_sta_data = act_read(i2s_srd_sta_addr) & (0b111 << I2SRD0_STA_CHW_PD);

    /* clear I2S SRD STA pend */
	do{
		act_write(i2s_srd_sta_addr, 0b111 << I2SRD0_STA_CHW_PD);
		reg_val = act_read(i2s_srd_sta_addr) & (0b111 << I2SRD0_STA_CHW_PD);
	}while(reg_val != 0);

    if((i2s_srd_ctl_data & (1 << I2SRD0_CTL_TO_IE)) && (i2s_srd_sta_data & (1 << I2SRD0_STA_TO_PD))) // srd timeout pend
    {
        dbg_print("I2SG%d TO\n\n", srd_irq_num - I2SSRD0_IRQ_NUM);

    }
    if((i2s_srd_ctl_data & (1 << I2SRD0_CTL_SRC_IE)) && (i2s_srd_sta_data & (1 << I2SRD0_STA_SRC_PD))) // srd sample rate change pend
    {
        dbg_print("I2SG%d SRC\n\n", srd_irq_num - I2SSRD0_IRQ_NUM);

        reg_val = (act_read(i2s_srd_sta_addr) & I2SRD0_STA_SRC_CNT_MASK) >> I2SRD0_STA_SRC_CNT_SHIFT;
        reg_lrclk = HOSC_FREQ / reg_val;

        /* allow +/-1% deviation */
        if ((reg_lrclk > 7920) && (reg_lrclk < 8080)) { /* 8kfs */
            new_lrclk = SR_8000;
        } else if ((reg_lrclk > 10915) && (reg_lrclk < 11135)) { /* 11.025kfs */
            new_lrclk = SR_11025;
        } else if ((reg_lrclk > 11880) && (reg_lrclk < 12120)) { /* 12kfs */
            new_lrclk = SR_12000;
        } else if ((reg_lrclk > 15840) && (reg_lrclk < 16160)) { /* 16kfs */
            new_lrclk = SR_16000;
        } else if ((reg_lrclk > 21830) && (reg_lrclk < 22270)) { /* 22.05kfs */
            new_lrclk = SR_22050;
        } else if ((reg_lrclk > 23760) && (reg_lrclk < 24240)) { /* 24kfs */
            new_lrclk = SR_24000;
        } else if ((reg_lrclk > 31680) && (reg_lrclk < 32320)) { /* 32kfs */
            new_lrclk = SR_32000;
        } else if ((reg_lrclk > 43659) && (reg_lrclk < 44541)) { /* 44.1kfs */
            new_lrclk = SR_44100;
        } else if ((reg_lrclk > 47520) && (reg_lrclk < 48480)) { /* 48kfs */
            new_lrclk = SR_48000;
        } else if ((reg_lrclk > 63360) && (reg_lrclk < 64640)) { /* 64kfs */
            new_lrclk = SR_64000;
        } else if ((reg_lrclk > 87318) && (reg_lrclk < 89082)) { /* 88.2kfs */
            new_lrclk = SR_88200;
        } else if ((reg_lrclk > 95040) && (reg_lrclk < 96960)) { /* 96kfs */
            new_lrclk = SR_96000;
#if 0 // TODO : untested
        } else if ((reg_lrclk > 174636) && (reg_lrclk < 178164)) { /* 176.4kfs */
            new_lrclk = SR_176400;
        } else if((reg_lrclk > 190080) && (reg_lrclk < 193920)) { /* 192kfs */
            new_lrclk = SR_192000;
        } else if ((reg_lrclk > 380160) && (reg_lrclk < 387840)) { /* 384kfs */
            new_lrclk = SR_384000;
#endif
        } else {
            dbg_print("FS err %d\n\n", reg_lrclk);
        }
        reg_val = (act_read(i2s_srd_sta_addr) & I2SRD0_STA_CHW_CNT_MASK) + 1; // CHW_CNT

        dbg_print("new lrclk = %d\n\n", new_lrclk);
        dbg_print("BCK = %d * LRCK = %d\n", reg_val, reg_val * new_lrclk); // BCK cycles = CHW_CNT + 1

        extern sample_rate_e g_sample_rate;
        g_sample_rate = new_lrclk;
    }
    if((i2s_srd_ctl_data & (1 << I2SRD0_CTL_CHW_IE)) && (i2s_srd_sta_data & (1 << I2SRD0_STA_CHW_PD))) // srd channel width change pend
    {
        dbg_print("I2SG%d CHW\n\n", srd_irq_num - I2SSRD0_IRQ_NUM);

    }

}

static int i2s_srd_init(i2s_cfg_t* i2s_cfg)
{
    uint32_t cmu_i2sclk_grp_addr = 0;
    uint32_t i2s_srd_ctl_addr = 0;
    uint32_t reg_val = 0;
    uint32_t srd_irq_num = 0;

    if(i2s_cfg->mst_slv_mode == MASTER || i2s_cfg->srd_en == 0)
    {
        return -1;
    }

    /* check I2S clock group */
    if(i2s_cfg->clk_group == I2SCLK_GROUP0)
    {
        cmu_i2sclk_grp_addr = CMU_I2SG0CLK;
        i2s_srd_ctl_addr = I2SRD0_CTL;
        srd_irq_num = I2SSRD0_IRQ_NUM;
    }
    else if(i2s_cfg->clk_group == I2SCLK_GROUP1)
    {
        cmu_i2sclk_grp_addr = CMU_I2SG1CLK;
        i2s_srd_ctl_addr = I2SRD1_CTL;
        srd_irq_num = I2SSRD1_IRQ_NUM;
    }
    else if(i2s_cfg->clk_group == I2SCLK_GROUP2)
    {
        cmu_i2sclk_grp_addr = CMU_I2SG2CLK;
        i2s_srd_ctl_addr = I2SRD2_CTL;
        srd_irq_num = I2SSRD2_IRQ_NUM;
    }
    else if(i2s_cfg->clk_group == I2SCLK_GROUP3)
    {
        cmu_i2sclk_grp_addr = CMU_I2SG3CLK;
        i2s_srd_ctl_addr = I2SRD3_CTL;
        srd_irq_num = I2SSRD3_IRQ_NUM;
    }
    else
    {
        return -1;
    }

    /* select HOSC as I2S SRD clock source */
    reg_val = act_read(cmu_i2sclk_grp_addr);
    reg_val &= ~(0x3 << CMU_I2SG0CLK_SRDCLKSRC_SHIFT);

    /* enable I2S SRD clock */
    reg_val |= (0x1 << CMU_I2SG0CLK_SRDCLKEN);
    act_write(cmu_i2sclk_grp_addr, reg_val);

    /* config I2S SRD control register */
    reg_val = act_read(i2s_srd_ctl_addr);

    reg_val |= 0x1 << I2SRD0_CTL_SENDCPU_INTEN;
    reg_val |= 0x1 << I2SRD0_CTL_CHW_TH_SHIFT;

    reg_val |= 0x1 << I2SRD0_CTL_TO_MUTE;
    reg_val |= 0x1 << I2SRD0_CTL_SRC_MUTE;
    reg_val |= 0x1 << I2SRD0_CTL_CHW_MUTE;

    reg_val |= 0x1 << I2SRD0_CTL_TO_IE;
    reg_val |= 0x1 << I2SRD0_CTL_SRC_IE;
    reg_val |= 0x1 << I2SRD0_CTL_CHW_IE;

    reg_val |= 0x0 << I2SRD0_CTL_CNT_TIM_SHIFT;

    act_write(i2s_srd_ctl_addr, reg_val);

    xtos_interrupt_disable(srd_irq_num);
    xtos_set_interrupt_handler(srd_irq_num, (xtos_handler)i2s_srd_irq_handler, (void *)srd_irq_num, NULL);
    xtos_interrupt_enable(srd_irq_num);

    /* enable I2S SRD */
    act_or(i2s_srd_ctl_addr, 0x1 << I2SRD0_CTL_SRD_EN);

    /* clear I2S SRD STA pend */
    do{
    	act_write(i2s_srd_ctl_addr + 4, 0b111 << I2SRD0_STA_CHW_PD);
    	reg_val = act_read(i2s_srd_ctl_addr + 4) & (0b111 << I2SRD0_STA_CHW_PD);
    }while(reg_val != 0);

    return 0;
}

/************************************ I2S init ************************************/
int i2s_init(audio_dev_e i2s_interface, i2s_cfg_t* i2s_cfg)
{
    i2s_clk_group_init(i2s_cfg);

    i2s_assign_clk_group_to_interface(i2s_interface, i2s_cfg->clk_group);

    i2s_dataline_mfp_config(i2s_interface, i2s_cfg);

    i2s_ctl_config(i2s_interface, i2s_cfg);

    i2s_fifo_config(i2s_interface, i2s_cfg);

    i2s_srd_init(i2s_cfg);

    return 0;
}


/************************************ I2S start ************************************/
void i2s_start(uint32_t i2s_use, gpio_e lrclk_io)
{
    uint32_t lrclk_ctl_addr = 0;
    uint32_t mfp_backup = 0;

    if(lrclk_io != GPIO_SEL_NONE)
    {
        /* save slave lrclk gpio mfp */
        lrclk_ctl_addr = GPIO0_CTL + 4 * lrclk_io;
        mfp_backup = act_read(lrclk_ctl_addr);

        /* set slave lrclk gpio as input */
        act_write(lrclk_ctl_addr, 0x80);

        /* wait until lrclk falling edge, pass when left channel */
        while((act_read(GPIO_IDAT0) & (1 << lrclk_io)) == 1);

        /* wait until lrclk rising edge, pass when right channel */
        while((act_read(GPIO_IDAT0) & (1 << lrclk_io)) == 0);

        act_write(lrclk_ctl_addr, mfp_backup);
    }
    act_write(I2S_EN, i2s_use);
}



