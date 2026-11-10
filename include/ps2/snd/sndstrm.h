#ifndef PS2_SND_SNDSTRM_H
#define PS2_SND_SNDSTRM_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 229e00 */ extern int g_curBufSize;
/* data 229e04 */ extern STREAMMEM *FirstStreamMem;
/* data 229e08 */ extern sceSifClientData iopsndstrm0;
/* bss 2e0f50 */ extern RPC_StreamUpload RPC_upload;
/* bss 2e0fa0 */ extern RPC_StreamUpdateData RPC_updateData;
/* bss 2e0fd0 */ extern RPC_StreamFirstData RPC_firstData;
/* bss 2e1040 */ extern STREAMMEM StreamMemBlocks[8];
/* bss 2e1780 */ extern char *iopAddr;
/* bss 2e1790 */ extern STRHEADER strHeader;

/* Non-static functions of this unit (STABS signatures). */
void SNDSTRM_Init(void);
void SNDSTRM_SetBufferSize(int newSize);
void*SNDSTRM_CreateStream(char *name);
void SNDSTRM_Play(void *str);
void SNDSTRM_SetVolume(void *str, int volleft, int volright);
void SNDSTRM_Set3DPosition(void *str, float x, float y, float z, float maxdistance);
void SndStreamPoll(void);
void SNDSTRM_Stop(void *str);
int SNDSTRM_IsCueing(void *str);
int SNDSTRM_IsPlaying(void *str);
void SNDSTRM_StopAllStreams(void);
void SNDSTRM_ReleaseStream(void *str);

#endif /* PS2_SND_SNDSTRM_H */
