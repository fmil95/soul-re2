#ifndef RAZCNTRL_H
#define RAZCNTRL_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
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

/* Non-static functions of this unit (STABS signatures). */
void ProcessRazControlBuffer(int32 *command);
void ProcessRazControl(int32 *command);
int CheckRazControlDO(int State);
void RazControlSetAnalogRate(float rate);

#endif /* RAZCNTRL_H */
