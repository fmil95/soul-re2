#ifndef PS2_MOVIE_READBUF_H
#define PS2_MOVIE_READBUF_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void readBufCreate(ReadBuf *b);
void readBufDelete(ReadBuf *b);
int readBufBeginPut(ReadBuf *b, u_char **ptr);
int readBufEndPut(ReadBuf *b, int size);
int readBufBeginGet(ReadBuf *b, u_char **ptr);
int readBufEndGet(ReadBuf *b, int size);

#endif /* PS2_MOVIE_READBUF_H */
