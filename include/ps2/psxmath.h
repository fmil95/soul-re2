#ifndef PS2_PSXMATH_H
#define PS2_PSXMATH_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 22a278 */ extern int _rsin_tbl[1025];
/* data 22b280 */ extern float _fsin_tbl[1025];
/* data 22c288 */ extern short int ratan_tbl[0];

/* Non-static functions of this unit (STABS signatures). */
int rcos(int a);
int rsin(int a);
float fcos(float a);
float fsin(float a);
int32 ratan2(int y, int x);

#endif /* PS2_PSXMATH_H */
