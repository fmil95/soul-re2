/* Original path: C:\sr2\game\ps2\ps2draw.c */
/* .text 0x00149EC0, .data 0x0025BD30, .rodata 0x002B5080 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, fx.h, math3d.h, mempack.h, ps2/drawlist.h, ps2/ps2dma.h */

#include "ps2/ps2draw.h"

// /* 00149ec0 000002a4 */ void DRAW_AddZSortedDrawItemFaster(/* t1 9 */ int texture, /* t6 14 */ void *data, /* a2 6 */ int32 z, /* a3 7 */ int32 attr, /* t0 8 */ void *nextTag) {
//     /* t2 10 */ ZBucket *zbucket;
//     /* v0 2 */ int zindex;
//     /* a2 6 */ int currentTexture;
//     /* t3 11 */ DmaTag *drawItemList;
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
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_AddZSortedDrawItemFaster);

// /* 0014a168 00000068 */ static void DRAW_InitFXMatrices() {
//     /* 0x0(sp) */ float avFogVector[4];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_InitFXMatrices);

// /* 0014a1d0 00000254 */ void DRAW_DrawQuads(/* a0 4 */ int flags, /* s5 21 */ int tpage, /* s1 17 */ DRAWVERTEX *verts, /* s6 22 */ int numquads) {
//     /* s0 16 */ PS2Quad *quad_t;
//     /* v1 3 */ PS2Vertex *ps2vert;
//     /* s2 18 */ unsigned int prim;
//     /* a0 4 */ int i;
//     /* a0 4 */ int j;
//     /* s7 23 */ int attr;
//     {
//         /* v1 3 */ void *ptr;
//     }
//     {
//         /* a2 6 */ int realz;
//         /* v0 2 */ int outcode;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_DrawQuads);

// /* 0014a428 00000254 */ void DRAW_DrawTriangles(/* a0 4 */ int flags, /* s5 21 */ int tpage, /* s1 17 */ DRAWVERTEX *verts, /* s6 22 */ int numtris) {
//     /* s0 16 */ PS2Triangle *tri;
//     /* v1 3 */ PS2Vertex *ps2vert;
//     /* s2 18 */ unsigned int prim;
//     /* a0 4 */ int i;
//     /* a0 4 */ int j;
//     /* s7 23 */ int attr;
//     {
//         /* v1 3 */ void *ptr;
//     }
//     {
//         /* a2 6 */ int realz;
//         /* v0 2 */ int outcode;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_DrawTriangles);

// /* 0014a680 00000068 */ static void DRAW_InitFXMatrices2D() {
//     /* 0x0(sp) */ float avFogVector[4];
//     /* rdata 2b5080 */ static float clip[4][4];
//     /* rdata 2b50c0 */ static float view[4][4];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_InitFXMatrices2D);

// /* 0014a6e8 00000288 */ void DRAW_DrawQuads2D(/* a0 4 */ int flags, /* s5 21 */ int tpage, /* s1 17 */ DRAWVERTEX *verts, /* s6 22 */ int numquads) {
//     /* s0 16 */ PS2Quad *quad_t;
//     /* v1 3 */ PS2Vertex *ps2vert;
//     /* s2 18 */ unsigned int prim;
//     /* a0 4 */ int i;
//     /* a0 4 */ int j;
//     /* s7 23 */ int attr;
//     {
//         /* v1 3 */ void *ptr;
//     }
//     {
//         /* a2 6 */ int realz;
//         /* v0 2 */ int outcode;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_DrawQuads2D);

// /* 0014a970 00000254 */ void DRAW_DrawTriangles2D(/* a0 4 */ int flags, /* s5 21 */ int tpage, /* s1 17 */ DRAWVERTEX *verts, /* s6 22 */ int numtris) {
//     /* s0 16 */ PS2Triangle *tri;
//     /* v1 3 */ PS2Vertex *ps2vert;
//     /* s2 18 */ unsigned int prim;
//     /* a0 4 */ int i;
//     /* a0 4 */ int j;
//     /* s7 23 */ int attr;
//     {
//         /* v1 3 */ void *ptr;
//     }
//     {
//         /* a2 6 */ int realz;
//         /* v0 2 */ int outcode;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_DrawTriangles2D);

