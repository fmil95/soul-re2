#ifndef PS2_MOVIE_DISP_H
#define PS2_MOVIE_DISP_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a6560 */ extern int isCountVblank;
/* data 2a6564 */ extern int vblankCount;
/* data 2a6568 */ extern int isFrameEnd;
/* data 2a656c */ extern int oddeven;
/* data 2a6570 */ extern int handler_error;

/* Non-static functions of this unit (STABS signatures). */
void setImageTag(u_int *tags, void *image, int index, int image_w, int image_h);
int vblankHandler(int val);
int handler_endimage(int val);
void startDisplay(int waitEven);
void endDisplay(void);

#endif /* PS2_MOVIE_DISP_H */
