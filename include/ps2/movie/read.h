#ifndef PS2_MOVIE_READ_H
#define PS2_MOVIE_READ_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
int videoCallback(sceMpeg *mp, sceMpegCbDataStr *str, void *data);
int pcmCallback(sceMpeg *mp, sceMpegCbDataStr *str, void *data);

#endif /* PS2_MOVIE_READ_H */