// /* 0014abc8 000001f0 */ void PS2_AddTri(/* t4 12 */ int32 tex, /* t1 9 */ MYPS2VERTEX *verts, /* t6 14 */ int z, /* t5 13 */ int attr) {
//     /* a3 7 */ int j;
//     /* v0 2 */ unsigned int andoutcode;
//     /* a1 5 */ unsigned int prim;
//     /* a2 6 */ PS2Vertex *ps2vert;
//     {
//         /* t2 10 */ void *ptr;
//     }
//     {
//         /* f2 40 */ float zf;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddTri);

// /* 0014adb8 00000248 */ void PS2_AddQuad(/* s1 17 */ int32 tex, /* s0 16 */ MYPS2VERTEX *verts, /* s2 18 */ int z, /* s3 19 */ int attr) {
//     /* a3 7 */ int j;
//     /* a1 5 */ unsigned int prim;
//     /* a2 6 */ PS2Vertex *ps2vert;
//     {
//         /* t0 8 */ unsigned int out0;
//         /* a0 4 */ unsigned int out1;
//         /* a1 5 */ unsigned int out2;
//         /* a2 6 */ unsigned int out3;
//     }
//     {
//         /* t1 9 */ void *ptr;
//     }
//     {
//         /* f2 40 */ float zf;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddQuad);

// /* 0014b000 000001c8 */ void PS2_AddQuadNoTex(/* s0 16 */ MYPS2VERTEX *verts, /* s1 17 */ int z, /* s2 18 */ int attr) {
//     /* a1 5 */ int j;
//     /* a0 4 */ unsigned int prim;
//     /* a2 6 */ PS2VertexNoTex *ps2vert;
//     /* t0 8 */ unsigned int out0;
//     /* a0 4 */ unsigned int out1;
//     /* a1 5 */ unsigned int out2;
//     /* a2 6 */ unsigned int out3;
//     {
//         /* t1 9 */ void *ptr;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddQuadNoTex);

// /* 0014b1c8 0000010c */ void PS2_AddQuadNoTexHUD(/* a0 4 */ MYPS2VERTEX *verts, /* a2 6 */ int z, /* t4 12 */ int attr) {
//     /* a3 7 */ int j;
//     /* v1 3 */ unsigned int prim;
//     /* a1 5 */ PS2VertexNoTex *ps2vert;
//     {
//         /* t3 11 */ void *ptr;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddQuadNoTexHUD);

// /* 0014b2d8 00000138 */ void PS2_AddSprite(/* t5 13 */ int32 tex, /* t2 10 */ MYPS2VERTEX *vert0, /* t3 11 */ MYPS2VERTEX *vert1, /* a3 7 */ int z, /* t0 8 */ int attr) {
//     /* v0 2 */ unsigned int andoutcode;
//     {
//         /* t1 9 */ void *ptr;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddSprite);

// /* 0014b410 0000011c */ void PS2_AddLine(/* t2 10 */ MYPS2VERTEX *vert0, /* t3 11 */ MYPS2VERTEX *vert1, /* t5 13 */ int z, /* t4 12 */ int attr) {
//     /* v0 2 */ unsigned int andoutcode;
//     /* v0 2 */ unsigned int prim;
//     /* a1 5 */ PS2Line *line;
//     {
//         /* a1 5 */ void *ptr;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_AddLine);

