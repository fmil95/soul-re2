/* Original path: C:\sr2\game\Instance.c */
/* .text 0x0013A898, .data 0x0025AF00, .rodata 0x002B4BB8 */
/* Code from other files was inlined here: /sr2/game/ps2/transform.h, math3d.h, mempack.h */

#include "Instance.h"

// /* 0013a898 00000030 */ void INSTANCE_ClearTfaces(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ClearTfaces);

// /* 0013a8c8 000000a0 */ static void INSTANCE_Deactivate(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Deactivate);

// /* 0013a968 00000094 */ static void INSTANCE_Reactivate(/* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Reactivate);

// /* 0013aa00 00000008 */ static void INSTANCE_DeactivatedProcess(/* a0 4 */ Instance *instance, /* a1 5 */ GameTracker *gameTracker) {}
void INSTANCE_DeactivatedProcess(Instance *instance, GameTracker *gameTracker) {
}

// /* 0013aa08 0000025c */ void INSTANCE_DeactivateFarInstances(/* s2 18 */ GameTracker *gameTracker) {
//     /* v0 2 */ InstanceList *instanceList;
//     /* s0 16 */ Instance *instance;
//     /* 0x0(sp) */ Vector4f line;
//     /* f1 39 */ float distSq;
//     /* a2 6 */ int numInstances;
//     /* s1 17 */ int numToProcess;
//     /* a1 5 */ int cntInst;
//     /* data 25b250 */ static int lastInst;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float z;
//         /* f2 40 */ float y;
//         /* f1 39 */ float x;
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* f0 38 */ float z;
//         /* f1 39 */ float y;
//         /* f2 40 */ float x;
//         {
//             /* f1 39 */ float len;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_DeactivateFarInstances);

// /* 0013ac68 000000b4 */ void INSTANCE_InitInstanceList(/* a3 7 */ InstanceList *list, /* a1 5 */ InstancePool *pool) {
//     /* v1 3 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_InitInstanceList);

// /* 0013ad20 000000a8 */ Instance* INSTANCE_NewInstance(/* a3 7 */ InstanceList *list, /* a1 5 */ Object *object) {
//     /* v0 2 */ Instance *temp;
//     /* a2 6 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_NewInstance);

// /* 0013adc8 000000e4 */ int32 INSTANCE_InstanceGroupNumber(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ int32 result;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_InstanceGroupNumber);

// /* 0013aeb0 00000048 */ void INSTANCE_InsertInstanceGroup(/* s1 17 */ InstanceList *list, /* s0 16 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_InsertInstanceGroup);

// /* 0013aef8 00000020 */ void INSTANCE_AddInstance(/* a0 4 */ InstanceList *list, /* a1 5 */ Instance *instance) {
//     /* v0 2 */ Instance *temp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_AddInstance);

// /* 0013af18 00000254 */ void INSTANCE_ReallyRemoveInstance(/* s1 17 */ InstanceList *list, /* s0 16 */ Instance *instance, /* s2 18 */ int32 reset) {
//     /* v0 2 */ Instance *temp;
//     {
//         /* v1 3 */ LightInstance *li;
//         /* a0 4 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ReallyRemoveInstance);

// /* 0013b170 000000d0 */ void INSTANCE_CleanUpInstanceList(/* s3 19 */ InstanceList *list, /* s4 20 */ int32 reset) {
//     /* s0 16 */ Instance *instance;
//     /* s1 17 */ Instance *next;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_CleanUpInstanceList);

// /* 0013b240 000000ac */ int INSTANCE_Introduced(/* s0 16 */ Intro *intro, /* a1 5 */ int16 streamUnitID) {
//     /* v1 3 */ Instance *instance;
//     /* v1 3 */ Instance *next;
//     /* s1 17 */ int ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Introduced);

// /* 0013b2f0 00000050 */ INICommand* INSTANCE_GetIntroCommand(/* a0 4 */ INICommand *command, /* a1 5 */ int cmd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetIntroCommand);

