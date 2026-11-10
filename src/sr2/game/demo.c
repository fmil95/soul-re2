/* Original path: C:\sr2\game\demo.c */
/* .text 0x00122CF0, .data 0x002309E4, .rodata 0x002B4500, .bss 0x0030E0F0 */

#include "demo.h"

// /* 00122cf0 0000008c */ void DEMO_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/demo", DEMO_Init);

// /* 00122d80 0000008c */ void DEMO_InitPlayback(/* a0 4 */ char *demoname, /* s1 17 */ char *startingUnit) {
//     /* 0x0(sp) */ char filename[80];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/demo", DEMO_InitPlayback);

// /* 00122e10 0000015c */ void DEMO_RecordFrame(/* s0 16 */ uint32 *controlCommand) {
//     {
//         /* s0 16 */ int file;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/demo", DEMO_RecordFrame);

// /* 00122f70 000000f8 */ void DEMO_PlayFrame(/* s0 16 */ uint32 *controlCommand) {
//     /* s2 18 */ uint32 button;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/demo", DEMO_PlayFrame);

// /* 00123068 0000007c */ void DEMO_Process(/* s1 17 */ uint32 *realPad) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/demo", DEMO_Process);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/demo", D_002B4500);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/demo", D_002B4510);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/demo", D_002B4518);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/demo", D_002B4530);
