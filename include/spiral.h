#ifndef SPIRAL_H
#define SPIRAL_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a4444 */ extern int16 Spiral_Number;
/* data 2a4446 */ extern int16 Spiral_Degrees;
/* data 2a4448 */ extern int32 Spiral_Current;
/* data 2a444c */ extern int32 Spiral_Max;
/* data 2a4450 */ extern float RvrMeter_Current;
/* data 2a4454 */ extern float RvrMeter_Max;
/* bss 1e96860 */ extern int Spiral_Glow_X;
/* bss 1e96864 */ extern int Spiral_Glow_Y;
/* bss 1e96868 */ extern int Spiral_Glow_Size;
/* bss 1e9686c */ extern int Spiral_Mod;
/* bss 1e96870 */ extern DWVECTOR RvrMeter_Array[33];
/* bss 1e96978 */ extern DWVECTOR RvrMeter_OffsetP[33];
/* bss 1e96a80 */ extern DWVECTOR RvrMeter_OffsetM[33];
/* bss 1e96b88 */ extern DWVECTOR Spiral_Array[65];
/* bss 1e96d90 */ extern DWVECTOR Spiral_OffsetP[64];
/* bss 1e96f90 */ extern DWVECTOR Spiral_OffsetM[64];

/* Non-static functions of this unit (STABS signatures). */
void SPIRAL_DrawSpirals(void);
void SPIRAL_ProcessSpiral(int number, int current_health, int max_health);
void SPIRAL_Init(void);

#endif /* SPIRAL_H */
