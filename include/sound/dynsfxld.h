#ifndef SOUND_DYNSFXLD_H
#define SOUND_DYNSFXLD_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 207d30 */ extern int currentlyLoadingSMF;
/* data 207d34 */ extern int dumpCurrentLoad;
/* data 207d38 */ extern int nextSfxFileHandle;
/* data 207d40 */ extern AadLoadedSfxToneAttr sfxPCToneAttrTbl[1024];
/* data 20cd40 */ extern AadLoadedSfxWaveAttr sfxPCWaveAttrTbl[512];
/* bss 2bda48 */ extern AadDynSfxSnfFileHdr *firstDynSfxFile;

/* Non-static functions of this unit (STABS signatures). */
void DYNSFX_FreeDynamicSfx(int handle);
void LoadDynamicSfxSampleBlockLoadCallback(void *buffer, int length, int memType, FILEREQUEST *filereq);
void LoadDynamicSfxCancelCallback(FILEREQUEST *filereq);
void LoadDynamicSfxSampleReturnAfterBlock(void *loadedDataPtr, void *context);
void LoadDynamicSfxReturn(void *loadedDataPtr, void *context);
int DYNSFX_LoadDynamicSfx(char *fileName);
void DYNSFX_RelocateSfxMemory(void *oldAddress, int offset);

#endif /* SOUND_DYNSFXLD_H */
