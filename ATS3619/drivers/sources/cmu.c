
#include <xtensa/xtruntime.h>
#include "basic.h"
#include "cmu.h"
#include "delay.h"

// #define DBG_PRINT_EN
#ifdef DBG_PRINT_EN
#include "printk.h"
#define dbg_print   printk
#else
#define dbg_print(...)
#endif

#define CMU_BCLK_DETECT_IRQ_NUM				(27)
#define CMU_BCLK_NOCLK_CNT_THRESHOLD		(0x200)	// maximum value is 0x3FF



extern void bclk_det_user_cb(bclk_det_sta_e _bclk_det_sta);


int cmu_device_clock_enable(dev_clock_id_e dev_id, int status)
{
    if (dev_id > CLOCK_ID_I2SRX1)
    {
        return -1;
    }

    if (status == DISABLE)
    {
        act_and(CMU_DEVCLKEN, ~(1 << dev_id));
    }
    else
    {
        act_or(CMU_DEVCLKEN, (1 << dev_id));
    }

    return 0;
}

int cmu_device_reset(dev_rst_id_e dev_id, dev_rst_sta_e status)
{
    if (dev_id > RESET_ID_I2SSRD3)
    {
        return -1;
    }

    if (status == MRCR_RESET)
    {
        act_and(MRCR0, ~(1 << dev_id));
    }
    else
    {
        act_or(MRCR0, (1 << dev_id));
    }

    return 0;
}


void wdt_en(uint8_t enable)
{
    act_mask_or(WD_CTL, (1 << WD_CTL_WDEN), (!!enable << WD_CTL_WDEN));
}

void feed_wdt(void)
{
    act_or(WD_CTL, 1 << WD_CTL_CLR);
}


void sys_init(uint32_t dsp_freq_khz)
{
	uint32_t reg_val = 0;

	act_write(MEM_CTRL, 0x0905);

	/* enable HOSC, wait enough time before crystal ready */
	act_or(HOSC_CTL, 1 << HOSC_CTL_HOSC_EN);
	delay(10000);

	/* enable analog LDO */
	act_or(AVDDLDO_CTL, 1 << 0);

	/* enable DSPPLL, busy check if PLL is lock */
	act_write(DSPPLL_CTL, (1 << DSPPLL_CTL_DSPPLL_EN) | (0x3f & (dsp_freq_khz/6144)));
	do{
		reg_val = act_read(DSPPLL_CTL) & (1 << DSPPLL_CTL_DSPPLL_LOCK);
	}while(reg_val == 0);

	act_write(CMU_BUSCLK, 0x0);//2 div
	delay(1000);

	/* set DSPPLL as dsp clock source */
	act_write(CMU_DSPCLK, 0x3);//bit4 div  //0:RC64, 1:HOSC, 2:AUDIOPLL 3:DSPPLL
}

int audiopll_from_hosc(sample_rate_e sample_rate)
{
	uint32_t reg_val = 0;

	/* disable audioPLL first */
	act_write(AUDIOPLL_CTL, 0);

	/* enable audioPLL, use HOSC as audioPLL clock source */
	reg_val = (1 << AUDIOPLL_CTL_AUDPLLEN) | (0 << AUDIOPLL_CTL_AUDPLLSRC);

	/* check audio clock series */
	switch (sample_rate)
	{
		/* 44.1 KHz clock series */
		case SR_11025 :
		case SR_22050 :
		case SR_44100 :
		case SR_88200 :
		case SR_176400 :
			reg_val |= 1 << AUDIOPLL_CTL_AUDPLLFSRL;
		break;
		/* 48 KHz clock series */
		default:
			reg_val |= 0 << AUDIOPLL_CTL_AUDPLLFSRL;
		break;
	}
	act_write(AUDIOPLL_CTL, reg_val);

	/* wait audio PLL lock */
	do{
		reg_val = act_read(AUDIOPLL_CTL) & (1 << AUDIOPLL_CTL_AUDPLL_LOCK);
	}while(reg_val == 0);

	return 0;
}

