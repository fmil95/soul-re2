#ifndef RELOC_H
#define RELOC_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* bss 1e94cc8 */ extern uint32 lastHighAdj[16];
/* bss 1e94d08 */ extern int usedHighAdj[16];
/* bss 1e94d48 */ extern char *data;
/* bss 1e94d4c */ extern char *curptr;

/* Non-static functions of this unit (STABS signatures). */
int MakePeHandle(void *peData, PEHANDLE *pe);
int RelocPE(void *peData, int offset);
void*GetProcAddress(void *peData, char *lpszName);
void RELOC_Relocate(void *data, int offset);
void*RELOC_GetEntry(void *data);
void*RELOC_GetDebugInfo(void *data);

#endif /* RELOC_H */
