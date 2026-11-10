/* Original path: C:\sr2\game\RESOLVE.C */
/* .text 0x00155970, .rodata 0x002B51B0 */

#include "RESOLVE.h"

// /* 00155970 000001d4 */ static void* RESOLVE_Pointers(/* s1 17 */ BlockList *srcBlockList, /* s2 18 */ int8 *baseAddr, /* s6 22 */ int memType) {
//     /* s0 16 */ int i;
//     /* a3 7 */ int j;
//     /* t0 8 */ uint32 *offsetPtr;
//     /* s2 18 */ int8 *sourceAddr;
//     /* s3 19 */ BlockInfo *blockInfo;
//     /* s0 16 */ void *ptr;
//     /* s5 21 */ int numBlocks;
//     /* fp 30 */ BlockInfo *blockList;
//     /* s4 20 */ int8 **blockAddr;
//     {
//         /* v1 3 */ BlockResolveList *resolveList;
//         {
//             /* a1 5 */ uint32 *ptr;
//             /* v0 2 */ int blockNum;
//             /* a0 4 */ int offset;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/RESOLVE", RESOLVE_Pointers);

// /* 00155b48 00000044 */ void* RESOLVE_RelocBinaryData(/* s0 16 */ int32 *data, /* a1 5 */ int memType) {
//     /* s1 17 */ int8 *dataAddr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/RESOLVE", RESOLVE_RelocBinaryData);

// /* 00155b90 000003a4 */ void RESOLVE_LoadCallback(/* a0 4 */ void *data, /* s4 20 */ int length, /* 0x0(sp) */ int memType, /* fp 30 */ FILEREQUEST *filereq) {
//     /* s0 16 */ ResolveLoadCallbackInfo *cbinfo;
//     /* s1 17 */ BlockInfo *blockInfo;
//     /* s5 21 */ uint8 *ptr;
//     {
//         /* s1 17 */ int size;
//         {
//             /* s3 19 */ int i;
//         }
//         {
//             /* a3 7 */ int j;
//             /* t0 8 */ uint32 *offsetPtr;
//             /* s2 18 */ uint8 *curBlockAddr;
//             {
//                 /* a1 5 */ uint32 *ptr;
//                 /* v0 2 */ int destBlock;
//                 /* a0 4 */ int offset;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/RESOLVE", RESOLVE_LoadCallback);

// /* 00155f38 00000074 */ void RESOLVE_CancelCallback(/* s1 17 */ FILEREQUEST *filereq) {
//     /* s0 16 */ ResolveLoadCallbackInfo *cbinfo;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/RESOLVE", RESOLVE_CancelCallback);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/RESOLVE", D_002B51B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/RESOLVE", D_002B51E0);
