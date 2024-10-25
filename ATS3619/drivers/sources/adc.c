
#include <string.h>
#include "cmu.h"
#include "adc.h"
#include "delay.h"


// #define DBG_PRINT_EN
#ifdef DBG_PRINT_EN
#include "printk.h"
#define dbg_print   printk
#else
#define dbg_print(...)
#endif


#define DMIC_CLK_MFP            ((1 << GPIO0_CTL_PADDRV_SHIFT)|(53 << GPIO0_CTL_MFP_SHIFT))
#define DMIC_DATA_MFP           ((1 << GPIO0_CTL_PADDRV_SHIFT)|(54 << GPIO0_CTL_MFP_SHIFT))


#define ADC_PREINR_5KOHM        (0b01<<ADC0_CTL_ADC_PREINR_SHIFT)
#define ADC_PREINR_10KOHM       (0b10<<ADC0_CTL_ADC_PREINR_SHIFT)
#define ADC_PREINR_20KOHM       (0b11<<ADC0_CTL_ADC_PREINR_SHIFT)
#define ADC_PREINR              ADC_PREINR_20KOHM


void audio_ref_init(void)
{
    cmu_device_reset(RESET_ID_AUDIO_REF, MRCR_NORMAL);
    act_write(REF_LDO_CTL, 0X2D2D92);
}