// /* 0013b340 0000001c */ INICommand* INSTANCE_FindIntroCommand(/* a0 4 */ Instance *instance, /* a1 5 */ int cmd) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_FindIntroCommand);

// /* 0013b360 00000120 */ void INSTANCE_ProcessIntro(/* s1 17 */ Instance *instance) {
//     {
//         /* s0 16 */ INICommand *command;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ProcessIntro);

// /* 0013b480 00000088 */ void INSTANCE_InitEffects(/* s2 18 */ Instance *instance, /* s1 17 */ Object *object, /* a2 6 */ int32 mdlview) {
//     /* s0 16 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_InitEffects);

// /* 0013b508 00000730 */ Instance* INSTANCE_IntroduceInstance(/* s1 17 */ Intro *intro, /* s3 19 */ int16 streamUnitID) {
//     /* s5 21 */ Object *object;
//     /* s0 16 */ Instance *instance;
//     /* s6 22 */ Instance *attachInst;
//     /* s2 18 */ ObjectTracker *objectTracker;
//     {
//         /* v0 2 */ INICommand *index;
//         /* s7 23 */ int32 attachedUniqueID;
//         {
//             /* a0 4 */ StreamUnit *stream;
//             /* a1 5 */ int i;
//         }
//         {
//             /* s1 17 */ SavedIntroSpline *savedIntroSpline;
//             /* s2 18 */ MultiSpline *spline;
//         }
//         {
//             /* v0 2 */ SavedIntroSmall *savedIntroSmall;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_IntroduceInstance);

// /* 0013bc38 00000188 */ void INSTANCE_AdditionalCollideFunctions(/* a0 4 */ InstanceList *instanceList) {
//     /* s0 16 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_AdditionalCollideFunctions);

// /* 0013bdc0 00000038 */ int32 INSTANCE_GetSplineFrameNumber(/* s0 16 */ Instance *instance, /* a1 5 */ MultiSpline *spline) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetSplineFrameNumber);

// /* 0013bdf8 00000940 */ void INSTANCE_ProcessFunctions(/* a0 4 */ InstanceList *instanceList) {
//     {
//         /* s0 16 */ Instance *instance;
//         /* 0x10(sp) */ int nopause;
//         {
//             /* s5 21 */ Object *object;
//             {
//                 /* s2 18 */ int hidden;
//                 /* s1 17 */ int burning;
//             }
//             {
//                 /* s2 18 */ int32 prevFrame;
//                 /* s4 20 */ MultiSpline *multi;
//                 {
//                     /* s6 22 */ int32 endOfSpline;
//                     /* s7 23 */ int16 direction;
//                     {
//                         /* s3 19 */ int32 frame;
//                         /* s1 17 */ int32 maxFrames;
//                     }
//                 }
//             }
//             {
//                 /* f20 58 */ float killTest;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ProcessFunctions);

// /* 0013c738 00000084 */ void INSTANCE_StartFade(/* t0 8 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_StartFade);

// /* 0013c7c0 00000100 */ void INSTANCE_DoFade(/* a2 6 */ Instance *instance) {
//     /* v1 3 */ Instance *child;
//     /* a0 4 */ int32 time;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_DoFade);

// /* 0013c8c0 000002a0 */ Instance* INSTANCE_BirthObject(/* s1 17 */ Instance *parent, /* s3 19 */ Object *object, /* s2 18 */ int modelNum) {
//     /* s0 16 */ Instance *instance;
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_BirthObject);

// /* 0013cb60 0000004c */ Instance* INSTANCE_Birth(/* a0 4 */ Instance *parent, /* a1 5 */ int32 object_id, /* a2 6 */ int modelNum) {
//     /* v0 2 */ Object *object;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Birth);

// /* 0013cbb0 00000008 */ void INSTANCE_BuildStaticShadow(/* a0 4 */ Instance *instance) {}
void INSTANCE_BuildStaticShadow(Instance *instance) {
}

