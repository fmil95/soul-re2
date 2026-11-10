#ifndef PS2_GAMEPAD_H
#define PS2_GAMEPAD_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25ae88 */ extern int gamePadControllerOut;
/* data 25ae8c */ extern int dualShock;
/* data 25ae90 */ extern int16 dualshock_onflag;
/* data 25ae98 */ extern int16 reinit_flag[2];
/* data 25ae9c */ extern int gpSaved;
/* data 25aea0 */ extern uint16 lastData[2];
/* data 25aea8 */ extern uint16 lastDataSave[2];
/* bss 692640 */ extern u_long128 pad_dma_buf[2][16];
/* bss 692840 */ extern char dualshock_motors[6];
/* bss 692848 */ extern char dualshock_align[6];
/* bss 692850 */ extern char dualshock_motors_saved[6];
/* bss 692858 */ extern int32 dualshock0_time;
/* bss 69285c */ extern int32 dualshock1_time;
/* bss 692860 */ extern int32 dualshock0_time_saved;
/* bss 692864 */ extern int32 dualshock1_time_saved;
/* bss 692868 */ extern int32 overrideData[2][7];
/* bss 6928a0 */ extern int32 overrideCommand[2][7];
/* data 25aeac */ extern uint32 psxData;

/* Non-static functions of this unit (STABS signatures). */
void GAMEPAD_SetupController(int pad);
void GAMEPAD_Init(void);
void GAMEPAD_HandleDualShock(void);
void PSXPAD_TranslateData(int32 *data, uint16 padData, uint16 lastData);
int GAMEPAD_GetPS2Data(int pad, uint8 *rdata);
void GAMEPAD_GetData(int32 *data[7]);
void GAMEPAD_Commands(int32 *command[7], int32 *data[7], int32 pad);
void GAMEPAD_Process(GameTracker *gameTracker);
void GAMEPAD_Shock(int motor0_speed, int motor0_time, int motor1_speed, int motor1_time);
void GAMEPAD_Shock0(int motor0_speed, int motor0_time);
void GAMEPAD_Shock1(int motor1_speed, int motor1_time);
int GAMEPAD_ControllerIsDualShock(void);
int GAMEPAD_DualShockEnabled(void);
void GAMEPAD_DisableDualShock(void);
void GAMEPAD_EnableDualShock(void);
void GAMEPAD_Shutdown(void);
void GAMEPAD_SaveControllers(void);
void GAMEPAD_RestoreControllers(void);

#endif /* PS2_GAMEPAD_H */