static int adc_clock_config(sample_rate_e _sample_rate, adc_clk_cfg_t *_clk_cfg)
{
    uint32_t reg_val = 0;
    uint8_t adc_clk_div = 0;
    uint8_t fir_clk_div = 0;
    uint8_t dmic_ovfs_div = 0;
    uint8_t amic_ovfs = 0;
    uint8_t dmic_ovfs = 0;

    /* determine clock divisor according to sample rate */
    switch(_sample_rate)
    {
        case SR_8000:
            adc_clk_div     = 0x3; /* CMU_ADCCLK.ADCCLKDIV = /4 */
            fir_clk_div     = 0x2; /* CMU_ADCCLK.FIRCLKDIV = /3 */
            dmic_ovfs_div   = 0x0; /* CMU_DMICCLK.DMICOVFS = /1 */
            amic_ovfs       = 0x7; /* ADC_DIGCTL.AMIC_OVFS = 768fs */
            dmic_ovfs       = 0x5; /* ADC_DIGCTL.DMIC_OVFS = 384fs */
        break;

        case SR_11025:
        case SR_12000:
            adc_clk_div     = 0x1; /* CMU_ADCCLK.ADCCLKDIV = /2 */
            fir_clk_div     = 0x3; /* CMU_ADCCLK.FIRCLKDIV = /4 */
            dmic_ovfs_div   = 0x1; /* CMU_DMICCLK.DMICOVFS = /2 */
            amic_ovfs       = 0x6; /* ADC_DIGCTL.AMIC_OVFS = 512fs */
            dmic_ovfs       = 0x4; /* ADC_DIGCTL.DMIC_OVFS = 256fs */
        break;

        case SR_16000:
            adc_clk_div     = 0x1; /* CMU_ADCCLK.ADCCLKDIV = /2 */
            fir_clk_div     = 0x2; /* CMU_ADCCLK.FIRCLKDIV = /3 */
            dmic_ovfs_div   = 0x1; /* CMU_DMICCLK.DMICOVFS = /2 */
            amic_ovfs       = 0x5; /* ADC_DIGCTL.AMIC_OVFS = 384fs */
            dmic_ovfs       = 0x3; /* ADC_DIGCTL.DMIC_OVFS = 192fs */
        break;

        case SR_22050:
        case SR_24000:
            adc_clk_div     = 0x0; /* CMU_ADCCLK.ADCCLKDIV = /1 */
            fir_clk_div     = 0x3; /* CMU_ADCCLK.FIRCLKDIV = /4 */
            dmic_ovfs_div   = 0x3; /* CMU_DMICCLK.DMICOVFS = /4 */
            amic_ovfs       = 0x4; /* ADC_DIGCTL.AMIC_OVFS = 256fs */
            dmic_ovfs       = 0x2; /* ADC_DIGCTL.DMIC_OVFS = 128fs */
        break;

        case SR_32000:
            adc_clk_div     = 0x0; /* CMU_ADCCLK.ADCCLKDIV = /1 */
            fir_clk_div     = 0x2; /* CMU_ADCCLK.FIRCLKDIV = /3 */
            dmic_ovfs_div   = 0x3; /* CMU_DMICCLK.DMICOVFS = /4 */
            amic_ovfs       = 0x3; /* ADC_DIGCTL.AMIC_OVFS = 192fs */
            dmic_ovfs       = 0x1; /* ADC_DIGCTL.DMIC_OVFS = 96fs */
        break;

        case SR_44100:
        case SR_48000:
            adc_clk_div     = 0x1; /* CMU_ADCCLK.ADCCLKDIV = /2 */
            fir_clk_div     = 0x0; /* CMU_ADCCLK.FIRCLKDIV = /1 */
            dmic_ovfs_div   = 0x1; /* CMU_DMICCLK.DMICOVFS = /2 */
            amic_ovfs       = 0x2; /* ADC_DIGCTL.AMIC_OVFS = 128fs */
            dmic_ovfs       = 0x0; /* ADC_DIGCTL.DMIC_OVFS = 64fs */
        break;

        case SR_64000:
            adc_clk_div     = 0x0; /* CMU_ADCCLK.ADCCLKDIV = /1 */
            fir_clk_div     = 0xE; /* CMU_ADCCLK.FIRCLKDIV = /1.5 */
            amic_ovfs       = 0x1; /* ADC_DIGCTL.AMIC_OVFS = 96fs */
            if(_clk_cfg->input_type == ADC_DMIC_INPUT)
            {
                dbg_print("dmic sr err %d\n", _sample_rate);
                return -1;
            }
        break;

        case SR_88200:
        case SR_96000:
            adc_clk_div     = 0x0; /* CMU_ADCCLK.ADCCLKDIV = /1 */
            fir_clk_div     = 0x0; /* CMU_ADCCLK.FIRCLKDIV = /1 */
            amic_ovfs       = 0x0; /* ADC_DIGCTL.AMIC_OVFS = 64fs */
            if(_clk_cfg->input_type == ADC_DMIC_INPUT)
            {
                dbg_print("dmic sr err %d\n", _sample_rate);
                return -1;
            }
        break;

        default:
            dbg_print("adc sr err %d\n", _sample_rate);
            return -1;
        break;
    }

    reg_val = act_read(CMU_ADCCLK);
    /* config 'audioPLL/4' or 'HOSC' as adc clock source */
    reg_val &= ~(0x3 << CMU_ADCCLK_ADCCLKSRC);
    reg_val |= _clk_cfg->clk_src << CMU_ADCCLK_ADCCLKSRC;

    /* config adc clock divisor */
    reg_val &= ~(0x3 << CMU_ADCCLK_ADCCLKDIV_SHIFT);
    reg_val |= adc_clk_div << CMU_ADCCLK_ADCCLKDIV_SHIFT;

    /* config fir clock divisor */
    reg_val &= ~(0xf << CMU_ADCCLK_FIRCLKDIV_SHIFT);
    reg_val |= fir_clk_div << CMU_ADCCLK_FIRCLKDIV_SHIFT;

    act_write(CMU_ADCCLK, reg_val);

    if(_clk_cfg->input_type == ADC_DMIC_INPUT)
    {
        reg_val = act_read(CMU_DMICCLK);
        /* config dmic over sample rate clock divisor */
		reg_val &= ~(0x3 << CMU_DMICCLK_DMICOVFS_SHIFT);
		reg_val |= dmic_ovfs_div << CMU_DMICCLK_DMICOVFS_SHIFT;
        /* config dmic clock pre divisor */
        reg_val &= ~(0x1 << CMU_DMICCLK_DMICCLKPREDIV);
		reg_val |= 0 << CMU_DMICCLK_DMICCLKPREDIV;
        /* config dmic01 clock reverse */
        reg_val &= ~(0x1 << CMU_DMICCLK_DMIC01CLKRVS);
		reg_val |= 0 << CMU_DMICCLK_DMIC01CLKRVS;
        /* config dmic01 clock divisor */
        reg_val &= ~(0x3 << CMU_DMICCLK_DMIC01CLKDIV_SHIFT);
		reg_val |= 0 << CMU_DMICCLK_DMIC01CLKDIV_SHIFT;

		act_write(CMU_DMICCLK, reg_val);

        reg_val = act_read(ADC_DIGCTL);
        /* config dmic over sample rate clock */
		reg_val &= ~(0x7 << ADC_DIGCTL_DMIC_OVFS_SHIFT);
        reg_val |= dmic_ovfs << ADC_DIGCTL_DMIC_OVFS_SHIFT;
    }
    else
    {
        reg_val = act_read(ADC_DIGCTL);
        /* config amic over sample rate clock */
		reg_val &= ~(0x7 << ADC_DIGCTL_AMIC_OVFS_SHIFT);
        reg_val |= amic_ovfs << ADC_DIGCTL_AMIC_OVFS_SHIFT;
    }
    act_write(ADC_DIGCTL, reg_val);

    dbg_print("CMU_ADCCLK 0x%x\n", act_read(CMU_ADCCLK));
    dbg_print("CMU_DMICCLK 0x%x\n", act_read(CMU_DMICCLK));
	return 0;
}