int audiopll_from_bclk(gpio_e bclk_io, uint32_t bclk_freq)
{
	uint32_t reg_val = 0;
	uint32_t inclk = 0;

	/* should config gpio mfp of i2s clock group before here */
	/* only GPIO 2,3,4,5 are able to receive bclk and use it as clock source of audioPLL */
	/* if haven't enable bclk input yet, enable it */
	if((act_read(CLKIN_CTL) & (1 << CLKIN_CTL_ACLKIN_EN)) == 0)
	{
		act_write(CLKIN_CTL, ((bclk_io - GPIO_SEL_2) << CLKIN_CTL_ACLKIN_SEL_SHIFT) | (1 << CLKIN_CTL_ACLKIN_EN));
	}

	/* disable audioPLL first */
	act_write(AUDIOPLL_CTL, 0);

	/* enable audioPLL, use BCLK as audioPLL clock source */
	reg_val = (1 << AUDIOPLL_CTL_AUDPLLEN) | (1 << AUDIOPLL_CTL_AUDPLLSRC);

	/* check audio clock series */
	switch (bclk_freq)
	{
#if 0 // TODO: untested
		/* AUDIO PLL INCLK Bank 0 */
		case 128000:			{inclk = 0b0; break;}		// 8k		* 16
		case 176400:										// 11.025k	* 16
		case 192000:			{inclk = 0b1; break;}		// 12k		* 16
		case 256000:			{inclk = 0b10; break;}		// 16k		* 16
		case 352800:										// 22.05k	* 16
        case 384000:            {inclk = 0b11; break;}		// 24k		* 16
        case 512000:            {inclk = 0b100; break;}		// 32k		* 16
		case 705600:										// 44.1k	* 16
		case 768000:			{inclk = 0b101; break;}		// 24k		* 32
    	case 1024000:			{inclk = 0b110; break;}		// 32k		* 32
		case 1411200:										// 44.1k	* 32
        case 1536000:			{inclk = 0b0111; break;}	// 24k * 32bit * slot2
#endif
		/* AUDIO PLL INCLK Bank 1 */
		case 2048000:			{inclk = 0b1000; break;}	// 32k		* 32bit * slot2
		case 2822400:										// 44.1k	* 32bit * slot2
		case 3072000:			{inclk = 0b1001; break;}	// 48k		* 32bit * slot2
		case 4096000:			{inclk = 0b1010; break;}	// 64k		* 32bit * slot2
		case 5644800:										// 44.1k	* 32bit * slot4
		case 6144000:           {inclk = 0b1011; break;}	// 48k		* 32bit * slot4
		case 8192000:           {inclk = 0b1100; break;}	// 32k		* 32bit * slot8
		case 11289600:										// 44.1k	* 32bit * slot8
		case 12288000:			{inclk = 0b1101; break;}	// 48k		* 32bit * slot8
//		case 16384000:			{inclk = 0b1110; break;}	// 64k		* 32bit * slot8, TODO : untested
		case 24576000:			{inclk = 0b1111; break;}	// 96k		* 32bit * slot8
		default:				dbg_print("invalid bclk %d hz\n", bclk_freq);return -1;
	}
	act_write(AUDIOPLL_CTL, (reg_val | inclk));

	dbg_print("input bclk %d hz\n", bclk_freq);
	dbg_print("AUDIOPLL_CTL 0x%x\n", act_read(AUDIOPLL_CTL));

	/* wait until audio PLL lock */
	do{
		reg_val = act_read(AUDIOPLL_CTL) & (1 << AUDIOPLL_CTL_AUDPLL_LOCK);
	}while(reg_val == 0);

	return 0;
}


