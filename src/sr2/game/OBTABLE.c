/* Original path: C:\sr2\game\OBTABLE.C */
/* .text 0x00143A10, .data 0x0025BB70, .rodata 0x002B4DB0 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* data 25bb70 */ extern ObjectAccess objectAccess[0];

// /* 00143a10 000000f8 */ void OBTABLE_InstanceInit(/* s0 16 */ Instance *instance) {
//     /* s1 17 */ int32 id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_InstanceInit);

// /* 00143b08 00000040 */ void OBTABLE_GetInstanceCollideFunc(/* a1 5 */ Instance *instance) {
//     /* a0 4 */ int32 id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_GetInstanceCollideFunc);

// /* 00143b48 00000038 */ void OBTABLE_GetInstanceAdditionalCollideFunc(/* a1 5 */ Instance *instance) {
//     /* a0 4 */ int32 id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_GetInstanceAdditionalCollideFunc);

// /* 00143b80 00000040 */ void OBTABLE_GetInstanceProcessFunc(/* a1 5 */ Instance *instance) {
//     /* a0 4 */ int32 id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_GetInstanceProcessFunc);

// /* 00143bc0 00000040 */ void OBTABLE_GetInstanceQueryFunc(/* a1 5 */ Instance *instance) {
//     /* a0 4 */ int32 id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_GetInstanceQueryFunc);

// /* 00143c00 00000040 */ void OBTABLE_GetInstanceMessageFunc(/* a1 5 */ Instance *instance) {
//     /* a0 4 */ int32 id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_GetInstanceMessageFunc);

// /* 00143c40 00000234 */ void OBTABLE_InitObjectWithID(/* s1 17 */ Object *object) {
//     /* s0 16 */ int32 id;
//     {
//         /* a0 4 */ int i;
//         /* a0 4 */ int j;
//         /* t0 8 */ int nocollide;
//         {
//             /* a1 5 */ Model *model;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_InitObjectWithID);

// /* 00143e78 0000006c */ void OBTABLE_SetObjectAccess(/* t0 8 */ Object *object) {
//     /* a3 7 */ ObjectAccess *oa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_SetObjectAccess);

// /* 00143ee8 00000030 */ void OBTABLE_ClearObjectReferences() {
//     /* a0 4 */ ObjectAccess *oa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_ClearObjectReferences);

// /* 00143f18 0000003c */ void OBTABLE_RemoveObjectEntry(/* a0 4 */ Object *object) {
//     /* a1 5 */ ObjectAccess *oa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_RemoveObjectEntry);

// /* 00143f58 0000005c */ Object* OBTABLE_FindObject(/* a0 4 */ char *objectName) {
//     /* a3 7 */ Object *object;
//     /* a2 6 */ ObjectTracker *otr;
//     /* t0 8 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_FindObject);

// /* 00143fb8 0000003c */ void OBTABLE_ChangeObjectAccessPointers(/* a0 4 */ Object *oldObject, /* a1 5 */ Object *newObject) {
//     /* a2 6 */ ObjectAccess *oa;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_ChangeObjectAccessPointers);

// /* 00143ff8 00000054 */ void OBTABLE_RelocateObjectTune(/* a0 4 */ Object *object, /* a1 5 */ int32 offset) {
//     /* a2 6 */ int32 id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_RelocateObjectTune);

// /* 00144050 00000048 */ void OBTABLE_RelocateInstanceObject(/* a0 4 */ Instance *instance, /* a1 5 */ int32 offset) {
//     /* a2 6 */ int32 id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_RelocateInstanceObject);

// /* 00144098 000001c8 */ void OBTABLE_InitAnimPointers(/* fp 30 */ ObjectTracker *objectTracker) {
//     /* s3 19 */ Object *object;
//     {
//         /* v1 3 */ int i;
//         /* 0x0(sp) */ char *earlyOut;
//         /* s2 18 */ G2AnimKeylist **keyPtr;
//         {
//             /* s1 17 */ ObjectOwnerInfo *oi;
//             {
//                 /* a0 4 */ ObjectTracker *otr;
//                 /* t1 9 */ Object *ownerOb;
//                 /* a1 5 */ int j;
//                 /* a2 6 */ int objectIndex;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/OBTABLE", OBTABLE_InitAnimPointers);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4DB0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4DC0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4DD0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4DE0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4DF0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4E00);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4E10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4E20);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4E30);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4E40);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4E50);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4E60);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4E70);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4E80);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4E90);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4EA0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4EB0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4EC0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4ED0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4EE0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4EF0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4F00);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4F10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4F20);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4F60);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4FA0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/OBTABLE", D_002B4FE0);
