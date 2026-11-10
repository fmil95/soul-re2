#ifndef PS2_MOVIE_AUDIODEC_H
#define PS2_MOVIE_AUDIODEC_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* bss 1e9ab00 */ extern char _0_buf[2048];

/* Non-static functions of this unit (STABS signatures). */
int audioDecCreate(AudioDec *ad, u_char *buff, int buffSize, int iopBuffSize);
int audioDecDelete(AudioDec *ad);
void audioDecPause(AudioDec *ad);
void audioDecResume(AudioDec *ad);
void audioDecStart(AudioDec *ad);
void audioDecReset(AudioDec *ad);
void audioDecBeginPut(AudioDec *ad, u_char **ptr0, int *len0, u_char **ptr1, int *len1);
void audioDecEndPut(AudioDec *ad, int size);
int audioDecIsPreset(AudioDec *ad);
int audioDecSendToIOP(AudioDec *ad);

#endif /* PS2_MOVIE_AUDIODEC_H */