// /* 0013cbb8 00000468 */ void INSTANCE_DefaultInit(/* s1 17 */ Instance *instance, /* s2 18 */ Object *object, /* s3 19 */ int modelNum) {
//     /* s0 16 */ int i;
//     /* t0 8 */ int j;
//     /* a3 7 */ int numHPrims;
//     /* s3 19 */ int numModels;
//     /* a2 6 */ HPrim *hprim;
//     /* v1 3 */ Model **pModel;
//     /* t3 11 */ HModel *hmodel;
//     {
//         /* v0 2 */ Model *model;
//         /* a2 6 */ Segment *seg;
//         {
//             /* a0 4 */ HInfo *hinfo;
//         }
//     }
//     {
//         /* t6 14 */ Model *model;
//         /* v1 3 */ Segment *seg;
//         {
//             /* a3 7 */ HInfo *hinfo;
//             {
//                 /* v0 2 */ int k;
//                 /* a0 4 */ HFace *hface;
//                 /* a1 5 */ HSphere *hsphere;
//                 /* t1 9 */ HBox *hbox;
//                 /* t2 10 */ HMarker *hmarker;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_DefaultInit);

// /* 0013d020 00000120 */ void INSTANCE_PlainDeath(/* s5 21 */ Instance *instance) {
//     {
//         /* a0 4 */ Instance *oldOn;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_PlainDeath);

// /* 0013d140 0000002c */ void INSTANCE_KillInstance(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_KillInstance);

// /* 0013d170 00000030 */ uint32 INSTANCE_Query(/* a0 4 */ Instance *Inst, /* a1 5 */ uint32 Query) {
//     /* v0 2 */ QueryFunc *Func;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Query);

// /* 0013d1a0 00000060 */ void INSTANCE_Post(/* s0 16 */ Instance *Inst, /* s3 19 */ int Message, /* s2 18 */ int Data) {
//     /* s1 17 */ MessageFunc *Func;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Post);

// /* 0013d200 000000ec */ void INSTANCE_Broadcast(/* s6 22 */ Instance *sender, /* s5 21 */ int32 whatAmIMask, /* s2 18 */ int Message, /* s3 19 */ int Data) {
//     /* s0 16 */ Instance *instance;
//     /* s4 20 */ int plane;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Broadcast);

// /* 0013d2f0 000000b4 */ void INSTANCE_BroadcastAll(/* s2 18 */ int Message, /* s4 20 */ int Data) {
//     /* s0 16 */ Instance *instance;
//     /* s3 19 */ int plane;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_BroadcastAll);

// /* 0013d3a8 00000054 */ int INSTANCE_InPlane(/* a0 4 */ Instance *instance, /* a1 5 */ int plane) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_InPlane);

// /* 0013d400 0000004c */ int32 INSTANCE_SavedIntroduced(/* a0 4 */ SavedIntro *savedIntro) {
//     /* a1 5 */ Instance *instance;
//     /* a1 5 */ Instance *next;
//     /* a2 6 */ int32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SavedIntroduced);

// /* 0013d450 000000f4 */ void INSTANCE_StripNameAndNumber(/* s5 21 */ char *string, /* s6 22 */ char *newString, /* s4 20 */ int32 *number) {
//     /* s2 18 */ int32 i;
//     /* s3 19 */ int32 stringDone;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_StripNameAndNumber);

// /* 0013d548 000000cc */ Instance* INSTANCE_FindWithName(/* s2 18 */ int32 areaID, /* s3 19 */ char *instanceName, /* a2 6 */ Instance *startInstance) {
//     /* s0 16 */ Instance *instance;
//     /* s4 20 */ Instance *ret;
//     /* s1 17 */ Instance *next;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_FindWithName);

