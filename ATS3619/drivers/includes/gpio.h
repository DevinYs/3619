
#ifndef __GPIO_H__
#define __GPIO_H__

#include "basic.h"


#define MFP_SET_GPIO   ((0x1 << GPIO0_CTL_PADDRV_SHIFT) | (0x0 << GPIO0_CTL_MFP_SHIFT))
#define INPUT_SET_GPIO ((0x1 << GPIO_10K_PU_EN) | (0x1 << GPIO_INPUT) | (0x0 << GPIO0_CTL_MFP_SHIFT))

typedef enum
{
    GPIO_SEL_NONE   = -1,
    GPIO_SEL_0      = 0 ,
    GPIO_SEL_1      = 1 ,
    GPIO_SEL_2      = 2 ,
    GPIO_SEL_3      = 3 ,
    GPIO_SEL_4      = 4 ,
    GPIO_SEL_5      = 5 ,
    GPIO_SEL_6      = 6 ,
    GPIO_SEL_7      = 7 ,
    GPIO_SEL_8      = 8 ,
    GPIO_SEL_9      = 9 ,
    GPIO_SEL_10     = 10,
    GPIO_SEL_11     = 11,
    GPIO_SEL_12     = 12,
    GPIO_SEL_13     = 13,
    GPIO_SEL_14     = 14,
    GPIO_SEL_15     = 15,
    GPIO_SEL_16     = 16,
    GPIO_SEL_17     = 17,
    GPIO_SEL_18     = 18,
    GPIO_SEL_19     = 19,
    GPIO_SEL_20     = 20,
    GPIO_SEL_21     = 21,
    GPIO_SEL_22     = 22,
    GPIO_SEL_23     = 23,
    GPIO_SEL_24     = 24,
    GPIO_SEL_25     = 25,
    GPIO_SEL_26     = 26,
}gpio_e;

typedef enum
{
    GPIO_10K_PU_EN = 8,
    GPIO_100K_PD_EN = 9,
    GPIO_50K_PU_EN = 11,
}gpio_pud_e;

typedef enum
{
    GPIO_OUTPUT = 6,
    GPIO_INPUT = 7,
}gpio_dir_e;

typedef enum
{
    GPIO_INTC_DIS = 0,
    GPIO_INTC_EN,
}gpio_irq_en_e;

typedef enum
{
    GPIO_MSK_IRQ = 0,
    GPIO_SEND_IRQ,
}gpio_irq_msk_e;

typedef enum
{
    GPIO_TRIG_RIS_EDGE = 0,
    GPIO_TRIG_FAL_EDGE,
    GPIO_TRIG_DAUL_EDGE,
    GPIO_TRIG_HIGH_LV,
    GPIO_TRIG_LOW_LV,
}gpio_trig_e;

typedef enum
{
    GPIO_PADDRV_LV0 = 0,
    GPIO_PADDRV_LV1,
    GPIO_PADDRV_LV2,
    GPIO_PADDRV_LV3,
    GPIO_PADDRV_LV4,
    GPIO_PADDRV_LV5,
    GPIO_PADDRV_LV6,
    GPIO_PADDRV_LV7,
}gpio_pad_drv_e;

typedef struct
{
    gpio_pud_e pull_up_down;
    gpio_dir_e dir;
    gpio_irq_en_e irq_en;
    gpio_irq_msk_e irq_msk;
    gpio_trig_e trig_event;
    gpio_pad_drv_e pad_drv;
    uint8_t mfp;
}gpio_cfg_t;



void gpio_set_pin(uint8_t gpio_num);
void gpio_reset_pin(uint8_t gpio_num);

void gpio_write_pin(uint8_t gpio_num, uint8_t value);
uint8_t gpio_read_pin(uint8_t gpio_num);

void gpio_config(uint8_t gpio_num, uint32_t mfp);


void jtag_en(uint8_t enable);
void jtag_set_pin_group(uint8_t group);

void mic_jita_detect(void);

#endif /* __GPIO_H__ */