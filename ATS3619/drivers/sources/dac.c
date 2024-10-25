
#include "cmu.h"
#include "dac.h"
#include "delay.h"


// #define DBG_PRINT_EN
#ifdef DBG_PRINT_EN
#include "printk.h"
#define dbg_print   printk
#else
#define dbg_print(...)
#endif

extern void audio_ref_init(void);

#if 0
static int dac_clock_config(sample_rate_e _sample_rate)
{
	uint8_t sr_bit = 0;

	uint8_t dac_clk_div = 0;
    uint8_t fir_div = 0;
	uint8_t fir_2x_div = 0;
	uint8_t cic_clk_div = 0;

	switch(_sample_rate)
	{
        case SR_8000:
			sr_bit			= 0x0; /* DAC_DIGCTL.SR = 8K */
            dac_clk_div		= 0x1; /* CMU_DACCLK.DACCLKDIV = /2 */
            fir_div			= 0x1; /* CMU_DACCLK.DACFIRCLKDIV = /2 */
            fir_2x_div		= 0x2; /* CMU_DACCLK.DACFIR2XCLKDIV = /3 */
            cic_clk_div		= 0x0; /* CMU_DACCLK.DACCICCLKDIV = /1 */
        break;

        case SR_11025:
			sr_bit			= 0x1; /* DAC_DIGCTL.SR = 11.025K */
            dac_clk_div		= 0x1; /* CMU_DACCLK.DACCLKDIV = /2 */
            fir_div			= 0x1; /* CMU_DACCLK.DACFIRCLKDIV = /2 */
            fir_2x_div		= 0x1; /* CMU_DACCLK.DACFIR2XCLKDIV = /2 */
            cic_clk_div		= 0x0; /* CMU_DACCLK.DACCICCLKDIV = /1 */
		break;

		case SR_12000:
			sr_bit			= 0x2; /* DAC_DIGCTL.SR = 12K */
            dac_clk_div		= 0x1; /* CMU_DACCLK.DACCLKDIV = /2 */
            fir_div			= 0x1; /* CMU_DACCLK.DACFIRCLKDIV = /2 */
            fir_2x_div		= 0x1; /* CMU_DACCLK.DACFIR2XCLKDIV = /2 */
            cic_clk_div		= 0x0; /* CMU_DACCLK.DACCICCLKDIV = /1 */
        break;

        case SR_16000:
			sr_bit			= 0x3; /* DAC_DIGCTL.SR = 16K */
            dac_clk_div		= 0x1; /* CMU_DACCLK.DACCLKDIV = /2 */
            fir_div			= 0x0; /* CMU_DACCLK.DACFIRCLKDIV = /1 */
            fir_2x_div		= 0x2; /* CMU_DACCLK.DACFIR2XCLKDIV = /3 */
            cic_clk_div		= 0x0; /* CMU_DACCLK.DACCICCLKDIV = /1 */
        break;

        case SR_22050:
			sr_bit			= 0x4; /* DAC_DIGCTL.SR = 22.05K */
            dac_clk_div		= 0x1; /* CMU_DACCLK.DACCLKDIV = /2 */
            fir_div			= 0x0; /* CMU_DACCLK.DACFIRCLKDIV = /1 */
            fir_2x_div		= 0x1; /* CMU_DACCLK.DACFIR2XCLKDIV = /2 */
            cic_clk_div		= 0x0; /* CMU_DACCLK.DACCICCLKDIV = /1 */
		break;

		case SR_24000:
			sr_bit			= 0x5; /* DAC_DIGCTL.SR = 24K */
            dac_clk_div		= 0x1; /* CMU_DACCLK.DACCLKDIV = /2 */
            fir_div			= 0x0; /* CMU_DACCLK.DACFIRCLKDIV = /1 */
            fir_2x_div		= 0x1; /* CMU_DACCLK.DACFIR2XCLKDIV = /2 */
            cic_clk_div		= 0x0; /* CMU_DACCLK.DACCICCLKDIV = /1 */
        break;

        case SR_32000:
			sr_bit			= 0x6; /* DAC_DIGCTL.SR = 32K */
            dac_clk_div		= 0x0; /* CMU_DACCLK.DACCLKDIV = /1 */
            fir_div			= 0x0; /* CMU_DACCLK.DACFIRCLKDIV = /1 */
            fir_2x_div		= 0x2; /* CMU_DACCLK.DACFIR2XCLKDIV = /3 */
            cic_clk_div		= 0x1; /* CMU_DACCLK.DACCICCLKDIV = /2 */
        break;

        case SR_44100:
			sr_bit			= 0x7; /* DAC_DIGCTL.SR = 44.1K */
            dac_clk_div		= 0x0; /* CMU_DACCLK.DACCLKDIV = /1 */
            fir_div			= 0x0; /* CMU_DACCLK.DACFIRCLKDIV = /1 */
            fir_2x_div		= 0x1; /* CMU_DACCLK.DACFIR2XCLKDIV = /2 */
            cic_clk_div		= 0x1; /* CMU_DACCLK.DACCICCLKDIV = /2 */
		break;

		case SR_48000:
			sr_bit			= 0x8; /* DAC_DIGCTL.SR = 48K */
            dac_clk_div		= 0x0; /* CMU_DACCLK.DACCLKDIV = /1 */
            fir_div			= 0x0; /* CMU_DACCLK.DACFIRCLKDIV = /1 */
            fir_2x_div		= 0x1; /* CMU_DACCLK.DACFIR2XCLKDIV = /2 */
            cic_clk_div		= 0x1; /* CMU_DACCLK.DACCICCLKDIV = /2 */
        break;

        case SR_88200:
			sr_bit			= 0x9; /* DAC_DIGCTL.SR = 88.2K */
			dac_clk_div		= 0x0; /* CMU_DACCLK.DACCLKDIV = /1 */
            fir_div			= 0x0; /* CMU_DACCLK.DACFIRCLKDIV = /1 */
            fir_2x_div		= 0x0; /* CMU_DACCLK.DACFIR2XCLKDIV = /1 */
            cic_clk_div		= 0x1; /* CMU_DACCLK.DACCICCLKDIV = /2 */
        break;

        case SR_96000:
			sr_bit			= 0xa; /* DAC_DIGCTL.SR = 96K */
            dac_clk_div		= 0x0; /* CMU_DACCLK.DACCLKDIV = /1 */
            fir_div			= 0x0; /* CMU_DACCLK.DACFIRCLKDIV = /1 */
            fir_2x_div		= 0x0; /* CMU_DACCLK.DACFIR2XCLKDIV = /1 */
            cic_clk_div		= 0x1; /* CMU_DACCLK.DACCICCLKDIV = /2 */
        break;

        default:
            dbg_print("dac sr err %d\n", _sample_rate);
            return -1;
        break;
	}

	act_write(CMU_DACCLK, (dac_clk_div << CMU_DACCLK_DACCLKDIV_SHIFT)
						| (DACCLK_APLL_DIV4 << CMU_DACCLK_DACCLKSRC)
						| (cic_clk_div << CMU_DACCLK_DACCICCLKDIV)
						| (fir_div << CMU_DACCLK_DACFIRCLKDIV)
						| (fir_2x_div << CMU_DACCLK_DACFIR2XCLKDIV_SHIFT));

	act_mask_or(DAC_DIGCTL, (1 << DAC_DIGCTL_CIC_RATE), (DAC_CIC_RATE_3072K << DAC_DIGCTL_CIC_RATE));
	act_mask_or(DAC_DIGCTL, (0xF << DAC_DIGCTL_SR_SHIFT), (sr_bit << DAC_DIGCTL_SR_SHIFT));

	dbg_print("CMU_DACCLK 0x%x\n", act_read(CMU_DACCLK));
	return 0;
}