static int adc_fifo_reset(void)
{
    /* if adc is reset, config it normal */
    if((act_read(MRCR0) & (1 << RESET_ID_ADC)) == 0)
    {
        cmu_device_reset(RESET_ID_ADC, MRCR_NORMAL);
    }
    /* if adc clock is disable, enable it */
    if((act_read(CMU_DEVCLKEN) & (1 << CLOCK_ID_ADC)) == 0)
    {
        cmu_device_clock_enable(CLOCK_ID_ADC, ENABLE);
    }

    /* reset adc fifo */
    act_and(ADC_FIFOCTL, ~(1 << ADC_FIFOCTL_ADF0RT));
    /* disable adc fifo clock */
    act_and(CMU_ADCCLK, ~(1 << CMU_ADCCLK_ADCFIFO0CLKEN));
    return 0;
}

static void adc_fifo_config(adc_fifo_access_e adc_fifo_access, uint8_t drq_level)
{
    uint32_t reg_val = 0;

    if(adc_fifo_access == ADC_FIFO_DMA_ACCESS)
    {
        reg_val |= 0x1 << ADC_FIFOCTL_ADF0OS_SHIFT; // adc fifo access by dma
        reg_val |= 0x1 << ADC_FIFOCTL_ADF0FDE; // enable drq
        reg_val |= 0x0 << ADC_FIFOCTL_ADCFIFO0_DMAWIDTH; // dma transfer data width 32bit
        reg_val |= drq_level << ADC_FIFOCTL_DRQ_LEVEL_SHIFT; // config fifo level to trigger drq
    }
    else
    {
        reg_val |= 0x0 << ADC_FIFOCTL_ADF0OS_SHIFT; // adc fifo access by cpu
        reg_val |= 0x1 << ADC_FIFOCTL_ADF0FIE; // enable irq
    }

    act_write(ADC_FIFOCTL, reg_val);

    dbg_print("ADC_FIFOCTL 0x%x\n", act_read(ADC_FIFOCTL));
}

static void adc_fifo_en(void)
{
    /* enable adc fifo */
    act_or(ADC_FIFOCTL, 1 << ADC_FIFOCTL_ADF0RT);
    /* enable adc fifo clock */
    act_or(CMU_ADCCLK, 1 << CMU_ADCCLK_ADCFIFO0CLKEN);
}

static void adc_fir_config(adc_fir_mode_e _fir_mode)
{
    uint32_t reg_val = 0;

    reg_val = act_read(ADC_DIGCTL);
    reg_val &= ~(0xf << ADC_DIGCTL_FILTER_MD_SEL_SHIFT);
    reg_val |= _fir_mode << ADC_DIGCTL_FILTER_MD_SEL_SHIFT;
    act_write(ADC_DIGCTL, reg_val);

    reg_val = act_read(CMU_ADCCLK);
    /* config fir clock reverse */
    reg_val &= ~(1 << CMU_ADCCLK_FIRCLKRVS);
    reg_val |= 0 << CMU_ADCCLK_FIRCLKRVS;
    /* enable fir clock */
    reg_val &= ~(1 << CMU_ADCCLK_FIRCLKEN);
    reg_val |= 1 << CMU_ADCCLK_FIRCLKEN;

    act_write(CMU_ADCCLK, reg_val);
}

