/* Original path: C:\sr2\game\razcntrl.c */
/* .text 0x001540D8, .data 0x0025BD70, .bss 0x01E92A68 */

#include "razcntrl.h"

// /* 001540d8 00000368 */ void ProcessRazControlBuffer(/* s3 19 */ int32 *command) {
//     /* s1 17 */ int i;
//     /* a0 4 */ int check;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/razcntrl", ProcessRazControlBuffer);

// /* 00154440 00000040 */ static void RazControlQueueCommand(/* a0 4 */ RAZCNTRL_Key *key, /* a1 5 */ int type) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/razcntrl", RazControlQueueCommand);

// /* 00154480 000002e0 */ void ProcessRazControl(/* s0 16 */ int32 *command) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/razcntrl", ProcessRazControl);

// /* 00154760 00000044 */ int CheckRazControlDO(/* a0 4 */ int State) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/razcntrl", CheckRazControlDO);

// /* 001547a8 0000000c */ void RazControlSetAnalogRate(/* f12 50 */ float rate) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/razcntrl", RazControlSetAnalogRate);