static void dac_fifo_reset(dac_fifo_e _dac_fifo)
{
    /* if dac is reset, config it normal */
    if((act_read(MRCR0) & (1 << RESET_ID_DAC)) == 0)
    {
        cmu_device_reset(RESET_ID_DAC, MRCR_NORMAL);
    }
    /* if dac clock is disable, enable it */
    if((act_read(CMU_DEVCLKEN) & (1 << CLOCK_ID_DAC)) == 0)
    {
        cmu_device_clock_enable(CLOCK_ID_DAC, ENABLE);
    }

	if(_dac_fifo == DAC_FIFO_0)
	{
		/* reset dac fifo0 */
		act_and(DAC_FIFOCTL, ~(1 << DAC_FIFOCTL_DAF0RT));
		/* disable dac fifo0 clock */
		act_and(CMU_DACCLK, ~(1 << CMU_DACCLK_DACFIFO0CLKEN));
	}
	else
	{
		/* reset dac fifo1 */
		act_and(DAC_FIFOCTL, ~(1 << DAC_FIFOCTL_DAF1RT));
		/* disable dac fifo1 clock */
		act_and(CMU_DACCLK, ~(1 << CMU_DACCLK_DACFIFO1CLKEN));
	}
}

static void dac_fifo_config(dac_fifo_e _dac_fifo, dac_fifo_access_e dac_fifo_access)
{
	#define DAC_FIFO_REG_OFFSET		(0xF)
    
	uint8_t bit_offset = DAC_FIFO_REG_OFFSET * _dac_fifo;
	uint32_t reg_val = act_read(DAC_FIFOCTL) & (~(0xFFFF << bit_offset));

    if(dac_fifo_access == DAC_FIFO_DMA_ACCESS)
    {
		reg_val |= 0x1 << (DAC_FIFOCTL_DAF0IS_SHIFT + bit_offset); // dac fifo access by dma
		reg_val |= 0x1 << (DAC_FIFOCTL_DAF0EDE + bit_offset); // enable drq
		reg_val |= DAC_DMA_WIDTH << (DAC_FIFOCTL_DACFIFO0_DMAWIDTH + bit_offset); // dma transfer data width
    }
    else
    {
        act_or(DAC_ALL_IRQ, 1 << (DAC_ALL_IRQ_DAF0EIE + 3 * _dac_fifo));
    }
	reg_val |= DAC_FIFO_LEVEL << (DAC_FIFOCTL_DRQ0_LEVEL_SHIFT + bit_offset); // config fifo level to trigger drq/irq
	reg_val |= 1 << (DAC_FIFOCTL_DAF0RT + bit_offset); // enable fifo
	act_write(DAC_FIFOCTL, reg_val);

	/* enable fifo mix to dac */
	act_or((DAC_DIGCTL + 4 * _dac_fifo), 1 << DAC_DIGCTL_DAF0M2DAEN);
	/* enable fifo clock */
	act_or(CMU_DACCLK, 1 << (CMU_DACCLK_DACFIFO0CLKEN + 8 * _dac_fifo));
	
	dbg_print("DAC_FIFOCTL 0x%x\n", act_read(DAC_FIFOCTL));
}

