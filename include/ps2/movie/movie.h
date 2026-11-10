#ifndef PS2_MOVIE_MOVIE_H
#define PS2_MOVIE_MOVIE_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a61e0 */ extern char *VERSION;
/* data 2a61e8 */ extern VoBuf voBuf;
/* bss 1e9aad4 */ extern VoData *voBufData;
/* bss 1e9aad8 */ extern VoTag *voBufTag;
/* bss 1e9aadc */ extern u_long128 *viBufTag;
/* bss 1e9aae0 */ extern u_char *mpegWork;
/* bss 1e9aae4 */ extern char *defStack;
/* data 2a61fc */ extern ReadBuf *readBuf;
/* bss 1e9aae8 */ extern u_char *audioBuff;
/* bss 1e9aaec */ extern u_long128 *viBufData;
/* bss 1e9aaf0 */ extern char *videoDecStack;
/* bss 1e9aaf4 */ extern TimeStamp *timeStamp;
/* data 2a6200 */ extern int videoDecTh;
/* data 2a6204 */ extern int defaultTh;
/* data 2a6208 */ extern VideoDec videoDec;
/* data 2a62c0 */ extern AudioDec audioDec;
/* data 2a631c */ extern int frd;
/* data 2a6320 */ extern u_int controller_val;
/* data 2a6330 */ extern sceGsDBuff db;

/* Non-static functions of this unit (STABS signatures). */
int ps2_play_movie(char *name);
void switchThread(void);
void ErrMessage(char *message);
void proceedAudio(void);
int MOVIE_Open(void);
int MOVIE_Play(char *name);
void MOVIE_Close(void);
int MOVIE_Loaded(void);

#endif /* PS2_MOVIE_MOVIE_H */
