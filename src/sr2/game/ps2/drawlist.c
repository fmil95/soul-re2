/* Original path: C:\sr2\game\ps2\drawlist.c */
/* .text 0x00123FE0, .data 0x00236A40, .bss 0x0030E100 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, ps2/drawlist.h, ps2/ps2dma.h, timer.h */

#include "ps2/drawlist.h"

// /* 00123fe0 00000038 */ int DRAWLIST_GetUsedMem() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_GetUsedMem);

// /* 00124018 00000024 */ void* DRAWLIST_GetTempBuffer(/* a0 4 */ int size) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_GetTempBuffer);

// /* 00124040 00000058 */ void DRAWLIST_ClearList() {
//     /* data 236a4c */ static int frame;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_ClearList);

// /* 00124098 000000fc */ void DRAWLIST_AddDrawItem(/* a0 4 */ int texture, /* f12 50 */ float close_q, /* t1 9 */ void *data, /* t0 8 */ void *nextPtr) {
//     /* a3 7 */ TextureItem *bucket;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_AddDrawItem);

// /* 00124198 00000328 */ void DRAWLIST_AddZSortedDrawItem(/* t1 9 */ int texture, /* t6 14 */ void *data, /* a2 6 */ int32 z, /* f12 50 */ float close_q, /* a3 7 */ int32 attr, /* t0 8 */ void *nextTag) {
//     /* t3 11 */ ZBucket *zbucket;
//     /* v1 3 */ int zindex;
//     /* a2 6 */ int currentTexture;
//     /* t2 10 */ DmaTag *drawItemList;
//     /* t0 8 */ uint128 *mem_ptr;
//     {
//         /* a0 4 */ TextureItem *texitem;
//     }
//     {
//         /* t5 13 */ int flush;
//         {
//             /* a1 5 */ void *ptr;
//         }
//         {
//             /* a1 5 */ void *ptr;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_AddZSortedDrawItem);

// /* 001244c0 0000040c */ void DRAWLIST_AddZSortedDrawItemSpad(/* s1 17 */ int texture, /* fp 30 */ void *data, /* a2 6 */ int32 z, /* f12 50 */ float close_q, /* a3 7 */ int32 attr, /* t0 8 */ void *nextTag) {
//     /* s3 19 */ ZBucket *zbucket;
//     /* v1 3 */ int zindex;
//     /* s0 16 */ int currentTexture;
//     /* s5 21 */ DmaTag *drawItemList;
//     /* a2 6 */ uint128 *mem_ptr;
//     {
//         /* a0 4 */ TextureItem *texitem;
//     }
//     {
//         /* s7 23 */ int flush;
//         {
//             /* a2 6 */ void *ptr;
//         }
//         {
//             /* a3 7 */ void *ptr;
//         }
//         {
//             /* a3 7 */ void *ptr;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_AddZSortedDrawItemSpad);

// /* 001248d0 00000078 */ int DRAWLIST_NextTexture(/* a0 4 */ int dummy) {
//     {
//         /* v0 2 */ int32 counter;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_NextTexture);

// /* 00124948 000000f4 */ int DRAWLIST_VBL(/* a0 4 */ int dummy) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_VBL);

// /* 00124a40 00000024 */ void DRAWLIST_WaitVBL() {
//     /* v1 3 */ int32 current;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_WaitVBL);

// /* 00124a68 000000b4 */ void DRAWLIST_DrawList() {
//     {
//         /* v0 2 */ u_int stat;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_DrawList);

// /* 00124b20 00000034 */ void DRAWLIST_InitTexEnvMem() {
//     {
//         /* v0 2 */ uint32 mem;
//     }
//     {
//         /* v1 3 */ uint32 mem;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_InitTexEnvMem);

