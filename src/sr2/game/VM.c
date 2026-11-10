/* Original path: C:\sr2\game\VM.C */
/* .text 0x001630E8, .data 0x0025DFE0 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 25dfe0 */ extern int32 vmRealClock;
/* data 25dfe4 */ extern int32 vmClock;

// /* 001630e8 00000020 */ void VM_Tick(/* a0 4 */ int32 time) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/VM", VM_Tick);

// /* 00163108 000004d4 */ void VM_VMObjectSetColor(/* t0 8 */ Level *level, /* t5 13 */ VMObject *vmobject) {
//     /* t4 12 */ VMInterpolated *vminterpolated;
//     /* t7 15 */ Terrain *terrain;
//     /* 0x0(sp) */ TVertex *tvertexList;
//     /* t8 24 */ TVertexRGB *trgbList;
//     /* a2 6 */ VMOffsetTable *vmOffsetTab;
//     /* t4 12 */ int numVMOffsets;
//     /* s3 19 */ int timer;
//     {
//         /* a2 6 */ VMVertexColor *vmvertex;
//         /* 0x4(sp) */ VMColorOffset *vmoffsetList;
//         /* t3 11 */ int i;
//         /* f2 40 */ float waterLevel;
//         /* s7 23 */ int waterFlag;
//         /* s1 17 */ int updateFlag;
//         /* s2 18 */ int32 scl;
//         /* v0 2 */ int mt;
//         /* s5 21 */ int morphing;
//         /* fp 30 */ int loop;
//         /* s0 16 */ MorphColor *mcList;
//         /* s4 20 */ int swap;
//         {
//             /* a3 7 */ VMColorOffset *vmoffset;
//             /* t2 10 */ TVertex *tvertex;
//             /* t6 14 */ TVertexRGB *trgb;
//             /* v1 3 */ int index;
//             /* a1 5 */ uint32 col;
//             /* v1 3 */ uint32 ocol;
//             {
//                 /* v0 2 */ MorphColor *mc;
//                 /* a0 4 */ uint32 scol;
//             }
//             {
//                 /* v0 2 */ MorphColor *mc;
//             }
//             {
//                 /* t9 25 */ uint32 temp;
//             }
//             {
//                 /* a0 4 */ int j;
//                 /* v1 3 */ uint32 **ptr;
//                 {
//                     /* v0 2 */ uint32 *sv;
//                 }
//             }
//         }
//         {
//             /* v0 2 */ TVertexRGB *tvertex;
//             /* v1 3 */ TVertexRGB *start;
//             /* v0 2 */ TVertexRGB *end;
//         }
//     }
//     {
//         /* a3 7 */ VMVertexMove *vmvertex;
//         /* s0 16 */ VMMoveOffset *vmoffsetList;
//         /* a1 5 */ int i;
//         /* v1 3 */ int32 x;
//         /* v0 2 */ int32 y;
//         /* a3 7 */ int32 z;
//         {
//             /* t0 8 */ VMMoveOffset *vmoffset;
//             /* a0 4 */ int index;
//             {
//                 /* t1 9 */ int j;
//                 /* v1 3 */ uint32 xy;
//                 /* t2 10 */ int16 **ptr;
//                 {
//                     /* v0 2 */ int16 *sv;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/VM", VM_VMObjectSetColor);

// /* 001635e0 0000017c */ void VM_ProcessVMObjectList(/* s1 17 */ Level *level, /* s4 20 */ CameraCore *cameraCore) {
//     /* s0 16 */ VMObject *vmobject;
//     /* v1 3 */ int i;
//     {
//         /* v0 2 */ VMOffsetTable *vmOffsetTab;
//         /* v0 2 */ int numVMOffsets;
//         /* a1 5 */ int timer;
//     }
//     {
//         /* 0x0(sp) */ Sphere sphere;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/VM", VM_ProcessVMObjectList);

// /* 00163760 000003e8 */ void VM_UpdateMorph(/* s6 22 */ Level *level, /* s7 23 */ int initFlg) {
//     /* s0 16 */ VMObject *vmobject;
//     /* s2 18 */ int i;
//     {
//         /* a1 5 */ VMOffsetTable *curTable;
//         {
//             /* s3 19 */ short int ratio;
//             /* t5 13 */ int j;
//             /* s1 17 */ int32 num;
//             {
//                 /* a0 4 */ int32 len;
//             }
//             {
//                 /* v1 3 */ VMMoveOffset *material;
//                 /* v0 2 */ VMMoveOffset *spectral;
//                 /* a2 6 */ VMMoveOffset *offset;
//             }
//             {
//                 /* v1 3 */ short int dr;
//                 /* t2 10 */ short int dg;
//                 /* v0 2 */ short int db;
//                 /* a0 4 */ VMColorOffset *material;
//                 /* v0 2 */ VMColorOffset *spectral;
//                 /* a2 6 */ VMColorOffset *offset;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/VM", VM_UpdateMorph);

// /* 00163b48 00000094 */ void VM_VMObjectSetTable(/* a0 4 */ Level *level, /* s0 16 */ VMObject *vmobject, /* s1 17 */ int table) {
//     /* a1 5 */ VMOffsetTable *curTable;
//     /* v1 3 */ int numVMOffsets;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/VM", VM_VMObjectSetTable);

// /* 00163be0 00000008 */ void VM_VMObjectSetMaterialTable(/* a0 4 */ Level *level, /* a1 5 */ VMObject *vmobject, /* a2 6 */ int table) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/VM", VM_VMObjectSetMaterialTable);

// /* 00163be8 00000008 */ void VM_VMObjectSetSpectralTable(/* a0 4 */ Level *level, /* a1 5 */ VMObject *vmobject, /* a2 6 */ int table) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/VM", VM_VMObjectSetSpectralTable);

// /* 00163bf0 00000040 */ VMObject* VM_FindVMOID(/* a0 4 */ Level *level, /* a1 5 */ int32 id) {
//     /* a2 6 */ int32 i;
//     /* v1 3 */ VMObject *vmObject;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/VM", VM_FindVMOID);
