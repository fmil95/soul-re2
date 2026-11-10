#ifndef LOAD3D_H
#define LOAD3D_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a4400 */ extern int nextLoad;
/* data 2a4408 */ extern char HashExtensions[8][4];
/* bss 1e94d50 */ extern LoadStatus loadStatus;
/* data 2a4428 */ extern int bigfileid;
/* bss 1e94d60 */ extern LoadInfo scheduledLoads[64];

/* Non-static functions of this unit (STABS signatures). */
int STREAM_PollLoadQueue(void);
void LOAD_NonBlockingBinaryLoad(char *fileName, void *retFunc, void *retData, void *retData2, void **retPointer, unsigned char memType);
void LOAD_NonBlockingFileLoad(char *fileName, void *retFunc, void *retData, void *retData2, void **retPointer, unsigned char memType);
void LOAD_NonBlockingPartOfFileLoad(char *fileName, int32 forceSize, void *retFunc, void *retData, void *retData2, void **retPointer, unsigned char memType);
int32*LOAD_ReadFile_FROM_HD(char *filename, unsigned char memType);
void LOAD_ReadFileToBuffer(char *filename, void *buffer);
int32*LOAD_ReadFile(char *filename, unsigned char memType);
void LOAD_OpenFileForInfo(char *filename, FileInfo *fi);
void LOAD_CloseFileFromInfo(FileInfo *fi);
int LOAD_FileSize(char *filename);
int LOAD_DoesFileExist(char *fileName);
void LOAD_InitCdLoader(char *bigFileName);
void LOAD_NonBlockingBufferedLoad(char *fileName, void *retFunc, void *retData1, void *retData2);
void LOAD_AbortFileLoad(char *fileName, void *retFunc);
void LOAD_FinishLoading(void);
void LOAD_ObjectFileName(char *name, char *object, char *extension);
void LOAD_ObjectSoundFileName(char *name, char *object, char *extension);
void LOAD_UnitFileName(char *name, char *unit, char *extension);
void LOAD_MusicFileName(char *name, char *music);
void LOAD_ImageFileName(char *name, char *image);
void LOAD_SoundStreamFileName(char *name, char *sound);

#endif /* LOAD3D_H */
