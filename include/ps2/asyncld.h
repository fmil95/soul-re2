#ifndef PS2_ASYNCLD_H
#define PS2_ASYNCLD_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 229e30 */ extern int gCompressed;
/* data 229e34 */ extern int whichStreamBuf;
/* data 229e38 */ extern int streamSize;
/* bss 2e17c0 */ extern FILEREQUEST requests[256];
/* bss 2edbc0 */ extern FILEREQUEST *freeList;
/* bss 2edbc4 */ extern FILEREQUEST *reqListCurrent;
/* bss 2edbc8 */ extern int abortflag;
/* data 229e3c */ extern int SuperSlowLoads;
/* data 229e40 */ extern int ASLD_Debug;
/* data 229e44 */ extern int curOffset;
/* bss 2edbcc */ extern FILEREQUEST *busycr;
/* bss 2edbd0 */ extern uint8 *bufPtr;
/* bss 2edbd4 */ extern uint8 *streamBuf;
/* bss 2edc00 */ extern uint8 streamDB[2][65536];
/* data 229e48 */ extern ASLDBLOCKCALLBACK blockCallback;
/* data 229e4c */ extern void *blockCallbackInfo;
/* data 229e50 */ extern ASLDCANCELCALLBACK cancelCallback;
/* data 229e54 */ extern char *gFileName;

/* Non-static functions of this unit (STABS signatures). */
void*ASLD_Alloc(int mem, int memtype);
void ASLD_Free(void *data);
int ASLD_OpenFile(char *fileName);
int ASLD_GetFileSize(int f);
void ASLD_ReadFile(int f, void *buf, int len);
void ASLD_CloseFile(int f);
void ASLD_RequestFileData(char *name, int offset, int size, ASLDCALLBACK callback, void *context, int priority, int memtype);
void ASLD_RequestFileDataFP(int f, int offset, int size, ASLDCALLBACK callback, void *context, int priority, int memtype);
void ASLD_CancelRequestFP(int f, int offset, int size, ASLDCALLBACK callback, void *context, int memtype);
void ASLD_CancelRequest(char *name, int offset, int size, ASLDCALLBACK callback, void *context, int memtype);
void*ASLD_GetFileData(char *name, int offset, int size, int memtype);
void ASLD_GetFileDataFP(int f, int offset, int size, void *buffer);
void ASLD_Init(void);
int ASLD_System(void);
void ASLD_FinishLoading(void);
int ASLD_IsBusy(void);
void ASLD_ReportStatus(void);
void ASLD_Shutdown(void);

#endif /* PS2_ASYNCLD_H */
