#ifndef PS2_STENCILBUFFER_H
#define PS2_STENCILBUFFER_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a6710 */ extern uint32 *pnHalfOffset;
/* data 2a6714 */ extern uint32 *pnHalfOffset2;

/* Non-static functions of this unit (STABS signatures). */
void StencilBuffer_insert(StencilBufferPrim **pptStencilBufferPrim, int64 ***pppnPath3Ptrs, int32 nVRam, int64 *pnShadowPolys);
void StencilBuffer_setHalfOffset(void);

#endif /* PS2_STENCILBUFFER_H */
