/* Original path: C:\sr2\game\ps2\vram.c */
/* .text 0x00163C30, .data 0x0025E000, .rodata 0x002B5740, .bss 0x01E94C50 */
/* Code from other files was inlined here: ps2/drawlist.h, ps2/ps2dma.h */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 25e000 */ extern int gUseMipMap;
/* data 25e004 */ extern int gMipMapK;
/* data 25e008 */ extern VramTracker textureTracker[512];
/* data 264080 */ extern uint16 clutData[512][256];
/* data 2a4080 */ extern int gCurVRAMPtr;
/* bss 1e94c50 */ extern int gFirstEmptyTexture;
/* data 2a4084 */ extern int gNumLoadedTextures;

// /* 00163c30 00000038 */ int VRAM_FindTextureInCache(/* a0 4 */ int textureID) {
//     /* v1 3 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FindTextureInCache);

// /* 00163c68 0000020c */ int VRAM_FindBehindTextureInCache(/* a0 4 */ int textureID) {
//     /* s0 16 */ int i;
//     /* v0 2 */ int realID;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FindBehindTextureInCache);

// /* 00163e78 0000011c */ uint32 VRAM_CalcMipLevel(/* a0 4 */ int cacheNum, /* f12 50 */ float closeq) {
//     /* s1 17 */ VramTracker *tracker;
//     /* f1 39 */ float lod;
//     /* a3 7 */ int lod_int;
//     /* a2 6 */ int len;
//     /* a1 5 */ int i;
//     {
//         /* s0 16 */ int kValue;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_CalcMipLevel);

// /* 00163f98 00000740 */ VramPixelPacket* VRAM_SetupTexturePacketMipMap(/* s7 23 */ int cacheNum, /* t2 10 */ VramPixelPacket *loadPacket, /* s0 16 */ TexEnvOpaque *texEnv, /* a3 7 */ int lod, /* t0 8 */ int vlen) {
//     /* s1 17 */ VramTracker *tracker;
//     /* t4 12 */ int quadwords_this_pass;
//     /* a2 6 */ int texture_width;
//     /* s3 19 */ int format;
//     /* 0x0(sp) */ int mipMap;
//     /* 0x4(sp) */ int nextdbp;
//     /* a3 7 */ int i;
//     /* 0x8(sp) */ uint64 miptbp1;
//     /* 0x10(sp) */ uint64 miptbp2;
//     /* 0x20(sp) */ int kValue;
//     /* s4 20 */ uint32 data;
//     /* t5 13 */ int newHW;
//     /* t6 14 */ int newHH;
//     /* 0x30(sp) */ uint32 clut;
//     {
//         /* t1 9 */ int tw;
//         /* a2 6 */ int hh;
//     }
//     {
//         /* t1 9 */ uint64 newTW;
//         /* t7 15 */ uint64 mipDbp;
//         /* t3 11 */ uint64 mipLevel;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_SetupTexturePacketMipMap);

// /* 001646d8 000005e0 */ VramPixelPacket* VRAM_SetupTexturePacket(/* 0x0(sp) */ int cacheNum, /* s1 17 */ VramPixelPacket *loadPacket, /* s5 21 */ TexEnvTranslucent *texEnv, /* fp 30 */ int eop, /* f12 50 */ float closeq) {
//     /* s4 20 */ VramTracker *tracker;
//     /* t1 9 */ int quadwords_this_pass;
//     /* t0 8 */ int texture_width;
//     /* a2 6 */ int vlen;
//     /* t2 10 */ int format;
//     /* s3 19 */ int format_bytes;
//     /* t5 13 */ int nextdbp;
//     /* f1 39 */ float lod;
//     /* t3 11 */ uint32 data;
//     /* s0 16 */ int tw;
//     /* s2 18 */ int th;
//     /* s7 23 */ int l2w;
//     /* t4 12 */ int l2h;
//     /* s6 22 */ int kValue;
//     {
//         /* a1 5 */ int n;
//         /* a2 6 */ int lod_int;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_SetupTexturePacket);

// /* 00164cb8 0000000c */ int VRAM_GetDBP() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_GetDBP);

// /* 00164cc8 000001e0 */ int VRAM_AllocatePreloadedTexture(/* t0 8 */ VramTextureHeader *header, /* a1 5 */ void *pixels, /* a2 6 */ void *clut) {
//     /* t1 9 */ VramTracker *tracker;
//     /* t2 10 */ int len;
//     /* a3 7 */ int j;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_AllocatePreloadedTexture);

// /* 00164ea8 00000048 */ void VRAM_LoadGenericVram(/* a0 4 */ VramLink *textureList, /* a1 5 */ uint32 *tptr) {
//     /* s0 16 */ VramLink *link;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadGenericVram);

// /* 00164ef0 000000ac */ static void TranslateOctreeSpheres(/* s2 18 */ OctreeSphere *sphere) {
//     /* s1 17 */ int i;
//     {
//         /* s0 16 */ TerrainTextureStripInfo *strip;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", TranslateOctreeSpheres);

// /* 00164fa0 000000ac */ static void TranslateOctreeSpheresBehindTex(/* s2 18 */ OctreeSphere *sphere) {
//     /* s1 17 */ int i;
//     {
//         /* s0 16 */ TerrainTextureStripInfo *strip;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", TranslateOctreeSpheresBehindTex);