static int adc_channel_digital_config(adc_input_type_e _input_types, adc_dmic_cfg_t *_dmic_cfg)
{
    uint32_t reg_val = 0;

    /* determine amic or dmic input to both channel */
    reg_val = act_read(CH0_DIGCTL);
    reg_val &= ~(1 << CH0_DIGCTL_MIC_SEL);
    reg_val |= _input_types << CH0_DIGCTL_MIC_SEL; // select dmic data to ch0
    reg_val |= 1 << CH0_DIGCTL_DAT_OUT_EN; // enable fifo timing slot
    reg_val |= 0 << CH0_DIGCTL_ADOS_SHIFT; // default: data output to adc fifo, this bit may changed if asrc used
    act_write(CH0_DIGCTL, reg_val);

    reg_val = act_read(CH1_DIGCTL);
    reg_val &= ~(1 << CH0_DIGCTL_MIC_SEL);
    reg_val |= _input_types << CH0_DIGCTL_MIC_SEL; // select dmic data to ch1
    reg_val |= 1 << CH0_DIGCTL_DAT_OUT_EN; // enable fifo timing slot
    reg_val |= 0 << CH0_DIGCTL_ADOS_SHIFT;  // default: data output to adc fifo, this bit may changed if asrc used
    act_write(CH1_DIGCTL, reg_val);

    if(_input_types == ADC_DMIC_INPUT)
    {
        if(_dmic_cfg == 0)
        {
            return -1;
        }
        reg_val = act_read(ADC_DIGCTL);
        /* config dmic pre gain */
        reg_val &= ~(0x7 << ADC_DIGCTL_DMIC_PRE_GAIN_SHIFT);
        reg_val |= _dmic_cfg->pre_gain << ADC_DIGCTL_DMIC_PRE_GAIN_SHIFT;
        /* config dmic channel select */
        reg_val &= ~(1 << ADC_DIGCTL_DMIC01_CHS);
        reg_val |= _dmic_cfg->chan_sel << ADC_DIGCTL_DMIC_PRE_GAIN_SHIFT;

        act_write(ADC_DIGCTL, reg_val);

        /* config dmic pin mfp */
        act_write((GPIO_BASE + (_dmic_cfg->dmic_clk_pin) * 4), DMIC_CLK_MFP);
        act_write((GPIO_BASE + (_dmic_cfg->dmic_data_pin) * 4), DMIC_DATA_MFP);

        /* enable dmic clock source, for cic use */
        act_or(CMU_DMICCLK, (1 << CMU_DMICCLK_DMICCLKEN));
        /* enable dmic clock source, to pad */
        act_or(CMU_DMICCLK, (1 << CMU_DMICCLK_DMIC01CLKEN));
    }
    else
    {
        reg_val = act_read(CMU_ADCCLK);
        reg_val &= ~(1 << CMU_ADCCLK_AMICLKRVS);
        reg_val |= 0 << CMU_ADCCLK_AMICLKRVS;

        reg_val &= ~(1 << CMU_ADCCLK_AMICCLKEN);
        reg_val |= 1 << CMU_ADCCLK_AMICCLKEN;

        act_write(CMU_ADCCLK, reg_val);
    }

    /* enable ch0 and ch1 digital input at same time */
    act_or(ADC_DIGCTL, (0x3 << ADC_DIGCTL_ADC0_DIG_EN));

    dbg_print("ADC_DIGCTL 0x%x\n", act_read(ADC_DIGCTL));
    dbg_print("CH0_DIGCTL 0x%x\n", act_read(CH0_DIGCTL));
    dbg_print("CH1_DIGCTL 0x%x\n", act_read(CH1_DIGCTL));
    return 0;
}

