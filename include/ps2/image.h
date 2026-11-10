#ifndef PS2_IMAGE_H
#define PS2_IMAGE_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void IMAGE_FreeImage(IMAGEHANDLE hnd);
ImageInfo*IMAGE_LoadPreloadedImage(RAWHeader *rawHeader);
IMAGEHANDLE IMAGE_LoadImage(char *name);
IMAGEHANDLE IMAGE_LoadImageToBuffer(char *name, void *buffer);
void IMAGE_DrawImage(IMAGEHANDLE hnd, float xo, float yo, float wo, float ho, float zplane, unsigned int r, unsigned int g, unsigned int b);
uint16*IMAGE_GetPalette(IMAGEHANDLE hnd);
void IMAGE_RemapPaletteEntry(IMAGEHANDLE hnd, int index, uint16 newCol);

#endif /* PS2_IMAGE_H */
