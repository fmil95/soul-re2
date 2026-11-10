#ifndef PS2_TIMER_H
#define PS2_TIMER_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* bss 1e94c40 */ extern uint32 lastCount;
/* bss 1e94c48 */ extern uint64 totalCycles;

/* Non-static functions of this unit (STABS signatures). */
void TIMER_Init(void);
void TIMER_Tick(void);
uint64 TIMER_GetCycles(void);
uint64 TIMER_CyclesToUS(uint64 cycles);
uint64 TIMER_TimeDiff(uint64 prev);
uint64 TIMER_GetTimeMS(void);
uint64 TIMER_GetTimeUS(void);
void PC_Tick(void);
int PC_GetDCacheMisses(void);
int PC_GetICacheMisses(void);

#endif /* PS2_TIMER_H */