static void dac0_digital_config(dac_ch_en_e chan_en)
{
	uint32_t reg_val = 0;

	if(chan_en == DAC_CH_DISABLE)
	{
		return;
	}
	act_or(CMU_DACCLK, 1 << CMU_DACCLK_DACCICFIRCLKEN);
	act_or(CMU_DACCLK, 1 << CMU_DACCLK_DACSDMCLKEN);

	reg_val = act_read(DAC_DIGCTL) & (~((1 << DAC_DIGCTL_DDEN_L) 					// clear dac digital left enable
									|   (1 << DAC_DIGCTL_DDEN_R) 					// clear dac digital right enable
									|   (1 << DAC_DIGCTL_ENDITH) 					// clear dac dither enable
									|   (1 << DAC_DIGCTL_DACHNUM) 					// clear dac channel number
									|   (1 << DAC_DIGCTL_DALRMIX) 					// clear dac channel mix
									|   (0x7 << DAC_DIGCTL_US_FILTER_MODE_SHIFT))); // clear dac fir

	reg_val |= (DAC_FIR_SEL << DAC_DIGCTL_US_FILTER_MODE_SHIFT)						// config dac fir (default : FIR_A)
			|  (DAC_CHAN_SEL << DAC_DIGCTL_DACHNUM)									// config dac channel (default : stereo, no mix)
			|  (DAC_DITHER_EN << DAC_DIGCTL_ENDITH)									// config dac dither (default : enable)
			|  (chan_en);
	
	act_write(DAC_DIGCTL, reg_val);

	dbg_print("DAC_DIGCTL 0x%x\n", act_read(DAC_DIGCTL));
}

static void dac_analog_config(dac_ch_en_e chan_en)
{
	uint32_t reg_val = 0;

	if(chan_en == DAC_CH_DISABLE)
	{
		return;
	}

	if(chan_en & DAC_LCH_ENABLE)
	{
		reg_val |= (1 << DAC_ANACTL0_DAENL) | (1 << DAC_ANACTL0_PALEN) | (1 << DAC_ANACTL0_PALOSEN);
	}
	if(chan_en & DAC_RCH_ENABLE)
	{
		reg_val |= (1 << DAC_ANACTL0_DAENR) | (1 << DAC_ANACTL0_PAREN) | (1 << DAC_ANACTL0_PAROSEN);
	}
	reg_val |= (1 << DAC_ANACTL0_BIASEN)
			|  (1 << DAC_ANACTL0_DFCEN)
			|  (1 << DAC_ANACTL0_PALOSEN)
			|  (PA_5p6vpp_small_res << DAC_ANACTL0_DARSEL)
			|  (0x3 << DAC_ANACTL0_DLYSEL_SHIFT);
	act_write(DAC_ANACTL0, reg_val);

	dbg_print("DAC_ANACTL0 0x%x\n", act_read(DAC_ANACTL0));
}