// /* 0014b530 00000c10 */ void PS2_DrawTerrainStripNew(/* s6 22 */ Terrain *terrain, /* 0x10(sp) */ VisibleSphere *sphereArray, /* 0x14(sp) */ int numSpheres, /* s1 17 */ Matrixf *clip, /* s2 18 */ int fogFlag, /* s4 20 */ int morphValue) {
//     /* v1 3 */ int32 prim;
//     /* v0 2 */ int32 alphaPrim;
//     /* s7 23 */ int32 striptype;
//     /* 0x18(sp) */ int morphTime;
//     /* 0x1c(sp) */ int morphType;
//     /* t3 11 */ TerrainTextureStripInfo *strip;
//     /* t8 24 */ DmaTag *light;
//     /* f3 41 */ float close_q;
//     /* a1 5 */ int i;
//     /* 0x20(sp) */ int copyflag;
//     /* 0x24(sp) */ int addNumZSortedTextures;
//     /* 0x28(sp) */ int addNumTextures;
//     /* 0x2c(sp) */ int addNumItems;
//     /* 0x30(sp) */ int fogfar;
//     /* 0x34(sp) */ TextureItem *drawList;
//     /* BADREGISTER -1 */ Vector4fr clip03;
//     /* BADREGISTER -1 */ Vector4fr clip13;
//     /* s0 16 */ int qw_left;
//     /* t2 10 */ uint128 *spad_ptr;
//     /* s3 19 */ uint128 *nextMem;
//     /* 0x38(sp) */ int sendflag;
//     /* 0x0(sp) */ uint32 dma_buffers[2];
//     /* 0x3c(sp) */ int current_buffer;
//     /* 0x40(sp) */ void *mem_addr;
//     /* 0x44(sp) */ TexEnvTranslucent *zSortTexEnv;
//     /* 0x50(sp) */ uint128 fogAdditive;
//     /* 0x60(sp) */ uint128 fogBlend;
//     /* 0x70(sp) */ uint128 alphaAdditive;
//     /* 0x80(sp) */ uint128 alphaBlend;
//     {
//         /* a0 4 */ void *ret;
//     }
//     {
//         /* a0 4 */ int attr;
//     }
//     {
//         /* a3 7 */ PS2PrelitTriStrip *tristrip_sp;
//         /* t9 25 */ int numVertices;
//         /* f0 38 */ float Qmult;
//         /* t4 12 */ DmaTag *sendTag;
//         /* t5 13 */ int attr;
//         /* s1 17 */ TerrainTextureStripInfo *nextStrip;
//         /* t1 9 */ ZBucket *zbucket;
//         /* t0 8 */ int qwc;
//         {
//             /* a2 6 */ int cnt;
//             {
//                 /* 0x40(sp) */ void *dest;
//                 /* a1 5 */ unsigned int src;
//                 /* a2 6 */ int qwc;
//                 {
//                     /* v0 2 */ u_int stat;
//                 }
//             }
//         }
//         {
//             /* t3 11 */ TerrainTextureStripInfo *strip;
//             /* t9 25 */ int numVertices;
//             /* s6 22 */ Terrain *terrain;
//             {
//                 /* t1 9 */ uint16 *index;
//                 /* a3 7 */ int n;
//                 /* v1 3 */ TVertexRGB *trgb;
//                 /* a0 4 */ TVertex *tvert;
//                 /* a2 6 */ PS2TerrainXYZ *xyz;
//                 /* t0 8 */ CVECTOR *rgb;
//             }
//         }
//         {
//             /* a1 5 */ DmaTag *tmpTag;
//             /* a2 6 */ int alpha;
//             {
//                 /* a1 5 */ DmaTag *sendTag;
//                 /* t8 24 */ DmaTag *light;
//                 /* a2 6 */ int alpha;
//                 {
//                     /* a0 4 */ uint32 *vifptr;
//                     /* v0 2 */ PS2PrelitTriStrip *tristrip;
//                 }
//             }
//         }
//         {
//             /* v1 3 */ DmaTag *tmpTag;
//         }
//         {
//             /* a1 5 */ int z;
//             /* a0 4 */ int zindex;
//             /* BADREGISTER -1 */ Vector4fr invec;
//             {
//                 /* BADREGISTER -1 */ Vector4fr tempy;
//                 /* BADREGISTER -1 */ Vector4fr tempz;
//             }
//         }
//         {
//             /* f1 39 */ float st_close_q;
//             /* t0 8 */ DmaTag *drawItemList;
//             /* a2 6 */ int texture;
//             /* a1 5 */ TextureItem *texitem;
//             /* a1 5 */ int currentTexture;
//             /* a3 7 */ DmaTag *nextTag;
//             {
//                 /* t3 11 */ int flush;
//             }
//         }
//         {
//             /* a0 4 */ TextureItem *texitem;
//             /* f1 39 */ float st_close_q;
//             /* a1 5 */ DmaTag *nextTag;
//             /* v0 2 */ int texture;
//         }
//     }
//     {
//         /* 0x40(sp) */ void *dest;
//         /* a3 7 */ unsigned int src;
//         {
//             /* v0 2 */ u_int stat;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_DrawTerrainStripNew);