// /* 0013d618 000000ac */ Intro* INSTANCE_FindIntroWithNameFromLevel(/* s3 19 */ Level *level, /* s6 22 */ char *instanceName, /* s4 20 */ int32 *index) {
//     /* s5 21 */ Intro *ret;
//     /* s0 16 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_FindIntroWithNameFromLevel);

// /* 0013d6c8 00000090 */ Intro* INSTANCE_FindIntro(/* a0 4 */ int32 areaID, /* s0 16 */ int32 introUniqueID) {
//     /* s1 17 */ Intro *ret;
//     /* a0 4 */ int32 i;
//     /* v1 3 */ Level *level;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_FindIntro);

// /* 0013d758 000000ac */ Intro* INSTANCE_FindIntroUniqueID(/* t4 12 */ int32 introUniqueID, /* a1 5 */ int32 *streamUnitID) {
//     /* t7 15 */ Intro *ret;
//     /* t1 9 */ int32 i;
//     /* a3 7 */ int32 j;
//     /* a2 6 */ Level *level;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_FindIntroUniqueID);

// /* 0013d808 00000044 */ Instance* INSTANCE_Find(/* a0 4 */ int32 introUniqueID) {
//     /* a1 5 */ Instance *instance;
//     /* a2 6 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Find);

// /* 0013d850 0000046c */ Instance* INSTANCE_IntroduceSavedInstance(/* s2 18 */ SavedIntro *savedIntro, /* a1 5 */ StreamUnit *streamUnit, /* fp 30 */ int *deleted) {
//     /* s1 17 */ ObjectTracker *objectTracker;
//     /* s6 22 */ Object *object;
//     /* s0 16 */ Instance *instance;
//     /* s4 20 */ Vector4f *levelOffset;
//     /* v1 3 */ Level *level;
//     /* s7 23 */ Instance *attachInst;
//     {
//         /* 0x0(sp) */ char savedName[12];
//         {
//             /* v0 2 */ Level *birthLevel;
//             /* s3 19 */ Intro *oldIntro;
//             /* s3 19 */ int nosave;
//             /* s1 17 */ int remove;
//             {
//                 /* v1 3 */ Intro *intro;
//                 /* a0 4 */ int i;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_IntroduceSavedInstance);

// /* 0013dcc0 000004ac */ Instance* INSTANCE_IntroduceSavedInstanceWithIntro(/* s2 18 */ SavedIntroWithIntro *savedIntro, /* s5 21 */ StreamUnit *streamUnit, /* 0x0(sp) */ int *deleted) {
//     /* s1 17 */ ObjectTracker *objectTracker;
//     /* fp 30 */ Object *object;
//     /* s0 16 */ Instance *instance;
//     /* s6 22 */ Vector4f *levelOffset;
//     /* a3 7 */ Level *level;
//     /* s4 20 */ Intro *intro;
//     /* s7 23 */ Instance *attachedInst;
//     /* a1 5 */ int i;
//     {
//         /* s1 17 */ int remove;
//         /* s3 19 */ int nosave;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_IntroduceSavedInstanceWithIntro);

// /* 0013e170 00000028 */ Instance* INSTANCE_GetFromHandle(/* a0 4 */ InstanceHandle *handle) {
//     /* v1 3 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetFromHandle);

// /* 0013e198 00000018 */ void INSTANCE_SetHandle(/* a0 4 */ InstanceHandle *handle, /* a1 5 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SetHandle);

// /* 0013e1b0 00000024 */ Instance* INSTANCE_ValidateWithID(/* v0 2 */ Instance *instance, /* a1 5 */ int32 id) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ValidateWithID);