/*
CHx_GAIN.GAIN = gain_value / 375 + 0xbe
note: gain_value would be transfer with 1000x to avoid fractional part, like '6000' means +6dB, '-12000' means -12dB
eg:
    bits = gain_value / 375 + 0xbe = 0 / 375 + 0xbe = 0xbe      // 0 dB
    bits = gain_value / 375 + 0xbe = 24375 / 375 + 0xbe = 0xff  // +24.375 dB
    bits = gain_value / 375 + 0xbe = -71250 / 375 + 0xbe = 0 // -71.25 dB
*/
static uint8_t dac_get_gain_bits(int16_t gain_value)
{
	uint8_t gain_bits = 0;

	gain_bits = gain_value / 375 + 0xbe;

    if(gain_bits > 0xff)
    {
        gain_bits = 0xff; // +24.375 dB maximum
    }
    if(gain_bits < 0x0)
    {
        gain_bits = 0; // mute if dac gain is less than -71.25 dB
    }
	return gain_bits;
}

void dac_set_gain(dac_fifo_e _dac_fifo, int16_t ch0_gain, int16_t ch1_gain)
{
	uint32_t reg_addr = (_dac_fifo == DAC_FIFO_0)?(VOL_LCH):(VOL_RCH);
	uint8_t vol_lch = dac_get_gain_bits(ch0_gain);
	uint8_t vol_rch = dac_get_gain_bits(ch1_gain);

	/* enable zero cross detection */
	act_or(reg_addr, (1 << VOL_LCH_VOLLZCEN));
	act_or((reg_addr + 4), (1 << VOL_LCH_VOLLZCEN));

	/* set volume */
	act_mask_or(reg_addr, VOL_LCH_VOLL_MASK, (vol_lch << VOL_LCH_VOLL_SHIFT));
	act_mask_or((reg_addr + 4), VOL_LCH_VOLL_MASK, (vol_rch << VOL_LCH_VOLL_SHIFT));

	/* wait until volume take effect */
	while((act_read(reg_addr) & VOL_LCH_VOLL_MASK) != vol_lch )
	{
		;
	}
	while((act_read((reg_addr + 4)) & VOL_RCH_VOLR_MASK) != vol_rch )
	{
		;
	}

	dbg_print("dac vol addr 0x%x val 0x%x\n", reg_addr, act_read(reg_addr));
	dbg_print("dac vol addr 0x%x val 0x%x\n", (reg_addr + 4), act_read((reg_addr + 4)));
}

static void dac_bias_config(void)
{
	act_or(DAC_BIAS, (0x3 << DAC_BIAS_IOPCM1_SHIFT));
    delay_ms(1);
    act_write(SDM_DITHER_CTL, 0xb);
    act_write(DAC_ANACTL2, 0x640f9);
    act_write(DAC_ANACTL3, 0xf800060);
}

int dac_asrc_access_config(dac_fifo_e _dac_fifo, asrc_access_e fifo_access)
{
    uint32_t reg_bits = (_dac_fifo == DAC_FIFO_0) ? DAC_FIFOCTL_DAC0IS_SHIFT : DAC_FIFOCTL_DAC1IS_SHIFT;

    if(fifo_access > ASRC3_ACCESS)
    {
        dbg_print("dac asrc access err %d\n", fifo_access);
        return -1;
    }

	act_mask_or(DAC_FIFOCTL, (0x7 << reg_bits), (fifo_access << reg_bits));
	return 0;
}

