#ifndef SOUND_SNDAPP_H
#define SOUND_SNDAPP_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void SNDAPP_FailAbort(char *fmt);
void SNDAPP_ImportantWarning(char *fmt);
void SNDAPP_DebugPrint(char *fmt);
void*SNDAPP_Malloc(int allocSize);
void SNDAPP_Free(void *address);
void*SNDAPP_ReadFile(char *fileName);
void SNDAPP_NonBlockingFileLoad(char *fileName, SNDAPPCALLBACK retFunc, void *context);
int SNDAPP_DoesFileExist(char *fileName);
void*SNDAPP_StreamOpenFile(char *filename);
void SNDAPP_StreamCloseFile(void *file);
int SNDAPP_StreamGetSize(void *file);
void SNDAPP_StreamRequestData(void *file, int offset, int size, SNDAPPSTREAMCALLBACK callback, void *context);
void SNDAPP_StreamRequestDataToIOP(void *file, int offset, int size, SNDAPPSTREAMCALLBACK callback, void *context);
void SNDAPP_StreamFreeData(void *file, void *data);

#endif /* SOUND_SNDAPP_H */