// /* 00124b58 00000dcc */ void DRAWLIST_BuildList() {
//     /* s1 17 */ TextureItem *bucket;
//     /* s1 17 */ ZBucket *zbucket;
//     /* s2 18 */ int textureID;
//     /* s3 19 */ int z;
//     /* s0 16 */ DmaTag *tag;
//     /* 0x0(sp) */ VramPixelPacket *pdat;
//     /* 0x8(sp) */ int update_zbuffer;
//     /* 0x4(sp) */ VramPixelPacket **textureTag;
//     /* 0xc(sp) */ VramPixelPacket **firstTextureTagUC;
//     /* fp 30 */ int addDebugDMASize;
//     /* 0x10(sp) */ int newtex;
//     /* 0x14(sp) */ int curlen;
//     /* 0x18(sp) */ int curqwc;
//     /* 0x1c(sp) */ int prevqwc;
//     {
//         /* t1 9 */ uint32 mem;
//     }
//     {
//         /* v0 2 */ uint32 mem;
//     }
//     {
//         /* v0 2 */ void *ptr;
//     }
//     {
//         {
//             /* s0 16 */ float *m3[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp23;
//                 /* BADREGISTER -1 */ Vector4fr temp22;
//                 /* BADREGISTER -1 */ Vector4fr temp21;
//                 /* BADREGISTER -1 */ Vector4fr temp20;
//                 /* BADREGISTER -1 */ Vector4fr temp13;
//                 /* BADREGISTER -1 */ Vector4fr temp12;
//                 /* BADREGISTER -1 */ Vector4fr temp11;
//                 /* BADREGISTER -1 */ Vector4fr temp10;
//             }
//         }
//         {
//             /* s0 16 */ float *m3[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp23;
//                 /* BADREGISTER -1 */ Vector4fr temp22;
//                 /* BADREGISTER -1 */ Vector4fr temp21;
//                 /* BADREGISTER -1 */ Vector4fr temp20;
//                 /* BADREGISTER -1 */ Vector4fr temp13;
//                 /* BADREGISTER -1 */ Vector4fr temp12;
//                 /* BADREGISTER -1 */ Vector4fr temp11;
//                 /* BADREGISTER -1 */ Vector4fr temp10;
//             }
//         }
//     }
//     {
//         /* v0 2 */ void *item;
//     }
//     {
//         /* 0x20(sp) */ void *item;
//         {
//             {
//                 /* s3 19 */ int lod;
//                 /* s4 20 */ int vlen;
//                 {
//                     /* a1 5 */ void *ptr;
//                 }
//                 {
//                     /* a1 5 */ void *ptr;
//                 }
//                 {
//                     /* t1 9 */ void *ptr;
//                 }
//             }
//             {
//                 /* a3 7 */ void *ptr;
//             }
//         }
//     }
//     {
//         /* s3 19 */ int i;
//         {
//             /* a1 5 */ void *ptr;
//         }
//         {
//             /* s5 21 */ TexEnvTranslucent *zSortTexEnv;
//         }
//         {
//             /* a3 7 */ int qw_left;
//             /* 0x30(sp) */ TexEnvTranslucent *zSortTexEnv;
//             /* s2 18 */ int lastTexture;
//             /* a1 5 */ DmaTag *ltag;
//             /* 0x40(sp) */ uint128 fogAdditive;
//             /* s6 22 */ uint128 fogBlend;
//             /* s5 21 */ uint128 alphaAdditive;
//             /* s4 20 */ uint128 alphaBlend;
//             {
//                 /* s0 16 */ DmaTag *item;
//                 /* a2 6 */ int currentTexture;
//                 {
//                     /* v0 2 */ int cnt;
//                 }
//             }
//         }
//     }
//     {
//         /* a1 5 */ void *ptr;
//     }
//     {
//         /* v1 3 */ uint32 mem;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_BuildList);

// /* 00125928 00000088 */ void DRAWLIST_Disable() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_Disable);

// /* 001259b0 000000f8 */ void DRAWLIST_Enable() {
//     /* v0 2 */ sceDmaChan *p1;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_Enable);

// /* 00125aa8 00000020 */ void DRAWLIST_AlignMem64() {
//     /* a0 4 */ uint32 mem;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/drawlist", DRAWLIST_AlignMem64);