// /* 0014c140 00000100 */ void PS2_SwapVertexColors(/* t2 10 */ Object *object) {
//     /* a1 5 */ int i;
//     {
//         /* v1 3 */ Model *model;
//         /* a3 7 */ uint32 *colorList;
//         /* v1 3 */ TextureStripInfo *textureStrip;
//         {
//             /* a2 6 */ uint32 *stripColors;
//             /* a0 4 */ uint16 *indices;
//             /* a1 5 */ int nv;
//             /* a0 4 */ PS2_ModelStripData *stripData;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_SwapVertexColors);

// /* 0014c240 00000008 */ void PS2_DrawZSortObjectStrip(/* a0 4 */ TextureStripInfo *textureStrip, /* f12 50 */ float close_q, /* a1 5 */ int fadeValue, /* a2 6 */ Matrixf *matrices, /* a3 7 */ Matrixf *cm) {}
void PS2_DrawZSortObjectStrip(TextureStripInfo *textureStrip, float close_q, int fadeValue, Matrixf *matrices, Matrixf *cm) {
}

// /* 0014c248 000001fc */ void PS2_Split_AddTri(/* s3 19 */ int32 tex, /* s0 16 */ MYPS2VERTEX *verts, /* s4 20 */ int z, /* s5 21 */ int attr, /* t0 8 */ int clipflag) {
//     /* t2 10 */ int j;
//     /* s1 17 */ unsigned int prim;
//     /* a3 7 */ PS2Vertex *ps2vert;
//     {
//         /* v0 2 */ unsigned int andoutcode;
//     }
//     {
//         /* t1 9 */ void *ptr;
//     }
//     {
//         /* t3 11 */ void *ptr;
//     }
//     {
//         /* f2 40 */ float zf;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_Split_AddTri);

// /* 0014c448 00000214 */ void PS2_Split_AddQuad(/* s3 19 */ int32 tex, /* s0 16 */ MYPS2VERTEX *verts, /* s5 21 */ int z, /* s6 22 */ int attr, /* t0 8 */ int clipflag) {
//     /* t2 10 */ int j;
//     /* s1 17 */ unsigned int prim;
//     /* a3 7 */ PS2Vertex *ps2vert;
//     {
//         /* v1 3 */ unsigned int out0;
//         /* a0 4 */ unsigned int out1;
//         /* a1 5 */ unsigned int out2;
//         /* a2 6 */ unsigned int out3;
//     }
//     {
//         /* t1 9 */ void *ptr;
//     }
//     {
//         /* t3 11 */ void *ptr;
//     }
//     {
//         /* f2 40 */ float zf;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_Split_AddQuad);

// /* 0014c660 000001c8 */ void Strip_Split_Intpl(/* a0 4 */ MYPS2VERTEX *newverts, /* a1 5 */ SVector *verts, /* a2 6 */ MYPS2VERTEX *oldverts, /* a3 7 */ int32 *outcodes, /* t0 8 */ int a, /* t1 9 */ int b, /* t2 10 */ int c, /* t3 11 */ int clipflag) {
//     /* f3 41 */ float intpl;
//     /* a0 4 */ int intpl12;
//     /* 0x0(sp) */ VECTOR vec1;
//     /* 0x10(sp) */ VECTOR vec2;
//     /* 0x20(sp) */ VECTOR outvec;
//     {
//         /* f3 41 */ float p1;
//         {
//             /* BADREGISTER -1 */ Vector4fr v1r;
//             /* BADREGISTER -1 */ Vector4fr v0r;
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* v1 3 */ uint32 col1;
//         /* a0 4 */ int32 p1;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", Strip_Split_Intpl);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2draw", clip_258);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/ps2/ps2draw", view_259);