void cmu_bclk_det_irq_handler(void *arg)
{
	bclk_det_cb_t _bclk_det_cb = (bclk_det_cb_t)arg;
	bclk_det_sta_e bclk_sta = 0;

	if(act_read(CMU_BCLKDECT) & (1 << CMU_BCLKDECT_CLKON_INTPD))
	{
		/* input bclk detected, disable clk-on irq */
		act_and(CMU_BCLKDECT, ~((1 << CMU_BCLKDECT_CLKON_TINTEN)|(1 << CMU_BCLKDECT_CLKON_DECTEN)));
		/* clear clk-on pend, enable no-clk irq */
        act_or(CMU_BCLKDECT, (1 << CMU_BCLKDECT_CLKON_INTPD)|(1 << CMU_BCLKDECT_NOCLK_INTEN)|(1 << CMU_BCLKDECT_NOCLK_DECTEN));

		bclk_sta = BCLK_VALID;
	}
	else if(act_read(CMU_BCLKDECT) & (1 << CMU_BCLKDECT_NOCLK_TINTPD))
	{
		/* invalid input bclk detected, disable no-clk irq */
		act_and(CMU_BCLKDECT, ~((1 << CMU_BCLKDECT_NOCLK_INTEN)|(1 << CMU_BCLKDECT_NOCLK_DECTEN)));
		/* clear no-clk pend, enable clk-on irq */
		act_or(CMU_BCLKDECT, (1 << CMU_BCLKDECT_NOCLK_TINTPD)|(1 << CMU_BCLKDECT_CLKON_TINTEN)|(1 << CMU_BCLKDECT_CLKON_DECTEN));

		bclk_sta = BCLK_INVALID;
	}
	else
	{
		return;
	}

	if(_bclk_det_cb)
	{
		_bclk_det_cb(bclk_sta);
	}
	xtos_interrupt_clear(CMU_BCLK_DETECT_IRQ_NUM);
}


void cmu_bclk_detect_enable(gpio_e bclk_io, uint8_t clk_grp)
{
	uint32_t reg_val = 0;

	/* if haven't enable bclk input yet, enable it */
	if((act_read(CLKIN_CTL) & (1 << CLKIN_CTL_ACLKIN_EN)) == 0)
	{
		act_write(CLKIN_CTL, ((bclk_io - GPIO_SEL_2) << CLKIN_CTL_ACLKIN_SEL_SHIFT) | (1 << CLKIN_CTL_ACLKIN_EN));
	}
	/* enable detect input bclk valid irq */
	reg_val |= 1 << CMU_BCLKDECT_CLKON_DECTEN;

	/* enable detect input bclk invalid irq */
	reg_val |= 1 << CMU_BCLKDECT_NOCLK_DECTEN;
	reg_val |= CMU_BCLK_NOCLK_CNT_THRESHOLD << CMU_BCLKDECT_NOCLK_DECTCOUNTER_SHIFT;

	reg_val |= clk_grp << CMU_BCLKDECT_GXBCLK_SEL_SHIFT;

	act_write(CMU_BCLKDECT, reg_val);

	/* check if there is a valid bclk input */
	do{
		reg_val = act_read(CMU_BCLKDECT);
	}while(((reg_val & (1 << CMU_BCLKDECT_CLKON_INTPD)) == 0) && ((reg_val & (1 << CMU_BCLKDECT_NOCLK_TINTPD)) == 0));

	if(reg_val & (1 << CMU_BCLKDECT_CLKON_INTPD))
	{
		/* enable detect input bclk invalid irq */
		reg_val = 1 << CMU_BCLKDECT_NOCLK_INTEN;
		reg_val |= 1 << CMU_BCLKDECT_NOCLK_DECTEN;
		reg_val |= CMU_BCLK_NOCLK_CNT_THRESHOLD << CMU_BCLKDECT_NOCLK_DECTCOUNTER_SHIFT;
	}
	else
	{
		/* enable detect input bclk valid irq */
		reg_val = 1 << CMU_BCLKDECT_CLKON_TINTEN;
		reg_val |= 1 << CMU_BCLKDECT_CLKON_DECTEN;
	}

	xtos_interrupt_disable(CMU_BCLK_DETECT_IRQ_NUM);
	xtos_set_interrupt_handler(CMU_BCLK_DETECT_IRQ_NUM, (xtos_handler)cmu_bclk_det_irq_handler, (void *)bclk_det_user_cb, NULL);
	xtos_interrupt_enable(CMU_BCLK_DETECT_IRQ_NUM);

	reg_val |= clk_grp << CMU_BCLKDECT_GXBCLK_SEL_SHIFT;

	act_write(CMU_BCLKDECT, reg_val);
}

void cmu_bclk_detect_disable(void)
{
	act_write(CMU_BCLKDECT, 0);
	xtos_interrupt_disable(CMU_BCLK_DETECT_IRQ_NUM);
}