void dac_init(dac_cfg_t* dac_cfg)
{
	/* disable dac clock source */
    cmu_device_clock_enable(CLOCK_ID_DAC, DISABLE);
    act_write(CMU_DACCLK, 0);
    /* enable dac clock source */
    cmu_device_clock_enable(CLOCK_ID_DAC, ENABLE);

    /* reset dac module */
    cmu_device_reset(RESET_ID_DAC, MRCR_RESET);
    delay(1);
    cmu_device_reset(RESET_ID_DAC, MRCR_NORMAL);

	/* config dac clock */
	dac_clock_config(dac_cfg->sample_rate);

	/* enable reference LDO */
	audio_ref_init();

	/* config dac fifo */
    dac_fifo_reset(DAC_FIFO_0);
	dac_fifo_config(DAC_FIFO_0, DAC_FIFO_DMA_ACCESS);

	/* config dac fifo0 digital control register */
	dac0_digital_config(DAC_BOTH_CH_EN);

	/* config dac analog control register */
	dac_analog_config(DAC_BOTH_CH_EN);

	/* set volume */
	dac_set_gain(DAC_FIFO_0, dac_cfg->ch0_gain, dac_cfg->ch1_gain);

	dac_bias_config();
}
#else
void dac_init(dac_cfg_t* dac_cfg)
{
	
}

#endif

// TODO: TTS
#if 0
void dacfifo0_cnt_en(uint16 irq_en)
{
	act_write(FIFO0_CNT, 0);
	act_or(FIFO0_CNT, (1 << FIFO0_CNT_EN));
	act_or(DAC_ALL_IRQ, (irq_en << DAC_ALL_IRQ_FIFO0_CNT_IE));
	act_write(DAC_ALL_PD, (1 << DAC_ALL_PD_FIFO0_CNT_PD));
}

void dacfifo1_cnt_en(uint16 irq_en)
{
		act_write(FIFO1_CNT, 0);
		act_or(FIFO1_CNT, (1 << FIFO1_CNT_EN));
		act_or(DAC_ALL_IRQ, (irq_en << DAC_ALL_IRQ_FIFO1_CNT_IE));
		act_or(DAC_ALL_PD, (1 << DAC_ALL_PD_FIFO1_CNT_PD));
}

int tts_dac_dig_cfg(uint16 mono_stereo, uint16 dac_fs)
{
		uint32 reg, tts_root_div, fir_div, fir2x_div;
	
		act_or(CMU_DACCLK, 1 << CMU_DACCLK_TTSCICFIRCLKEN);
		act_or(CMU_DACCLK, 1 << CMU_DACCLK_DACSDMCLKEN);

		//if main path sr is 32kfs/48kfs/96kfs, dac root clk is 24.576M
		switch(dac_fs)
		{
				case DAC48KFS 	 : { tts_root_div = 0;		fir_div = 0;		fir2x_div = 1;		break;}
				case DAC44K1FS   : { tts_root_div = 0;		fir_div = 0;		fir2x_div = 1;		break;}
				case DAC32KFS    : { tts_root_div = 0;		fir_div = 0;		fir2x_div = 2;		break;}
				case DAC24KFS    : { tts_root_div = 1;		fir_div = 0;		fir2x_div = 1;		break;}
				case DAC22K05FS  : { tts_root_div = 1;		fir_div = 0;		fir2x_div = 1;		break;}
				case DAC16KFS 	 : { tts_root_div = 1;		fir_div = 0;		fir2x_div = 2;		break;}
				case DAC12KFS 	 : { tts_root_div = 1;		fir_div = 1;		fir2x_div = 1;		break;}
				case DAC11K025FS : { tts_root_div = 1;		fir_div = 1;		fir2x_div = 1;		break;}
				case DAC8KFS 	 : { tts_root_div = 1;		fir_div = 1;		fir2x_div = 2;		break;}
		
				default			 : { tts_root_div = 1;		fir_div = 1;		fir2x_div = 2;		break;}
		}

		reg = (act_read(DAC_DIGCTL) & DAC_DIGCTL_SR_MASK) >> DAC_DIGCTL_SR_SHIFT;
		if ((reg << 1) <= DAC24KFS)//if main path is 24kfs and below, dac root clk is 12.288M
		{
				if (dac_fs > DAC24KFS)//forbidden
					return -1;
				else//tts path clk is 24kfs and below
					tts_root_div = 0;
		}
		
		reg = act_read(CMU_DACCLK);
		reg |= tts_root_div << CMU_DACCLK_TTSROOTDIV;
		reg |= fir_div 	 	<< CMU_DACCLK_TTSFIRCLKDIV;
		reg |= fir2x_div 	<< CMU_DACCLK_TTSFIR2CLKDIV_SHIFT;
		act_or(CMU_DACCLK, reg);
	
		reg = act_read(DAC1_DIGCTL);
		reg &= ~(3 << DAC1_DIGCTL_DDEN_L);
		reg &= ~(3 << DAC1_DIGCTL_DACHNUM);//mono_stereo and LR MIX
		reg &= ~DAC1_DIGCTL_SR_1_MASK;
		
		reg |= (act_read(DAC_DIGCTL) & 3);
		reg |= (dac_fs >> 1) << DAC1_DIGCTL_SR_1_SHIFT;
		reg |= mono_stereo << DAC1_DIGCTL_DACHNUM;
		reg |= 1 << DAC1_DIGCTL_TTS_MIX_SDM;
		act_write(DAC1_DIGCTL, reg);

		return 0;
}

