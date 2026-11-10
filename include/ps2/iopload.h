#ifndef PS2_IOPLOAD_H
#define PS2_IOPLOAD_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* bss 1e9b740 */ extern sceSifClientData cd0;
/* bss 1e9b768 */ extern IOPFileInfo fileInfo[32];
/* bss 1e9c268 */ extern IOPStream streamList[16];
/* bss 1e9c8c0 */ extern IOPStreamStatus streamStatusStorage[16];
/* bss 1e9c9c0 */ extern IOPStreamStatus *streamStatus;

/* Non-static functions of this unit (STABS signatures). */
void FILE_Init(void);
int FILE_Open(char *fileName);
int FILE_StartStream(int handle, int offset, int size, char *name, int compressed);
void FILE_Close(int handle);
void FILE_StopStream(int stream);
int FILE_Size(int handle);
int FILE_Stream(int stream, int reqSize, void *buffer);
int FILE_StreamStatus(int stream, int diag, int wait);
void FILE_Set_ATMON_STRING(char *ip_addr);

#endif /* PS2_IOPLOAD_H */
