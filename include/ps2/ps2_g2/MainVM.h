#ifndef PS2_PS2_G2_MAINVM_H
#define PS2_PS2_G2_MAINVM_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 202b58 */ extern uint64 pad_nop;
/* bss 1e99200 */ extern G2AppDataVM _appDataVM;

/* Non-static functions of this unit (STABS signatures). */
void PrintDefs(void);
int main(int argc, char **argv);
G2Bool MainG2_UpdateLoop(void);
void DBG_Print(char *fmt);

#endif /* PS2_PS2_G2_MAINVM_H */
