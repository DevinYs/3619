#ifndef __ASRC_H__
#define __ASRC_H__


#include "audio_basic.h"



typedef struct
{

}asrc_cfg_t;


typedef enum
{
    AUDIO_FIFO_ACCESS   = 0,    
    ASRC0_ACCESS        = 1,
    ASRC1_ACCESS        = 2,
    ASRC2_ACCESS        = 3,
    ASRC3_ACCESS        = 4,
    /* member below are only used on I2S */
    MULTI_ASRC_ACCESS   = 5,    // only I2STX0/I2SRX0 can configured
    ASRC_2_3_ACCESS     = 6,    // only I2SRX0 can configured
} asrc_access_e;


#endif /* __ASRC_H__ */
