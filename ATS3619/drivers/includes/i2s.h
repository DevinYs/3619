
#ifndef __I2S_H__
#define __I2S_H__

#include "gpio.h"
#include "audio_basic.h"
#include "asrc.h"


#define I2SRX0_FIFO_LEVEL       (0xF)
#define I2SRX1_FIFO_LEVEL       (0xF)
#define I2STX0_FIFO_LEVEL       (0xF)
#define I2STX1_FIFO_LEVEL       (0xF)

#define I2S_LJ                  (0x0)   // 0 BCLK offset, left-justified
#define I2S_FORMAT              (0x1)   // 1 BCLK offset, i2s typical
#define I2S_2BCLK               (0x2)   // 2 BCLK offset
#define I2S_RJ                  (0x3)   // right-justified

#define I2SRX0_FORMAT           I2S_FORMAT
#define I2SRX1_FORMAT           I2S_FORMAT
#define I2STX0_FORMAT           I2S_FORMAT
#define I2STX1_FORMAT           I2S_FORMAT


typedef enum
{
    I2SCLK_GROUP0 = 0,
    I2SCLK_GROUP1 = 1,
    I2SCLK_GROUP2 = 2,
    I2SCLK_GROUP3 = 3,
} clk_group_e;

typedef enum
{
    MASTER  = 0,
    SLAVE   = 1,
} mst_slv_e;

typedef enum
{
    I2S_WIDTH_32BIT     = 0,
    I2S_WIDTH_16BIT     = 1,
} i2s_ch_width_e;


typedef enum
{
    SLOT1   = 0,
    SLOT2   = 1,
    SLOT4   = 2,
    SLOT8   = 3,
    SLOT16  = 4,
} i2s_slot_e;

typedef enum
{
    LIN1    = 0,
    LIN2    = 1,
    LIN3    = 2,
    LIN4    = 3,
    LIN5    = 4,
    LIN6    = 5,
    LIN7    = 6,
    LIN8    = 7,
} i2s_dline_e;

/*
typedef enum
{
    SRD_TIMEOUT         = 0,
    SRD_SR_CHANGE       = 1,
    SRD_CHW_CHANGE      = 2,
} i2s_srd_sta_e;

typedef void (*i2s_srd_cb_t)(clk_group_e clk_group, i2s_srd_sta_e i2s_srd_sta);

typedef struct
{
    i2s_srd_cb_t        user_srd_cb;
} i2s_srd_t;
*/

typedef struct
{
    sample_rate_e       sample_rate;
    mst_slv_e           mst_slv_mode;
    clk_group_e         clk_group;
    gpio_e              mclk_gpio;
    gpio_e              bclk_gpio;
    gpio_e              lrclk_gpio;
    i2s_slot_e          slot;
    i2s_dline_e         dataline_num;
    gpio_e              data_io[8];
    i2s_ch_width_e      chan_width;
    uint32_t            bclk2pll;
    uint32_t            srd_en;
}i2s_cfg_t;


void i2s_clock_source_init(void);

int i2s_init(uint32_t trxx, i2s_cfg_t* i2strx_cfg);
void i2s_start(uint32_t i2s_use, gpio_e lrclk_io);

int i2s_asrc_access_config(audio_dev_e i2s_interface, asrc_access_e fifo_access);

#endif /* __I2S_H__ */
