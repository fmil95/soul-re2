/* Original path: C:\sr2\game\ps2\timer.c */
/* .text 0x00162F50, .bss 0x01E94C40 */

#include "ps2/timer.h"

// /* 00162f50 00000018 */ void TIMER_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_Init);

// /* 00162f68 00000070 */ void TIMER_Tick() {
//     /* a3 7 */ uint32 counter0;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_Tick);

// /* 00162fd8 00000054 */ uint64 TIMER_GetCycles() {
//     /* a0 4 */ uint32 counter0;
//     /* a0 4 */ uint64 cycles;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_GetCycles);

// /* 00163030 0000001c */ uint64 TIMER_CyclesToUS(/* a0 4 */ uint64 cycles) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_CyclesToUS);

// /* 00163050 00000028 */ uint64 TIMER_TimeDiff(/* s0 16 */ uint64 prev) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_TimeDiff);

// /* 00163078 0000002c */ uint64 TIMER_GetTimeMS() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_GetTimeMS);

// /* 001630a8 00000024 */ uint64 TIMER_GetTimeUS() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", TIMER_GetTimeUS);

// /* 001630d0 00000008 */ void PC_Tick() {}
void PC_Tick(void) {
}

// /* 001630d8 00000008 */ int PC_GetDCacheMisses() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", PC_GetDCacheMisses);

// /* 001630e0 00000008 */ int PC_GetICacheMisses() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/timer", PC_GetICacheMisses);
