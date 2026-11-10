/* Original path: C:\sr2\game\razcntrl.c */
/* .text 0x001540D8, .data 0x0025BD70, .bss 0x01E92A68 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 25bd70 */ extern int32 RazielCommands[10];
/* data 25bd98 */ extern int Pending;
/* data 25bd9c */ extern int Up;
/* data 25bda0 */ extern int Down;
/* data 25bda4 */ extern float analogRate;
/* data 25bda8 */ extern int clearCount;
/* data 25bdac */ extern int32 commandHead;
/* data 25bdb0 */ extern RAZCNTRL_Key keyBuffer[10];
/* data 25be28 */ extern RAZCNTRL_StringKey string1[3];
/* data 25be58 */ extern RAZCNTRL_StringKey string2[3];
/* bss 1e92a68 */ extern float analogX;
/* bss 1e92a6c */ extern float analogY;
/* bss 1e92a70 */ extern float magnitude;
/* bss 1e92a74 */ extern int32 nothingCounter;
/* bss 1e92a78 */ extern RAZCNTRL_Command commandBuffer[16];
/* bss 1e92af8 */ extern RAZCNTRL_String doubleO;
/* bss 1e92b08 */ extern RAZCNTRL_String fatal;

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
