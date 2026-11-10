/* Original path: C:\sr2\game\ps2\gamepad.c */
/* .text 0x00137880, .data 0x0025AE88, .rodata 0x002B48B0, .bss 0x00692600 */

#include "ps2/gamepad.h"

// /* 00137880 00000210 */ void GAMEPAD_SetupController(/* s1 17 */ int pad) {
//     /* s0 16 */ int ret;
//     /* s2 18 */ int count;
//     /* a3 7 */ int i;
//     /* v1 3 */ int id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_SetupController);

// /* 00137a90 00000034 */ void GAMEPAD_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Init);

// /* 00137ac8 00000074 */ void GAMEPAD_HandleDualShock() {
//     /* a1 5 */ int decrement_amount;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_HandleDualShock);

// /* 00137b40 0000010c */ void PSXPAD_TranslateData(/* a0 4 */ int32 *data, /* a1 5 */ uint16 padData, /* a2 6 */ uint16 lastData) {
//     /* t3 11 */ int i;
//     /* 0x0(sp) */ JoypadMapping table[16];
//     {
//         /* v0 2 */ uint16 padButton;
//         /* a3 7 */ uint16 logicalButton;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", PSXPAD_TranslateData);

// /* 00137c50 000000f0 */ int GAMEPAD_GetPS2Data(/* s0 16 */ int pad, /* s2 18 */ uint8 *rdata) {
//     /* v1 3 */ int state;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_GetPS2Data);

// /* 00137d40 000001dc */ void GAMEPAD_GetData(/* s1 17 */ int32 *data[7]) {
//     /* 0x0(sp) */ uint8 rdata[32];
//     {
//         /* a3 7 */ int analogue_x;
//         /* a2 6 */ int analogue_y;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_GetData);

// /* 00137f20 000002bc */ void GAMEPAD_Commands(/* t4 12 */ int32 *command[7], /* t3 11 */ int32 *data[7], /* t2 10 */ int32 pad) {
//     /* t0 8 */ int32 analogX;
//     /* t1 9 */ int32 analogY;
//     /* bss 692600 */ static short int lastPad[2];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Commands);

// /* 001381e0 00000058 */ void GAMEPAD_Process(/* s0 16 */ GameTracker *gameTracker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Process);

// /* 00138238 00000060 */ void GAMEPAD_Shock(/* t2 10 */ int motor0_speed, /* a0 4 */ int motor0_time, /* t1 9 */ int motor1_speed, /* t0 8 */ int motor1_time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Shock);

// /* 00138298 00000040 */ void GAMEPAD_Shock0(/* a0 4 */ int motor0_speed, /* a1 5 */ int motor0_time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Shock0);

// /* 001382d8 00000040 */ void GAMEPAD_Shock1(/* a0 4 */ int motor1_speed, /* a1 5 */ int motor1_time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_Shock1);

// /* 00138318 0000000c */ int GAMEPAD_ControllerIsDualShock() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_ControllerIsDualShock);

// /* 00138328 0000000c */ int GAMEPAD_DualShockEnabled() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_DualShockEnabled);

// /* 00138338 0000004c */ void GAMEPAD_DisableDualShock() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_DisableDualShock);

// /* 00138388 00000010 */ void GAMEPAD_EnableDualShock() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_EnableDualShock);

// /* 00138398 00000008 */ void GAMEPAD_Shutdown() {}
void GAMEPAD_Shutdown(void) {
}

// /* 001383a0 000001b8 */ void GAMEPAD_SaveControllers() {
//     /* v1 3 */ int n;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_SaveControllers);

// /* 00138558 000001ac */ void GAMEPAD_RestoreControllers() {
//     /* a0 4 */ int n;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/gamepad", GAMEPAD_RestoreControllers);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/gamepad", D_002B48B0);
