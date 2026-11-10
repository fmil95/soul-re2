#ifndef PS2_IOPMEM_H
#define PS2_IOPMEM_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* bss 1e9c9d0 */ extern sceSifClientData iopmemman0;
/* bss 1e9ca00 */ extern int param;
/* bss 1e9ca10 */ extern void *address;

/* Non-static functions of this unit (STABS signatures). */
void IOPMEM_Init(void);
void*IOPMEM_Malloc(int len);
void IOPMEM_Free(void *address);

#endif /* PS2_IOPMEM_H */
