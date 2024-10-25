
#include "basic.h"
#include "delay.h"

uint32_t getCycleCount(void)
{
    uint32_t ccount = 0;
    __asm volatile("rsr %0,ccount":"=a" (ccount));
    return ccount;
}


/*
 * please note the dsp clock source when you use this function to delay cycles
 * RC64M is default clock source when dsp start up, please refer to register CMU_DSPCLK
 */
void delay(uint32_t _cycle)
{
    volatile uint32_t cnt = _cycle;
    for(; cnt > 0; cnt--);
}


void delay_ms(uint32_t _ms)
{
    uint32_t delay_cycles;
    uint32_t cycle_start;

    cycle_start = getCycleCount();
    delay_cycles = (act_read(DSPPLL_CTL) & 0x3F) * 6144 * _ms;

    while((getCycleCount() - cycle_start) < delay_cycles)
    {
        ;
    }
}

void delay_us(uint32_t _us)
{
    uint32_t delay_cycles;
    uint32_t cycle_start;

    cycle_start = getCycleCount();
    delay_cycles = (act_read(DSPPLL_CTL) & 0x3F) * 6144 /1000 * _us;

    while((getCycleCount() - cycle_start) < delay_cycles)
    {
        ;
    }
}