// /* 0013e1d8 00000260 */ void INSTANCE_SpatialRelationships(/* a0 4 */ InstanceList *instanceList) {
//     /* s1 17 */ Instance *instance;
//     /* a1 5 */ Instance *checkee;
//     /* s0 16 */ int i;
//     /* s3 19 */ int j;
//     /* 0x60(sp) */ int numCheckable;
//     /* s7 23 */ int numCheckers;
//     {
//         /* s5 21 */ void *ret;
//     }
//     {
//         /* v0 2 */ Matrixf *lookMatrix;
//     }
//     {
//         /* v0 2 */ uint32 whatAmI;
//     }
//     {
//         /* s0 16 */ Matrixf *lookMatrix;
//         /* 0x0(sp) */ Matrixf invMatrix;
//         /* s4 20 */ int32 checkMask;
//         /* v1 3 */ int toCheck;
//         {
//             /* s0 16 */ float *m0[4];
//             {
//                 /* BADREGISTER -1 */ Vector4fr _m12;
//                 /* BADREGISTER -1 */ Vector4fr _m11;
//                 /* BADREGISTER -1 */ Vector4fr _m10;
//                 /* BADREGISTER -1 */ Vector4fr _m02;
//                 /* BADREGISTER -1 */ Vector4fr _m01;
//                 /* BADREGISTER -1 */ Vector4fr _m00;
//             }
//         }
//         {
//             /* 0x40(sp) */ evCollideInstanceStatsData data;
//             /* a2 6 */ Matrixf *mat;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SpatialRelationships);

// /* 0013e438 000000f4 */ int INSTANCE_SetStatsData(/* a0 4 */ Instance *instance, /* a1 5 */ Instance *checkee, /* a2 6 */ Vector4f *checkPoint, /* a3 7 */ evCollideInstanceStatsData *data, /* t0 8 */ float *mat[4]) {
//     {
//         {
//             /* f2 40 */ float len;
//         }
//         {
//             /* f3 41 */ float result;
//         }
//     }
//     {
//         /* 0x0(sp) */ Vector4f delta;
//         {
//             /* a2 6 */ Vector4f *v1;
//             {
//                 /* BADREGISTER -1 */ Vector4fr temp;
//             }
//         }
//         {
//             /* t0 8 */ float *matrix[4];
//             /* a3 7 */ Vector4f *dstvector;
//             {
//                 /* BADREGISTER -1 */ Vector4fr m2;
//                 /* BADREGISTER -1 */ Vector4fr m1;
//                 /* BADREGISTER -1 */ Vector4fr m0;
//                 {
//                     /* BADREGISTER -1 */ Vector4fr dstvector;
//                 }
//             }
//         }
//         {
//             /* f1 39 */ float x;
//             /* f0 38 */ float y;
//             {
//                 {
//                     /* f0 38 */ float y;
//                     /* f1 39 */ float x;
//                     {
//                         /* f1 39 */ float len;
//                     }
//                 }
//                 {
//                     /* f1 39 */ float result;
//                 }
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SetStatsData);

// /* 0013e530 0000001c */ void INSTANCE_RelativePosition(/* a0 4 */ Instance *origin, /* a1 5 */ Instance *instance, /* a2 6 */ Vector4f *outPos) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_RelativePosition);

// /* 0013e550 00000074 */ void INSTANCE_RelativePositionInstance(/* a0 4 */ Instance *origin, /* a1 5 */ Vector4f *instancePos, /* a2 6 */ Vector4f *outPos) {
//     /* 0x0(sp) */ Matrixf invMatrix;
//     /* 0x40(sp) */ Vector4f delta;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* v0 2 */ float *m0[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr _m12;
//             /* BADREGISTER -1 */ Vector4fr _m11;
//             /* BADREGISTER -1 */ Vector4fr _m10;
//             /* BADREGISTER -1 */ Vector4fr _m02;
//             /* BADREGISTER -1 */ Vector4fr _m01;
//             /* BADREGISTER -1 */ Vector4fr _m00;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr dstvector;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_RelativePositionInstance);

