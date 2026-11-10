#ifndef PS2_MOVIE_VOBUF_H
#define PS2_MOVIE_VOBUF_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void voBufCreate(VoBuf *f, VoData *data, VoTag *tag, int size);
void voBufDelete(VoBuf *f);
void voBufReset(VoBuf *f);
int voBufIsFull(VoBuf *f);
void voBufIncCount(VoBuf *f);
VoData*voBufGetData(VoBuf *f);
int voBufIsEmpty(VoBuf *f);
VoTag*voBufGetTag(VoBuf *f);
void voBufDecCount(VoBuf *f);

#endif /* PS2_MOVIE_VOBUF_H */