void tts_dac_vol_set(int voll, int volr)
{
		uint32 l,r;
		l = (act_read(VOL1_LCH) & (~VOL1_LCH_VOLL_MASK)) | (voll << VOL1_LCH_VOLL_SHIFT) | (1 << VOL1_LCH_VOLLZCEN);
		r = (act_read(VOL1_RCH) & (~VOL1_RCH_VOLR_MASK)) | (volr << VOL1_RCH_VOLR_SHIFT) | (1 << VOL1_RCH_VOLRZCEN);

		act_write(VOL1_LCH, l);
		act_write(VOL1_RCH, r);
		
		while( (act_read(VOL1_LCH) & VOL1_LCH_VOLL_MASK) != voll );
		while( (act_read(VOL1_RCH) & VOL1_RCH_VOLR_MASK) != volr );
}

void chx_dacvol_soft_step_en(uint32 reg, uint16 adj_cnt, uint16 to_cnt, uint16 irq_en)
{
		uint32 tmp;
		tmp = act_read(reg) & (~0x3fff00);
		tmp |= adj_cnt << VOL_LCH_ADJ_CNT_SHIFT;
		tmp |= to_cnt << VOL_LCH_TO_CNT;
		tmp |= 1 << VOL_LCH_VOLLZCEN;
		tmp |= 1 << VOL_LCH_VOLLZCTOEN;
		tmp |= 1 << VOL_LCH_SOFT_STEP_EN;

		act_write(reg, tmp);//clear pd

		tmp = act_read(DAC_ALL_IRQ);
		switch (reg)
		{
			case VOL_LCH  :{ tmp &= ~(1 << DAC_ALL_IRQ_VOLL_IRQ_EN);	tmp |= irq_en << DAC_ALL_IRQ_VOLL_IRQ_EN;  break;}
			case VOL_RCH  :{ tmp &= ~(1 << DAC_ALL_IRQ_VOLR_IRQ_EN);	tmp |= irq_en << DAC_ALL_IRQ_VOLR_IRQ_EN;  break;}
			case VOL1_LCH :{ tmp &= ~(1 << DAC_ALL_IRQ_VOLL1_IRQ_EN);	tmp |= irq_en << DAC_ALL_IRQ_VOLL1_IRQ_EN; break;}
			case VOL1_RCH :{ tmp &= ~(1 << DAC_ALL_IRQ_VOLR1_IRQ_EN);	tmp |= irq_en << DAC_ALL_IRQ_VOLR1_IRQ_EN; break;}
		}
		act_write(DAC_ALL_IRQ, tmp);//clear pd
}

void dac_automute_cfg(uint32 chx, uint32 amcnt, uint32 amth, uint16 irq_cfg, uint16 hw_operate)
{
		uint32 reg;
		reg = act_read(chx);
		reg &= ~AUTO_MUTE_L_CTL_AMCNT_MASK;
		reg &= ~AUTO_MUTE_L_CTL_AMTH_MASK;
		reg &= ~(1 << AUTO_MUTE_L_CTL_AUMUTE_PA_CTL);
		reg &= ~(1 << AUTO_MUTE_L_CTL_MUTE_SDM);
	
		reg |= amcnt << AUTO_MUTE_L_CTL_AMCNT_SHIFT;
		reg |= amth  << AUTO_MUTE_L_CTL_AMTH_SHIFT;
		reg |= (uint32)hw_operate;
		reg |= 1 << AUTO_MUTE_L_CTL_AMEN;

		act_write(chx, reg);

		reg = act_read(DAC_ALL_IRQ);
		if(chx == AUTO_MUTE_L_CTL)
		{
			reg &= ~(1 << DAC_ALL_IRQ_AML_IRQ_EN);
			reg |= irq_cfg << DAC_ALL_IRQ_AML_IRQ_EN;
		}	
		else
		{
			reg &= ~(1 << DAC_ALL_IRQ_AMR_IRQ_EN);
			reg |= irq_cfg << DAC_ALL_IRQ_AMR_IRQ_EN;
		}	
		act_write(DAC_ALL_IRQ, reg);
}
#endif
