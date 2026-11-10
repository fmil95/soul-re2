/* Original path: C:\sr2\game\ps2\stencilbuffer.c */
/* .text 0x001D8000, .data 0x002A6710 */
/* Code from other files was inlined here: ps2/drawlist.h, ps2/ps2dma.h */

#include "ps2/stencilbuffer.h"

// /* 001d8000 00000624 */ void StencilBuffer_insert(/* 0x0(sp) */ StencilBufferPrim **pptStencilBufferPrim, /* 0x4(sp) */ int64 ***pppnPath3Ptrs, /* 0x8(sp) */ int32 nVRam, /* s1 17 */ int64 *pnShadowPolys) {
//     /* v0 2 */ int64 *pnPath2List;
//     /* 0xc(sp) */ int64 **ppnPath3Ptrs;
//     /* t8 24 */ int64 *pnPoly;
//     /* a2 6 */ int64 iX;
//     /* t9 25 */ int64 iY;
//     /* s5 21 */ int32 iPage;
//     /* s4 20 */ StencilBufferPrim *ptSB;
//     {
//         /* 0x10(sp) */ void *ptr;
//     }
//     {
//         /* s7 23 */ void *ptr;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/stencilbuffer", StencilBuffer_insert);

// /* 001d8628 00000074 */ void StencilBuffer_setHalfOffset() {
//     {
//         /* a0 4 */ uint32 *ptr;
//         /* a1 5 */ uint32 *ptr2;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/stencilbuffer", StencilBuffer_setHalfOffset);
