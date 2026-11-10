/* Original path: C:\sr2\game\normalmask.c */
/* .text 0x0010E840, .data 0x0022CB20, .rodata 0x002B2C10, .bss 0x0030DE30 */

#include "normalmask.h"

// /* 0010e840 00000080 */ static void NORMALMASK_Normalize(/* s0 16 */ Vector3f *v) {
//     /* f0 38 */ float len;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/normalmask", NORMALMASK_Normalize);

// /* 0010e8c0 0000006c */ static void NORMALMASK_Average(/* v0 2 */ Vector3f *dest, /* a1 5 */ Vector3f *a, /* a2 6 */ Vector3f *b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/normalmask", NORMALMASK_Average);

// /* 0010e930 00000030 */ static float NORMALMASK_DotProduct(/* a0 4 */ Vector3f *a, /* a1 5 */ Vector3f *b) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/normalmask", NORMALMASK_DotProduct);

// /* 0010e960 0000002c */ static void NORMALMASK_CalcSubClusterNormal(/* a0 4 */ int clusterNr, /* a1 5 */ int index1, /* a2 6 */ int index2, /* a3 7 */ int index3) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/normalmask", NORMALMASK_CalcSubClusterNormal);

// /* 0010e990 0000028c */ void NORMALMASK_InitSubClusters() {
//     /* s0 16 */ Vector3f *v;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/normalmask", NORMALMASK_InitSubClusters);

// /* 0010ec20 00000090 */ static int NORMALMASK_CalcClusterVisible(/* a0 4 */ Vector3f *clusterVector1, /* s1 17 */ Vector3f *clusterVector2, /* s2 18 */ Vector3f *clusterVector3, /* a3 7 */ Vector3f *pos, /* s0 16 */ Vector3f *direction, /* f20 58 */ float fov) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/normalmask", NORMALMASK_CalcClusterVisible);

// /* 0010ecb0 00000030 */ static void NORMALMASK_MarkCluster(/* a0 4 */ int clusterNr) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/normalmask", NORMALMASK_MarkCluster);

// /* 0010ece0 00000460 */ void NORMALMASK_CalcVisibleMask() {
//     /* s5 21 */ int i;
//     /* s4 20 */ Vector3f *pos;
//     /* s3 19 */ Vector3f *dir;
//     /* 0x0(sp) */ Vector4f dir4f;
//     /* 0x10(sp) */ Vector4f pos4f;
//     /* f20 58 */ float fov;
//     {
//         /* 0x20(sp) */ Vector3f clusterVector1;
//         /* 0x30(sp) */ Vector3f clusterVector2;
//         /* 0x40(sp) */ Vector3f clusterVector3;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/normalmask", NORMALMASK_CalcVisibleMask);

// /* 0010f140 00000028 */ void NORMALMASK_DisableVisibleMask() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/normalmask", NORMALMASK_DisableVisibleMask);

// /* 0010f168 00000038 */ void NORMALMASK_EnableVisibleMask() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/normalmask", NORMALMASK_EnableVisibleMask);

// /* 0010f1a0 00000020 */ void NORMALMASK_SwapMasks(/* a0 4 */ Terrain *terrain) {
//     /* v0 2 */ int32 curTree;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/normalmask", NORMALMASK_SwapMasks);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/normalmask", D_002B2C10);
