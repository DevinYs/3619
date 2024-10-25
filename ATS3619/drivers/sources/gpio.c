
#include "basic.h"
#include "gpio.h"


#define DIGITAL_PIN_NUM             (30)


void gpio_set_pin(uint8_t gpio_num)
{
    act_or(GPIO_BSR0, (1 << gpio_num));
}

void gpio_reset_pin(uint8_t gpio_num)
{
    act_or(GPIO_BRR0, (1 << gpio_num));
}

void gpio_write_pin(uint8_t gpio_num, uint8_t value)
{
    if(value)
    {
        gpio_set_pin(gpio_num);
    }
    else
    {
        gpio_reset_pin(gpio_num);
    }
}

uint8_t gpio_read_pin(uint8_t gpio_num)
{
    /* only read value of digital pins */
    return !!(act_read(GPIO_IDAT0) & (1 << gpio_num));
}

void gpio_config(uint8_t gpio_num, uint32_t mfp)
{
    act_write(GPIO_BASE + gpio_num * 4, mfp);

#if 0
    if(gpio_num > DIGITAL_PIN_NUM || config == NULL)
    {
        if(gpio_num > 35 || gpio_num < 32)
        {
            dbg_print("wrong gpio_num %d\n", gpio_num);
            return;
        }
    }

    /* gpio pull-up/pull-down configuration */
    if(config->pull_up_down)
    {
        mode |= 0x1 << config->pull_up_down;
    }

    /* gpio input/output configuration */
    if(config->dir)
    {
        mode |= 0x1 << config->dir;
    }

    /* gpio input irq configuration */
    if(config->irq_en == GPIO_INTC_EN)
    {
        mode |= 0x1 << GPIO0_CTL_GPIO_INTCEN;
        mode |= config->trig_event << GPIO0_CTL_GPIO_TRIG_CTL_SHIFT;

        if(config->irq_msk == GPIO_SEND_IRQ)
        {
            mode |= 0x1 << GPIO0_CTL_GPIO_INTC_MSK;
        }
    }

    /* gpio pad drive configuration */
    mode |= config->pad_drv << GPIO0_CTL_PADDRV_SHIFT;

    /* gpio MFP configuration */
    if(config->mfp <= 63)
    {
        if(gpio_num <= 35 && gpio_num >= 32) // analog pin
        {
            if(config->mfp != 0 \
                && config->mfp != 53 \
                && config->mfp != 54 \
                && config->mfp != 63)
            {
                dbg_print("gpio%d is analog pin\n", gpio_num);
                return -1;
            }
        }
        mode |= config->mfp;
    }
    else
    {
        dbg_print("gpio%d set wrong mfp %d\n", gpio_num, config->mfp);
        return;
    }
    act_write(GPIO_BASE + gpio_num * 4, mode);
#endif
}

void jtag_en(uint8_t enable)
{
    act_mask_or(JTAG_CTL, (1 << JTAG_CTL_JTAGEN), (!!enable << JTAG_CTL_JTAGEN));
}

void jtag_set_pin_group(uint8_t group)
{
    // group1 (gpio17-21) default
    // group0 (gpio12-16)
    act_mask_or(JTAG_CTL, JTAG_CTL_JTAGMAP_MASK, (!!group << JTAG_CTL_JTAGMAP_SHIFT));
}