// /* 0013e5c8 0000008c */ void INSTANCE_RelativePositionIntro(/* v0 2 */ Intro *origin, /* a1 5 */ Vector4f *instancePos, /* s0 16 */ Vector4f *outPos) {
//     /* 0x0(sp) */ Matrixf invMatrix;
//     /* 0x40(sp) */ Vector4f negRotation;
//     /* 0x50(sp) */ Vector4f delta;
//     {
//         /* BADREGISTER -1 */ Vector4fr temp;
//     }
//     {
//         /* s0 16 */ Vector4f *dstvector;
//         {
//             /* BADREGISTER -1 */ Vector4fr srcvector;
//             /* BADREGISTER -1 */ Vector4fr m2;
//             /* BADREGISTER -1 */ Vector4fr m1;
//             /* BADREGISTER -1 */ Vector4fr m0;
//             {
//                 /* BADREGISTER -1 */ Vector4fr dstvector;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_RelativePositionIntro);

// /* 0013e658 000000c4 */ void INSTANCE_LinkToParent(/* s2 18 */ Instance *instance, /* s3 19 */ Instance *parent, /* s1 17 */ int node) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_LinkToParent);

// /* 0013e720 00000058 */ void INSTANCE_LinkToParentMarker(/* s0 16 */ Instance *instance, /* s2 18 */ Instance *parent, /* s1 17 */ int marker) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_LinkToParentMarker);

// /* 0013e778 00000164 */ void INSTANCE_DynamicLinkToParentMarker(/* s0 16 */ Instance *instance, /* s1 17 */ Instance *parent, /* a2 6 */ int segment) {
//     /* 0x0(sp) */ HMarker hmarker;
//     /* 0x20(sp) */ Matrixf invMatrix;
//     /* 0x60(sp) */ Vector4f in;
//     /* 0x70(sp) */ Vector4f out;
//     {
//         /* v0 2 */ float *m0[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr _m12;
//             /* BADREGISTER -1 */ Vector4fr _m11;
//             /* BADREGISTER -1 */ Vector4fr _m10;
//             /* BADREGISTER -1 */ Vector4fr _m02;
//             /* BADREGISTER -1 */ Vector4fr _m01;
//             /* BADREGISTER -1 */ Vector4fr _m00;
//         }
//     }
//     {
//         /* BADREGISTER -1 */ Vector4fr srcvector;
//         {
//             /* BADREGISTER -1 */ Vector4fr dstvector;
//         }
//     }
//     {
//         /* v1 3 */ float *mat2[4];
//         /* a3 7 */ float *m4[4];
//         {
//             /* BADREGISTER -1 */ Vector4fr temp22;
//             /* BADREGISTER -1 */ Vector4fr temp21;
//             /* BADREGISTER -1 */ Vector4fr temp20;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_DynamicLinkToParentMarker);

// /* 0013e8e0 00000140 */ void INSTANCE_UnlinkFromParent(/* s1 17 */ Instance *instance) {
//     /* s2 18 */ Instance *parent;
//     {
//         /* 0x0(sp) */ G2EulerAngles ea;
//         {
//             /* v1 3 */ Instance *sibling;
//         }
//         {
//             /* 0x10(sp) */ Matrixf matrix;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_UnlinkFromParent);

// /* 0013ea20 00000080 */ void INSTANCE_UnlinkChildren(/* s2 18 */ Instance *instance) {
//     /* s1 17 */ Instance *child;
//     {
//         /* s0 16 */ Instance *sibling;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_UnlinkChildren);

// /* 0013eaa0 00000058 */ void INSTANCE_UpdateFamilyStreamUnitID(/* s1 17 */ Instance *instance) {
//     /* s0 16 */ Instance *child;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_UpdateFamilyStreamUnitID);

// /* 0013eaf8 00000064 */ void INSTANCE_ReallyRemoveAllChildren(/* a0 4 */ Instance *instance) {
//     /* s1 17 */ Instance *child;
//     {
//         /* s0 16 */ Instance *sibling;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_ReallyRemoveAllChildren);

// /* 0013eb60 00000024 */ Instance* INSTANCE_GetChildLinkedToSegment(/* a0 4 */ Instance *instance, /* a1 5 */ int segment) {
//     /* v1 3 */ Instance *child;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetChildLinkedToSegment);

