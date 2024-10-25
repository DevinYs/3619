
#ifndef __BASIC_H__
#define __BASIC_H__

#include <stdint.h>
#include "ATS361X.h"

#define UART_ENABLE 1
#define UART_GUI_TOOL 1

#define HOSC_FREQ                                   (24576000)

#define true                                        (1)
#define false                                       (0)

#define PASSED                                      (0)
#define FAILED                                      (1)

#define DISABLE                                     (0)
#define ENABLE                                      (1)

#define act_write(reg, val)       		            ((*((volatile unsigned int *)(reg))) = (val))
#define act_read(reg)             		            (*((volatile unsigned int *)(reg)))
#define act_writel(val, reg)       		            ((*((volatile unsigned int *)(reg))) = (val))
#define act_readl(reg)             		            (*((volatile unsigned int *)(reg)))
#define act_or(reg,val)								((*((volatile unsigned int *)(reg))) |= (val))
#define act_and(reg,val)							((*((volatile unsigned int *)(reg))) &= (val))
#define act_mask_or(reg,mask,val)			        ((*((volatile unsigned int *)(reg))) = (*((volatile unsigned int *)(reg))) & (~(mask)) | (val))

#define ARRAY_SIZE(_array)                          (sizeof(_array) / sizeof(_array[0]))

typedef unsigned long                                uint32;
typedef int                                         int32;
typedef unsigned char                               uint8;
typedef signed char                                 int8;
typedef unsigned short                              uint16;
typedef volatile unsigned int*                      REG32;

#endif /* __BASIC_H__ */