static void adc_hpf_config(adc_hpf_cfg_t *_hpf_cfg)
{
    uint32_t reg_val = 0;

    if(_hpf_cfg->ch0_hpf_en)
    {
        reg_val = act_read(CH0_DIGCTL);
        reg_val |= (_hpf_cfg->ch0_hpf_en) << CH0_DIGCTL_HPFEN;
        reg_val |= (_hpf_cfg->ch0_hpf_s) << CH0_DIGCTL_HPF_S;
        reg_val &= ~(0x3f << CH0_DIGCTL_HPF_N_SHIFT);
        reg_val |= (_hpf_cfg->ch0_hpf_n) << CH0_DIGCTL_HPF_N_SHIFT;
        act_write(CH0_DIGCTL, reg_val);
    }
    if(_hpf_cfg->ch1_hpf_en)
    {
        reg_val = act_read(CH1_DIGCTL);
        reg_val |= (_hpf_cfg->ch1_hpf_en) << CH1_DIGCTL_HPFEN;
        reg_val |= (_hpf_cfg->ch1_hpf_s) << CH1_DIGCTL_HPF_S;
        reg_val &= ~(0x3f << CH1_DIGCTL_HPF_N_SHIFT);
        reg_val |= (_hpf_cfg->ch1_hpf_n) << CH1_DIGCTL_HPF_N_SHIFT;
        act_write(CH1_DIGCTL, reg_val);
    }
    dbg_print("CH0_DIGCTL 0x%x\n", act_read(CH0_DIGCTL));
    dbg_print("CH1_DIGCTL 0x%x\n", act_read(CH1_DIGCTL));
}

static int adc_get_again_bits(int again_value, adc_input_mode_e _input_mode)
{
	int again_bits = 0;

	if(_input_mode == ADC_SE_INPUT)
		again_value += 6000; // compensation for single-ended (pesu-diff) mode -6dB

#if  (ADC_PREINR == ADC_PREINR_5KOHM)
	if(again_value > 36000)// > 36db
        again_bits = 0x1f;
    else if(again_value > 18000)// (18,36] step=1
        again_bits = 0x1f - ((36000-again_value)/1000);
    else if(again_value > 6000)// (6,18] step=1.5
        again_bits = 0xd - ((18000-again_value)/1500);
    else if(again_value > 0)// (0,6] step=2
        again_bits = 0x5 - ((6000-again_value)/2000);
    else if(again_value > -6000)// (-6,0] step=3
        again_bits = 0x2 - ((0-again_value)/3000);
    else
        again_bits = 0;
#endif
#if  (ADC_PREINR == ADC_PREINR_10KOHM)
	if(again_value > 30000)// > 30db
        again_bits = 0x1f;
    else if(again_value > 12000)// (12,30] step=1
        again_bits = 0x1f - ((30000-again_value)/1000);
    else if(again_value > 0)// (0,12] step=1.5
        again_bits = 0xd - ((12000-again_value)/1500);
    else if(again_value > -6000)// (-6,0] step=2
        again_bits = 0x5 - ((0-again_value)/2000);
    else if(again_value > -12000)// (-12,-6] step=3
        again_bits = 0x2 - ((-6000-again_value)/3000);
    else
        again_bits = 0;
#endif
#if  (ADC_PREINR == ADC_PREINR_20KOHM)
	if(again_value > 24000)// > 24db
        again_bits = 0x1f;
    else if(again_value > 6000)// (6,24] step=1
        again_bits = 0x1f - ((24000-again_value)/1000);
    else if(again_value > -6000)// (-6,6] step=1.5
        again_bits = 0xd - ((6000-again_value)/1500);
    else if(again_value > -12000)// (-12,-6] step=2
        again_bits = 0x5 - ((-6000-again_value)/2000);
    else if(again_value > -18000)// (-18,-12] step=3
        again_bits = 0x2 - ((-12000-again_value)/3000);
    else
        again_bits = 0;
#endif

	return again_bits;
}

/*
CHx_GAIN.GAIN = -375 * (0x200 - gain_value)
note: gain_value would be transfer with 1000x to avoid fractional part, like '6000' means +6dB, '-12000' means -12dB
eg:
    bits = gain_value / 375 + 0x200 = 0 / 375 + 0x200 = 0x200      // 0 dB
    bits = gain_value / 375 + 0x200 = 63625 / 375 + 0x200 = 0x28f  // +63.625 dB
    bits = gain_value / 375 + 0x200 = -108000 / 375 + 0x200 = 0xe0 // -108 dB
*/
static uint16_t adc_get_dgain_bits(int dgain_value)
{
	int dgain_bits = 0;

	dgain_bits = dgain_value / 375 + 0x200;

    if(dgain_bits > 0x28f)
    {
        dgain_bits = 0x28f; // +63.625 dB maximum
    }
    if(dgain_bits < 0xe0)
    {
        dgain_bits = 0; // mute if digital gain is less than -108 dB
    }
	return dgain_bits;
}