// /* 0013eb88 00000024 */ Instance* INSTANCE_GetChildLinkedToMarker(/* a0 4 */ Instance *instance, /* a1 5 */ int marker) {
//     /* v1 3 */ Instance *child;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetChildLinkedToMarker);

// /* 0013ebb0 00000040 */ int INSTANCE_Linked(/* a0 4 */ Instance *instance1, /* a1 5 */ Instance *instance2) {
//     /* a0 4 */ Instance *root1;
//     /* a1 5 */ Instance *root2;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_Linked);

// /* 0013ebf0 000000b8 */ int INSTANCE_GetFadeValue(/* a0 4 */ Instance *instance) {
//     /* a1 5 */ int fadeValue;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_GetFadeValue);

// /* 0013eca8 0000025c */ int32 INSTANCE_DefaultAnimCallback(/* a0 4 */ G2Anim *anim, /* a1 5 */ G2AnimSectionID sectionID, /* a2 6 */ G2AnimCallbackMsg message, /* s3 19 */ int32 messageDataA, /* s0 16 */ int32 messageDataB, /* t1 9 */ void *data) {
//     /* s2 18 */ Instance *instance;
//     {
//         /* s1 17 */ int mode;
//         {
//             /* f12 50 */ float pitch;
//             {
//                 /* v1 3 */ uint32 newSeed;
//             }
//         }
//         {
//             /* v1 3 */ int total;
//             /* f12 50 */ float pitch;
//             /* a0 4 */ int soundnum;
//             {
//                 /* a0 4 */ uint32 newSeed;
//             }
//             {
//                 /* a0 4 */ uint32 newSeed;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_DefaultAnimCallback);

// /* 0013ef08 00000120 */ void INSTANCE_SetModel(/* s0 16 */ Instance *instance, /* s2 18 */ int model) {
//     /* a0 4 */ Model *newModel;
//     /* s1 17 */ int numNewSegments;
//     {
//         /* a0 4 */ Model *oldModel;
//         /* v0 2 */ int numOldSegments;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SetModel);

// /* 0013f028 0000003c */ void INSTANCE_SetCurrentStreamUnitID(/* a0 4 */ Instance *instance, /* a1 5 */ int id) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_SetCurrentStreamUnitID);

// /* 0013f068 00000010 */ void INSTANCE_HideAllDrawGroups(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_HideAllDrawGroups);

// /* 0013f078 00000008 */ void INSTANCE_UnhideAllDrawGroups(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_UnhideAllDrawGroups);

// /* 0013f080 00000010 */ void INSTANCE_HideAllFXDrawGroups(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_HideAllFXDrawGroups);

// /* 0013f090 00000008 */ void INSTANCE_UnhideAllFXDrawGroups(/* a0 4 */ Instance *instance) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_UnhideAllFXDrawGroups);

// /* 0013f098 00000014 */ void INSTANCE_MatchDrawGroups(/* a0 4 */ Instance *src, /* a1 5 */ Instance *dest) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_MatchDrawGroups);

// /* 0013f0b0 00000030 */ void INSTANCE_HideUnhideDrawGroup(/* a0 4 */ Instance *instance, /* a1 5 */ int drawGroup, /* a2 6 */ int on) {
//     /* v1 3 */ int flag;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_HideUnhideDrawGroup);

// /* 0013f0e0 00000030 */ void INSTANCE_HideUnhideFXDrawGroup(/* a0 4 */ Instance *instance, /* a1 5 */ int drawGroup, /* a2 6 */ int on) {
//     /* v1 3 */ int flag;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/Instance", INSTANCE_HideUnhideFXDrawGroup);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Instance", D_002B4BB8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Instance", D_002B4BD0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Instance", D_002B4C10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Instance", D_002B4C30);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Instance", D_002B4C78);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Instance", D_002B4CB0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Instance", D_002B4D00);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/Instance", D_002B4D38);
