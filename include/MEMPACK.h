#ifndef MEMPACK_H
#define MEMPACK_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25b408 */ extern int8 MemoryTypeNames[59][32];
/* data 25bb68 */ extern int gScratchStack;
/* bss 692940 */ extern MemTracker memTracker;
/* bss 692980 */ extern uint8 _memBlock[25165824];

/* Non-static functions of this unit (STABS signatures). */
void MEMPACK_Init(void);
uint32 MEMPACK_ReportFreeMemory(void);
uint32 MEMPACK_Size(void *address);
uint32 MEMPACK_ReportTotalMemory(void);
void*MEMPACK_MallocAlign(uint32 allocSize, uint8 memType, int alignment);
void*MEMPACK_Malloc(uint32 allocSize, uint8 memType);
void*MEMPACK_ChainMalloc(uint32 allocSize, uint8 memType, void *parent);
void MEMPACK_Free(void *address);
void MEMPACK_ReportMemory(void);
void MEMPACK_VerifyIntegrityOfMemory(void);
void MEMPACK_VerifyMemoryChain(void *address);
void*MEMPACK_Remalloc(void *oldAddress, uint32 allocSize, uint8 memType);

#endif /* MEMPACK_H */