// /* 0014c828 00000a04 */ void PS2_DrawSplitStrip(/* a0 4 */ float *pcTransform[4], /* s3 19 */ TextureStripInfo *textureStrip, /* 0x190(sp) */ Instance *instance, /* 0x194(sp) */ PVertex *pvertexList, /* f12 50 */ float close_q, /* 0x198(sp) */ int fadeValue, /* 0x19c(sp) */ Matrixf *matrices, /* 0x1a0(sp) */ Matrixf *cm, /* 0x1a4(sp) */ Model *model, /* 0x270(sp) */ Matrixf *newMatrices, /* 0x278(sp) */ int clipflag) {
//     /* s5 21 */ int clipflag;
//     /* s7 23 */ int numVertices;
//     /* s6 22 */ PS2ModelXYZ *xyz;
//     /* 0x1a8(sp) */ int16 *normal;
//     /* 0x1ac(sp) */ int16 *st;
//     /* 0x0(sp) */ MYPS2VERTEX verts[3];
//     /* s2 18 */ int z0;
//     /* 0x1b0(sp) */ int z1;
//     /* 0x1b4(sp) */ int z2;
//     /* 0x1b8(sp) */ int lastoffset;
//     /* 0x1bc(sp) */ int lastoffsetM;
//     /* v0 2 */ Matrixf *mat;
//     /* 0x60(sp) */ Matrixf pcScreen;
//     /* fp 30 */ uint16 *indices;
//     /* 0xa0(sp) */ int32 outcodes[3];
//     /* 0xb0(sp) */ SVector realVerts[3];
//     /* t6 14 */ PS2_ModelStripData *stripData;
//     {
//         /* a0 4 */ float *m2[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp23;
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp13;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* 0xd0(sp) */ Vector4f normalf;
//         /* 0xe0(sp) */ Vector4f basecolor;
//         /* 0xf0(sp) */ int32 color[4];
//         /* s0 16 */ int flag;
//         /* s1 17 */ SVector *pvertex;
//         /* a0 4 */ CVECTOR *cv;
//         {
//             /* v0 2 */ uint32 *cm;
//             /* a0 4 */ uint32 *scolorlist;
//             /* a0 4 */ uint32 *cs;
//             /* 0x100(sp) */ CVECTOR final_color;
//             {
//                 /* a1 5 */ uint32 col1;
//             }
//         }
//         {
//             /* v1 3 */ uint32 *colorlist;
//         }
//         {
//             /* 0x110(sp) */ MYPS2VERTEX newverts[4];
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_DrawSplitStrip);

// /* 0014d230 00000990 */ void DRAW_DrawRingPoints(/* a0 4 */ Model *model, /* fp 30 */ VertexPool *vertexPool, /* s6 22 */ float *pcTransform[4], /* 0x100(sp) */ int32 color, /* 0x104(sp) */ int32 ring_type, /* 0x108(sp) */ int32 amount) {
//     /* s4 20 */ MFace *mface;
//     /* 0x10c(sp) */ MFace *endMFace;
//     /* 0x0(sp) */ SVector *pvertex[3];
//     /* 0x10(sp) */ SVector newVertex[3];
//     /* 0x30(sp) */ MYPS2VERTEX verts[4];
//     /* v1 3 */ long int outcode;
//     /* s5 21 */ int first;
//     /* s7 23 */ int second;
//     /* 0xb0(sp) */ SVector acc;
//     {
//         /* s1 17 */ uint32 newSeed;
//     }
//     {
//         /* 0xc0(sp) */ Vector4f fp_hack;
//         /* 0xd0(sp) */ Vector4f fp_hack2;
//         /* 0xe0(sp) */ SVector outpoint;
//         /* 0xf0(sp) */ SVector vel;
//         {
//             /* s6 22 */ float *matrix[4];
//         }
//         {
//             /* s1 17 */ uint32 newSeed;
//         }
//         {
//             /* s0 16 */ uint32 newSeed;
//         }
//         {
//             /* t7 15 */ uint32 newSeed;
//         }
//         {
//             /* v0 2 */ uint32 newSeed;
//         }
//         {
//             /* v1 3 */ uint32 newSeed;
//         }
//         {
//             /* t6 14 */ uint32 newSeed;
//         }
//     }
//     {
//         /* s0 16 */ SVector *p1;
//         /* s1 17 */ SVector *p2;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", DRAW_DrawRingPoints);