static void adc_set_analog_gain(adc_chan_e adc_ch, int16_t again, adc_input_mode_e _input_mode)
{
    uint32_t reg_addr = (adc_ch == ADC_CH0) ? ADC0_CTL : ADC1_CTL;
    uint32_t reg_val = 0;

    /* config adc chx analog gain */
    reg_val = act_read(reg_addr);
    reg_val &= ~(0x1 << ADC0_CTL_ADC_PRE_INMODE);
    reg_val |= _input_mode << ADC0_CTL_ADC_PRE_INMODE;
    reg_val &= ~(0x1f << ADC0_CTL_ADC_PREVOL_SHIFT);
    reg_val |= adc_get_again_bits(again, _input_mode) << ADC0_CTL_ADC_PREVOL_SHIFT;
    act_write(reg_addr, reg_val);

    dbg_print("ADCx_CTL addr 0x%x val 0x%x\n", reg_addr, act_read(reg_addr));
}

void adc_set_digital_gain(adc_chan_e adc_ch, int32_t dgain)
{
    uint32_t reg_addr = (adc_ch == ADC_CH0) ? CH0_GAIN : CH1_GAIN;

    /* config adc ch0 digital gain */
    act_mask_or(reg_addr, (0x3ff << CH0_GAIN_GAIN_SHIFT), (adc_get_dgain_bits(dgain) << CH0_GAIN_GAIN_SHIFT));

    dbg_print("CHx_GAIN addr 0x%x val 0x%x\n", reg_addr, act_read(reg_addr));
}

static void adc_preamp_config(void)
{
    uint32_t reg_val = 0;

    reg_val = act_read(ADC0_CTL);
#if 0 // TODO
    /* config adc zero cross timeout 32ms */
    reg_val &= ~(0x3 << ADC0_CTL_ADC_PRE_ZCTO_SHIFT);
    reg_val |= 0x1 << ADC0_CTL_ADC_PRE_ZCTO_SHIFT;
    /* config adc soft step timeout 1ms */
    reg_val &= ~(0x3 << ADC0_CTL_ADC_PRE_SSTO_SHIFT);
    reg_val |= 0x0 << ADC0_CTL_ADC_PRE_SSTO_SHIFT;
    /* config adc soft step disable */
    reg_val &= ~(0x1 << ADC0_CTL_ADC_PRE_SSEN);
    reg_val |= 0x0 << ADC0_CTL_ADC_PRE_SSEN;
#endif
    /* config ch0/ch1 pre volume bit */
    reg_val &= ~(0x3 << ADC0_CTL_ADC_PREINR_SHIFT);
    reg_val |= ADC_PREINR;
    /* enable ch0/ch1 pre enable bit */
    reg_val &= ~(0x1 << ADC0_CTL_ADC_DEMEN);
    reg_val |= 0x1 << ADC0_CTL_ADC_DEMEN;
    reg_val &= ~(0x1 << ADC0_CTL_ADC_PREAMPEN);
    reg_val |= 0x1 << ADC0_CTL_ADC_PREAMPEN;
    reg_val &= ~(0x1 << ADC0_CTL_DAC_EN);
    reg_val |= 0x1 << ADC0_CTL_DAC_EN;

    act_write(ADC0_CTL, reg_val);
    act_write(ADC1_CTL, reg_val);

    dbg_print("ADC0_CTL 0x%x\n", act_read(ADC0_CTL));
    dbg_print("ADC1_CTL 0x%x\n", act_read(ADC1_CTL));
}

static void adc_bias_config(void)
{
    act_write(ADC0_BIAS, 0x007A779e);
    act_write(ADC1_BIAS, 0x007A76de);
    act_write(ADC_COM0_CTL, 0x35bc2c);
}

static void adc_enable(void)
{
    act_or(ADC0_CTL, (1 << ADC0_CTL_ADC_EN));
    act_or(ADC1_CTL, (1 << ADC0_CTL_ADC_EN));
}