// /* 00165050 00000158 */ void VRAM_TransferTerrainToVram(/* a0 4 */ void *dataPtr, /* a1 5 */ void *context, /* a2 6 */ void *bla) {
//     /* s6 22 */ VramLoader *loader;
//     /* s5 21 */ StreamUnit *streamUnit;
//     /* s1 17 */ int i;
//     /* s0 16 */ Terrain *terrain;
//     {
//         /* s4 20 */ TerrainAnimTexture *terrainAnimTexture;
//         /* v1 3 */ int numAnimTexts;
//         /* s2 18 */ AnimTextList *animTextList;
//         {
//             /* s1 17 */ int numIDs;
//             /* s0 16 */ int32 *tpageIDs;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_TransferTerrainToVram);

// /* 001651a8 000001d0 */ void VRAM_TransferObjectToVram(/* a0 4 */ void *dataPtr, /* a1 5 */ void *context, /* a2 6 */ void *ret2) {
//     /* 0x0(sp) */ VramLoader *loader;
//     /* fp 30 */ ObjectTracker *objectTracker;
//     /* s6 22 */ Object *object;
//     /* s4 20 */ Model *model;
//     /* s0 16 */ TextureMT3 *tex;
//     /* s1 17 */ TextureMT3 *texEnd;
//     /* a0 4 */ int modelNum;
//     {
//         /* s0 16 */ TextureStripInfo *textureStrip;
//         {
//             /* a0 4 */ int curText;
//             /* s2 18 */ AnimTextList *animTextList;
//             {
//                 /* s1 17 */ int i;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_TransferObjectToVram);

// /* 00165378 0000009c */ void VRAM_FreeTexture(/* s1 17 */ int entry) {
//     /* s0 16 */ VramTracker *tracker;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FreeTexture);

// /* 00165418 00000078 */ void VRAM_FreePreloadedTexture(/* t1 9 */ int entry) {
//     /* t0 8 */ VramTracker *tracker;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FreePreloadedTexture);

// /* 00165490 00000090 */ void VRAM_FreeTextureList(/* s3 19 */ char *vramName, /* s0 16 */ VramLink *texture) {
//     {
//         /* s1 17 */ int abort;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FreeTextureList);

// /* 00165520 0000001c */ void VRAM_FreeObjectVram(/* a0 4 */ char *vramName, /* a1 5 */ Object *object) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FreeObjectVram);

// /* 00165540 00000020 */ void VRAM_FreeUnitVram(/* a0 4 */ char *vramName, /* a1 5 */ StreamUnit *streamUnit) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_FreeUnitVram);

// /* 00165560 00000050 */ void VRAM_InitVramBlockCache() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_InitVramBlockCache);

// /* 001655b0 00000088 */ void VRAM_CancelCallback(/* s2 18 */ FILEREQUEST *filereq) {
//     /* s1 17 */ VramLoadCallbackInfo *cbinfo;
//     {
//         /* s0 16 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_CancelCallback);

// /* 00165638 0000001c */ void VRAM_LoadReturn(/* a0 4 */ void *dataPtr, /* a1 5 */ void *data1, /* a2 6 */ void *data2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadReturn);

// /* 00165658 000000b8 */ void VRAM_ScreenCapture(/* s0 16 */ void *dest) {
//     /* 0x0(sp) */ sceGsStoreImage gs_simage;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_ScreenCapture);

// /* 00165710 000000ec */ static void VRAM_LoadVRM(/* s5 21 */ char *name, /* s1 17 */ int type, /* s2 18 */ void *data, /* s6 22 */ void *retfunc) {
//     /* s0 16 */ VramLoader *vramLoader;
//     /* s1 17 */ VramLoadCallbackInfo *cbinfo;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadVRM);

// /* 00165800 0000007c */ void VRAM_LoadObjectVram(/* s0 16 */ ObjectTracker *objectTracker) {
//     /* a0 4 */ Object *object;
//     {
//         /* 0x0(sp) */ char fileName[64];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadObjectVram);

// /* 00165880 00000040 */ void VRAM_LoadUnitVram(/* a0 4 */ char *vramName, /* a1 5 */ StreamUnit *streamUnit) {
//     /* v0 2 */ Level *level;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadUnitVram);

// /* 001658c0 0000013c */ int VRAM_AllocateTextureNew(/* a3 7 */ VramTextureHeader *header, /* s2 18 */ int tlen) {
//     /* s0 16 */ VramTracker *tracker;
//     /* s1 17 */ int j;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_AllocateTextureNew);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/vram", D_002B5740);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/vram", D_002B5790);

// /* 00165a00 00000350 */ void VRAM_LoadCallback(/* a0 4 */ void *buffer, /* s2 18 */ int length, /* a2 6 */ int memType, /* a3 7 */ FILEREQUEST *filereq) {
//     /* s0 16 */ VramLoadCallbackInfo *cbinfo;
//     /* s1 17 */ uint8 *ptr;
//     {
//         /* s3 19 */ int size;
//         {
//             {
//                 /* v0 2 */ int c;
//                 /* a1 5 */ int i;
//                 /* a0 4 */ int mlen;
//             }
//             {
//                 /* a2 6 */ int entry;
//                 /* a3 7 */ int textureID;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_LoadCallback);

// /* 00165d50 00000348 */ void VRAM_CreateTexture(/* s3 19 */ TexEnvTranslucent *source, /* fp 30 */ TexEnvTranslucent *target) {
//     /* t1 9 */ TexEnvTranslucent *texEnv;
//     /* t8 24 */ DmaTag *tag;
//     {
//         /* t0 8 */ void *ptr;
//     }
//     {
//         /* a1 5 */ void *ptr;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/vram", VRAM_CreateTexture);