// /* 0014dbc0 0000160c */ void PS2_DrawInstance(/* 0x15c(sp) */ Instance *instance, /* s5 21 */ int32 outcode, /* f21 59 */ float close_q, /* f13 51 */ float inst_z, /* 0x160(sp) */ int fadeValue, /* s1 17 */ int reflectFlag) {
//     /* s2 18 */ int numSegments;
//     /* s1 17 */ int i;
//     /* 0x164(sp) */ Matrixf *newMatrices;
//     /* a0 4 */ Object *object;
//     /* 0x168(sp) */ Model *model;
//     /* s3 19 */ Matrixf *matrices;
//     /* 0x10(sp) */ Matrixf lm;
//     /* 0x50(sp) */ Matrixf wsTransform;
//     /* 0x90(sp) */ Matrixf pcTransform;
//     /* 0xd0(sp) */ Matrixf clipTransform;
//     /* s0 16 */ Vector4fr *segMatrixPtr;
//     /* 0x150(sp) */ int32 ra;
//     /* 0x154(sp) */ int32 ga;
//     /* 0x158(sp) */ int32 ba;
//     /* 0x16c(sp) */ uint32 noDrawGroups;
//     /* 0x170(sp) */ int32 draw_halve_plane;
//     /* 0x174(sp) */ int buildColors;
//     /* 0x178(sp) */ int instancetype;
//     /* s3 19 */ TextureStripInfo *textureStrip;
//     /* 0x17c(sp) */ int addNumTextures;
//     /* 0x180(sp) */ int addNumItems;
//     /* 0x184(sp) */ int addNumZSortedTextures;
//     /* 0x188(sp) */ TextureItem *drawList;
//     /* 0x18c(sp) */ int fogfar;
//     /* 0x190(sp) */ TexEnvTranslucent *zSortTexEnv;
//     /* 0x1a0(sp) */ uint128 fogAdditive;
//     /* 0x1b0(sp) */ uint128 fogBlend;
//     /* 0x1c0(sp) */ uint128 alphaAdditive;
//     /* 0x1d0(sp) */ uint128 alphaBlend;
//     /* 0x110(sp) */ Matrixf wct;
//     /* BADREGISTER -1 */ Vector4fr modelScale;
//     {
//         /* a2 6 */ int lodDist1;
//         /* v1 3 */ int lodDist2;
//     }
//     {
//         /* s0 16 */ void *ptr;
//     }
//     {
//         /* 0x1e0(sp) */ void *ptr;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr reflect;
//         /* f0 38 */ float zreflect;
//         {
//             /* BADREGISTER -1 */ Vector4fr tempz;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr result;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr tempz;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr temp23;
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* 0x200(sp) */ Vector4fr temp20;
//             /* BADREGISTER -1 */ Vector4fr temp13;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//         {
//             /* BADREGISTER -1 */ Vector4fr temp13;
//             /* BADREGISTER -1 */ Vector4fr temp12;
//             /* BADREGISTER -1 */ Vector4fr temp11;
//             /* BADREGISTER -1 */ Vector4fr temp10;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp23;
//         /* BADREGISTER -1 */ Vector4fr temp22;
//         /* BADREGISTER -1 */ Vector4fr temp21;
//         /* BADREGISTER -1 */ Vector4fr temp20;
//         /* BADREGISTER -1 */ Vector4fr temp13;
//         /* BADREGISTER -1 */ Vector4fr temp12;
//         /* BADREGISTER -1 */ Vector4fr temp11;
//         /* BADREGISTER -1 */ Vector4fr temp10;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp13;
//         /* BADREGISTER -1 */ Vector4fr temp12;
//         /* BADREGISTER -1 */ Vector4fr temp11;
//         /* BADREGISTER -1 */ Vector4fr temp10;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr segMatrix0;
//         /* BADREGISTER -1 */ Vector4fr segMatrix1;
//         /* BADREGISTER -1 */ Vector4fr segMatrix2;
//         /* BADREGISTER -1 */ Vector4fr segMatrix3;
//         /* 0x210(sp) */ Vector4fr lsm0;
//         /* 0x220(sp) */ Vector4fr lsm1;
//         /* 0x230(sp) */ Vector4fr lsm2;
//         {
//             /* a1 5 */ void *ptr;
//         }
//     }
//     {
//         /* s5 21 */ int attr;
//         {
//             /* s0 16 */ int size;
//             /* t2 10 */ int vuaddr;
//             /* t0 8 */ DmaTag *tag;
//             /* a0 4 */ uint8 *mat;
//             /* f20 58 */ float Qmult;
//             /* s6 22 */ int numMatrices;
//             /* s2 18 */ int numVertices;
//             /* 0x240(sp) */ int qwc;
//             /* s4 20 */ int striptype;
//             /* fp 30 */ PS2_ModelStripData *stripData;
//             /* a2 6 */ int tpageid;
//             /* 0x250(sp) */ uint32 color_mem;
//             /* s7 23 */ ZBucket *zbucket;
//             {
//                 /* v0 2 */ uint16 *indices;
//                 /* a0 4 */ int nv;
//                 /* a2 6 */ int flag;
//                 /* a3 7 */ PVertex *pvertexList;
//                 /* v0 2 */ SVector *pvertex;
//                 {
//                     /* v0 2 */ int clipflag;
//                 }
//             }
//             {
//                 /* s0 16 */ int qwc;
//                 /* t0 8 */ int nv;
//                 /* t5 13 */ int alpha;
//                 {
//                     /* s0 16 */ int size_qw;
//                     {
//                         /* s4 20 */ void *ptr;
//                     }
//                 }
//                 {
//                     /* a2 6 */ void *ptr;
//                 }
//                 {
//                     /* v0 2 */ uint16 *indices;
//                     {
//                         /* a2 6 */ CVECTOR *cv;
//                     }
//                 }
//                 {
//                     /* v1 3 */ uint16 *indices;
//                     {
//                         /* s0 16 */ uint32 *scolorlist;
//                         {
//                             /* v0 2 */ uint32 ca;
//                             /* v0 2 */ uint32 *cm;
//                             /* a0 4 */ uint32 *cs;
//                             {
//                                 /* a3 7 */ uint32 col0;
//                                 /* v1 3 */ uint32 col1;
//                             }
//                         }
//                     }
//                     {
//                         /* t1 9 */ uint32 *colorlist;
//                         {
//                             /* v0 2 */ uint32 ca;
//                             /* v0 2 */ uint32 *cv;
//                         }
//                     }
//                 }
//                 {
//                     /* v1 3 */ uint32 color;
//                 }
//             }
//             {
//                 /* s0 16 */ int size_qw;
//                 {
//                     /* s1 17 */ void *ptr;
//                 }
//             }
//             {
//                 /* 0x260(sp) */ void *ptr;
//             }
//             {
//                 /* s0 16 */ PS2ModelXYZ *xyz;
//                 /* v0 2 */ Matrixf *mat;
//                 /* a0 4 */ int z;
//                 /* v1 3 */ int zindex;
//                 /* BADREGISTER -1 */ Vector4fr invec;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr tempy;
//                     /* BADREGISTER -1 */ Vector4fr tempz;
//                 }
//                 {
//                     /* BADREGISTER -1 */ Vector4fr v1;
//                     {
//                         /* BADREGISTER -1 */ Vector4fr temp;
//                     }
//                 }
//             }
//             {
//                 /* v0 2 */ int c_qwc;
//             }
//             {
//                 /* s2 18 */ DmaTag *drawItemList;
//                 /* s1 17 */ int texture;
//                 /* a1 5 */ TextureItem *texitem;
//                 /* s0 16 */ int currentTexture;
//                 {
//                     /* s3 19 */ int flush;
//                     /* a2 6 */ uint128 *spad_ptr;
//                     {
//                         /* a2 6 */ void *ptr;
//                     }
//                     {
//                         /* a3 7 */ void *ptr;
//                     }
//                     {
//                         /* a3 7 */ void *ptr;
//                     }
//                 }
//             }
//             {
//                 /* a2 6 */ TextureItem *texitem;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/ps2/ps2draw", PS2_DrawInstance);