int adc_asrc_access_config(asrc_access_e fifo_access)
{
    if(fifo_access > ASRC3_ACCESS)
    {
        dbg_print("adc asrc access err %d\n", fifo_access);
        return -1;
    }

    act_mask_or(CH0_DIGCTL, (0x7 << CH0_DIGCTL_ADOS_SHIFT), (fifo_access << CH0_DIGCTL_ADOS_SHIFT));
    act_mask_or(CH1_DIGCTL, (0x7 << CH0_DIGCTL_ADOS_SHIFT), (fifo_access << CH0_DIGCTL_ADOS_SHIFT));

    dbg_print("CH0_DIGCTL 0x%x\n", act_read(CH0_DIGCTL));
    dbg_print("CH1_DIGCTL 0x%x\n", act_read(CH1_DIGCTL));
    return 0;
}

int adc_init(adc_cfg_t *_adc_cfg)
{
    adc_clk_cfg_t adc_clk_cfg;

    /* disable adc clock source */
    cmu_device_clock_enable(CLOCK_ID_ADC, DISABLE);
    act_write(CMU_ADCCLK, 0);
    act_write(CMU_DMICCLK, 0);
    /* enable adc clock source */
    cmu_device_clock_enable(CLOCK_ID_ADC, ENABLE);

    /* reset adc module */
    cmu_device_reset(RESET_ID_ADC, MRCR_RESET);
    delay(1);
    cmu_device_reset(RESET_ID_ADC, MRCR_NORMAL);

    /* config adc clock */
    adc_clk_cfg.input_type = _adc_cfg->input_type;
    adc_clk_cfg.clk_src = ADCCLK_APLL_DIV4;
    adc_clock_config(_adc_cfg->sample_rate, &adc_clk_cfg);

    /* enable reference LDO */
    audio_ref_init();

    /* config adc fifo */
    adc_fifo_reset();
    adc_fifo_config(ADC_FIFO_DMA_ACCESS, 16);
    adc_fifo_en();

    /* config adc fir */
    adc_fir_config(ADC_FIR_A);

    /* config adc ch0/ch1 digital control register */
    adc_channel_digital_config(_adc_cfg->input_type, _adc_cfg->dmic_cfg);

    /* config adc hpf */
    if(_adc_cfg->hpf_cfg)
    {
        adc_hpf_config(_adc_cfg->hpf_cfg);
    }

    /* config adc preamp functions */
    adc_preamp_config();

    /* config adc analog gain for both ch0 and ch1 */
    adc_set_analog_gain(0, _adc_cfg->ch0_again, _adc_cfg->ch0_input_mode);
    adc_set_analog_gain(1, _adc_cfg->ch1_again, _adc_cfg->ch1_input_mode);

    /* config adc digital gain for both ch0 and ch1 */
    adc_set_digital_gain(0, _adc_cfg->ch0_dgain);
    adc_set_digital_gain(1, _adc_cfg->ch1_dgain);

    delay_ms(1);
    adc_bias_config();

    adc_enable();

	return 0;
}

#if 0
void analog_digital_MIC_switch(adc_input_type_e eMICtype)
{
    adc_cfg_t adc_cfg;
    adc_dmic_cfg_t dmic_cfg;
    adc_hpf_cfg_t hfp_cfg;

    memset(&adc_cfg, 0, sizeof(adc_cfg));
    memset(&dmic_cfg, 0, sizeof(dmic_cfg));
    memset(&hfp_cfg, 0, sizeof(hfp_cfg));

    dmic_cfg.chan_sel = DMIC_CHAN_LR;
    dmic_cfg.pre_gain = DMIC_GAIN_1X;
    dmic_cfg.dmic_clk_pin = GPIO_SEL_25;
    dmic_cfg.dmic_data_pin = GPIO_SEL_26;

    hfp_cfg.ch0_hpf_en = DISABLE;
    hfp_cfg.ch1_hpf_en = DISABLE;

    adc_cfg.sample_rate = SR_48000;
    adc_cfg.input_type = eMICtype;
    adc_cfg.dmic_cfg = &dmic_cfg;
    adc_cfg.hpf_cfg = NULL;
    adc_cfg.ch0_input_mode = ADC_SE_INPUT;
    adc_cfg.ch1_input_mode = ADC_SE_INPUT;
    adc_cfg.ch0_again = 0;
    adc_cfg.ch1_again = 0;
    adc_cfg.ch0_dgain = 0;
    adc_cfg.ch1_dgain = 0;

    adc_init(&adc_cfg);
	return;
}
#endif
