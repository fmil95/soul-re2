#ifndef PS2_MOVIE_VIDEODEC_H
#define PS2_MOVIE_VIDEODEC_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* bss 1e9b300 */ extern int decstate;

/* Non-static functions of this unit (STABS signatures). */
int videoDecCreate(VideoDec *vd, u_char *mpegWork, int mpegWorkSize, u_long128 *data, u_long128 *tag, int tagSize, TimeStamp *pts, int n_pts);
void videoDecSetDecodeMode(VideoDec *vd, int ni, int np, int nb);
int videoDecSetStream(VideoDec *vd, int strType, int ch, sceMpegCallback cb, void *data);
void videoDecBeginPut(VideoDec *vd, u_char **ptr0, int *len0, u_char **ptr1, int *len1);
void videoDecEndPut(VideoDec *vd, int size);
void videoDecReset(VideoDec *vd);
int videoDecDelete(VideoDec *vd);
void videoDecAbort(VideoDec *vd);
u_int videoDecGetState(VideoDec *vd);
u_int videoDecSetState(VideoDec *vd, u_int state);
int videoDecPutTs(VideoDec *vd, long int pts_val, long int dts_val, u_char *start, int len);
int videoDecInputCount(VideoDec *vd);
int videoDecInputSpaceCount(VideoDec *vd);
int videoDecFlush(VideoDec *vd);
int videoDecIsFlushed(VideoDec *vd);
void videoDecStart(VideoDec *vd);
void videoDecMain(VideoDec *vd);
void videoDecStep(VideoDec *vd);
int decBs0(VideoDec *vd);
int mpegError(sceMpeg *mp, sceMpegCbDataError *cberror, void *anyData);
int mpegNodata(sceMpeg *mp, sceMpegCbData *cbdata, void *anyData);
int mpegStopDMA(sceMpeg *mp, sceMpegCbData *cbdata, void *anyData);
int mpegRestartDMA(sceMpeg *mp, sceMpegCbData *cbdata, void *anyData);
int mpegTS(sceMpeg *mp, sceMpegCbDataTimeStamp *cbts, void *anyData);

#endif /* PS2_MOVIE_VIDEODEC_H */
