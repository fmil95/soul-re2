/* Original path: C:\sr2\game\stream.c */
/* .text 0x0015F420, .data 0x0025C298, .rodata 0x002B5378 */
/* Code from other files was inlined here: math3d.h */

#include "stream.h"

// /* 0015f420 0000002c */ static void STREAM_FillOutVRAMName(/* v0 2 */ char *baseUnitName, /* a1 5 */ char *vramName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_FillOutVRAMName);

// /* 0015f450 0000005c */ static void STREAM_FillOutFileNames(/* s1 17 */ char *baseUnitName, /* a0 4 */ char *dramName, /* s0 16 */ char *sfxName) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_FillOutFileNames);

// /* 0015f4b0 0000002c */ void STREAM_AbortAreaLoad(/* a0 4 */ char *baseAreaName) {
//     /* 0x0(sp) */ char vramName[80];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_AbortAreaLoad);

// /* 0015f4e0 00000034 */ void STREAM_Init() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_Init);

// /* 0015f518 00000078 */ int FindObjectName(/* s2 18 */ char *name) {
//     /* s1 17 */ int i;
//     /* s0 16 */ ObjectTracker *otr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", FindObjectName);

// /* 0015f590 00000044 */ ObjectTracker* STREAM_FindObjectInTracker(/* a0 4 */ Object *object) {
//     /* a1 5 */ int i;
//     /* v1 3 */ ObjectTracker *otr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_FindObjectInTracker);

// /* 0015f5d8 00000080 */ void STREAM_ReportCurrentObjects() {
//     /* s0 16 */ int i;
//     /* s3 19 */ GameTracker *gameTracker;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_ReportCurrentObjects);

// /* 0015f658 000001a4 */ void STREAM_LoadObjectReturn(/* s1 17 */ void *loadData, /* s3 19 */ void *data, /* a2 6 */ void *data2) {
//     /* s0 16 */ char *childObject;
//     /* v0 2 */ ObjectTracker *childObjectTracker;
//     /* s1 17 */ int32 objectIndex;
//     /* s0 16 */ int i;
//     {
//         /* 0x0(sp) */ char objDsfxFileName[64];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_LoadObjectReturn);

// /* 0015f800 00000084 */ void STREAM_DumpMonster(/* s2 18 */ ObjectTracker *dumpee) {
//     /* s1 17 */ Object *object;
//     /* a1 5 */ Instance *instance;
//     {
//         /* s0 16 */ Instance *next;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpMonster);

// /* 0015f888 00000064 */ static int STREAM_InList(/* s1 17 */ char *name, /* a1 5 */ char **nameList) {
//     /* s0 16 */ char **mon;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_InList);

// /* 0015f8f0 00000020 */ static int STREAM_IsSpecialMonster(/* a0 4 */ char *name) {
//     /* data 25c298 */ static char *mon[6];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_IsSpecialMonster);

// /* 0015f910 00000078 */ void STREAM_DumpSomeMonsters() {
//     /* s0 16 */ ObjectTracker *otr;
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpSomeMonsters);

// /* 0015f988 00000030 */ void STREAM_NoMonsters() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_NoMonsters);

// /* 0015f9b8 00000038 */ void STREAM_YesMonsters() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_YesMonsters);

// /* 0015f9f0 00000070 */ void STREAM_MakeOnlyMonsterList() {
//     /* v0 2 */ char *str;
//     /* s0 16 */ char **start;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_MakeOnlyMonsterList);

// /* 0015fa60 0000004c */ int STREAM_IsMonster(/* s0 16 */ char *name) {
//     /* data 25c2b0 */ static char *monnames[36];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_IsMonster);

// /* 0015fab0 00000100 */ void STREAM_DumpAMonster(/* a0 4 */ int needed) {
//     {
//         /* s3 19 */ ObjectTracker *dumpee;
//         /* s0 16 */ ObjectTracker *otr;
//         /* s2 18 */ int biggest;
//         /* s1 17 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpAMonster);

// /* 0015fbb0 00000058 */ int STREAM_TryAndDumpANonResidentObject() {
//     /* s0 16 */ ObjectTracker *otr;
//     /* s1 17 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_TryAndDumpANonResidentObject);

// /* 0015fc08 000001cc */ int InsertGlobalObject(/* s3 19 */ char *name, /* s2 18 */ GameTracker *gameTracker) {
//     /* 0x0(sp) */ char string[64];
//     /* s1 17 */ int i;
//     /* s0 16 */ ObjectTracker *otr;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", InsertGlobalObject);

// /* 0015fdd8 00000054 */ void* STREAM_GetGlobalObject(/* a0 4 */ char *name) {
//     /* a0 4 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetGlobalObject);

// /* 0015fe30 00000050 */ ObjectTracker* STREAM_GetObjectTracker(/* a0 4 */ char *name) {
//     /* a0 4 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetObjectTracker);

// /* 0015fe80 00000108 */ static void LoadLevelObjects(/* s1 17 */ StreamUnit *stream) {
//     /* s0 16 */ int objlist_pos;
//     {
//         /* 0x0(sp) */ char name[20];
//     }
//     {
//         /* s0 16 */ Level *level;
//         /* s2 18 */ int i;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", LoadLevelObjects);

// /* 0015ff88 00000030 */ static int32 STREAM_IsAnInstanceUsingObject(/* a0 4 */ Object *object) {
//     /* v1 3 */ Instance *instance;
//     /* v1 3 */ Instance *next;
//     /* a1 5 */ int32 ret;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_IsAnInstanceUsingObject);

// /* 0015ffb8 00000030 */ void STREAM_StreamLoadObjectAbort(/* a0 4 */ void *loadData, /* a1 5 */ void *data, /* a2 6 */ void *data2) {
//     /* s0 16 */ ObjectTracker *objectTracker;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_StreamLoadObjectAbort);

// /* 0015ffe8 00000060 */ void STREAM_DumpLoadingObjects() {
//     /* s1 17 */ int i;
//     /* s0 16 */ ObjectTracker *tracker;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpLoadingObjects);

// /* 00160048 000000ec */ void STREAM_DumpObject(/* s1 17 */ ObjectTracker *objectTracker) {
//     /* s0 16 */ Object *object;
//     /* 0x0(sp) */ char vramName[64];
//     {
//         /* 0x40(sp) */ char dramName[64];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpObject);

// /* 00160138 000000c8 */ static int STREAM_IsObjectInAnyUnit(/* s3 19 */ ObjectTracker *tracker) {
//     /* s4 20 */ int d;
//     {
//         /* s0 16 */ uint8 *objlist;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_IsObjectInAnyUnit);

// /* 00160200 00000284 */ static void STREAM_RemoveAllObjectsNotInUse() {
//     /* s2 18 */ int i;
//     /* a2 6 */ int abort;
//     /* s0 16 */ ObjectTracker *tracker;
//     /* s3 19 */ ObjectTracker *trackerList;
//     {
//         /* s1 17 */ Object *object;
//     }
//     {
//         /* a0 4 */ int j;
//     }
//     {
//         /* a0 4 */ int j;
//         /* a2 6 */ ObjectTracker *otr;
//         {
//             /* a1 5 */ int k;
//             {
//                 /* a0 4 */ int l;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_RemoveAllObjectsNotInUse);

// /* 00160488 00000054 */ void RemoveAllObjects(/* a0 4 */ GameTracker *gameTracker) {
//     /* s1 17 */ int i;
//     /* s0 16 */ ObjectTracker *tracker;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RemoveAllObjects);

// /* 001604e0 0000007c */ Level* STREAM_GetLevelWithID(/* a0 4 */ int32 id) {
//     /* t2 10 */ Level *retLevel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetLevelWithID);

// /* 00160560 00000060 */ StreamUnit* STREAM_GetStreamUnitWithID(/* a0 4 */ int32 id) {
//     /* a3 7 */ StreamUnit *retUnit;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetStreamUnitWithID);

// /* 001605c0 000000ac */ StreamUnit* STREAM_GetStreamUnitWithName(/* s5 21 */ char *name) {
//     /* s4 20 */ StreamUnit *retUnit;
//     /* s3 19 */ int32 i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetStreamUnitWithName);

// /* 00160670 00000058 */ void STREAM_CalculateWaterLevel(/* a0 4 */ Level *level) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_CalculateWaterLevel);

// /* 001606c8 00000038 */ int STREAM_IsMorphInProgress() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_IsMorphInProgress);

// /* 00160700 000000c0 */ float STREAM_GetWaterZLevel(/* a2 6 */ Level *level, /* a1 5 */ Instance *instance) {
//     /* f2 40 */ float waterZLevel;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetWaterZLevel);

// /* 001607c0 00000034 */ static void STREAM_PortalDelta(/* a0 4 */ Vector4f *out, /* a1 5 */ StreamUnitPortal *portal1, /* a2 6 */ StreamUnitPortal *portal2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_PortalDelta);

// /* 001607f8 00000388 */ void STREAM_ConnectStream(/* s6 22 */ StreamUnit *streamUnit) {
//     /* 0x20(sp) */ StreamUnit *mainUnit;
//     /* s0 16 */ StreamUnitPortal *streamPortal;
//     /* s1 17 */ int numportals;
//     /* s3 19 */ StreamUnitPortal *streamPortal2;
//     /* 0x24(sp) */ int numportals2;
//     /* s2 18 */ int i;
//     /* s0 16 */ int j;
//     /* 0x0(sp) */ char text[16];
//     /* v0 2 */ char *commapos;
//     /* s4 20 */ int signalID;
//     {
//         /* s5 21 */ StreamUnit *connectStream;
//         {
//             /* 0x10(sp) */ Vector4f offset;
//         }
//     }
//     {
//         /* v1 3 */ int32 d;
//         /* s7 23 */ StreamUnit *connectStream;
//         {
//             /* s1 17 */ int32 hookedUp;
//             {
//                 /* 0x10(sp) */ Vector4f offset;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_ConnectStream);

// /* 00160b80 0000003c */ void STREAM_StreamLoadLevelAbort(/* a0 4 */ void *loadData, /* a1 5 */ void *data, /* a2 6 */ void *data2) {
//     /* s0 16 */ StreamUnit *streamUnit;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_StreamLoadLevelAbort);

// /* 00160bc0 0000004c */ static void STREAM_DoObjectLoadAndDump(/* a0 4 */ StreamUnit *streamUnit) {
//     /* a0 4 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DoObjectLoadAndDump);

// /* 00160c10 00000184 */ void STREAM_FinishLoad(/* s2 18 */ StreamUnit *streamUnit) {
//     /* s3 19 */ Level *level;
//     /* 0x0(sp) */ char sfxName[80];
//     /* 0x50(sp) */ char vramName[80];
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_FinishLoad);

// /* 00160d98 00000070 */ void STREAM_LoadLevelReturn(/* s1 17 */ void *loadData, /* a1 5 */ void *data, /* s0 16 */ void *data2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_LoadLevelReturn);

// /* 00160e08 00000098 */ void STREAM_StreamLoadLevelReturn(/* s1 17 */ void *loadData, /* a1 5 */ void *data, /* s0 16 */ void *data2) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_StreamLoadLevelReturn);

// /* 00160ea0 0000030c */ void STREAM_UpdateLevelPointer(/* s0 16 */ Level *oldLevel, /* s2 18 */ Level *newLevel, /* s1 17 */ int32 sizeOfLevel) {
//     /* a3 7 */ int32 i;
//     /* t0 8 */ int32 offset;
//     /* t3 11 */ GameTracker *gameTracker;
//     {
//         /* a0 4 */ Instance *instance;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_UpdateLevelPointer);

// /* 001611b0 000000ac */ StreamUnit* STREAM_WhichUnitPointerIsIn(/* s2 18 */ void *pointer) {
//     /* a0 4 */ int size;
//     /* s0 16 */ Level *level;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_WhichUnitPointerIsIn);

// /* 00161260 0000020c */ void STREAM_UpdateObjectPointer(/* s1 17 */ Object *oldObject, /* s3 19 */ Object *newObject, /* s4 20 */ int32 sizeOfObject) {
//     /* a1 5 */ int32 i;
//     /* a3 7 */ int32 d;
//     /* s0 16 */ GameTracker *gameTracker;
//     /* s2 18 */ int32 offset;
//     /* t1 9 */ ObjectTracker *otr;
//     {
//         /* a1 5 */ int j;
//         /* a2 6 */ Object *object;
//     }
//     {
//         /* s0 16 */ Instance *instance;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_UpdateObjectPointer);

// /* 00161470 00000034 */ void STREAM_UpdateInstanceCollisionInfo(/* a0 4 */ HModel *oldHModel, /* a1 5 */ HModel *newHModel) {
//     /* v1 3 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_UpdateInstanceCollisionInfo);

// /* 001614a8 00000008 */ void STREAM_MoveObjectSoundPointers(/* a0 4 */ Object *oldObject, /* a1 5 */ int32 sizeOfObject, /* a2 6 */ int32 offset) {}
void STREAM_MoveObjectSoundPointers(Object *oldObject, int32 sizeOfObject, int32 offset) {
}

// /* 001614b0 00000148 */ void STREAM_MoveIntoNewStreamUnit() {
//     /* s1 17 */ int i;
//     /* s0 16 */ StreamUnit *streamUnit;
//     /* s0 16 */ Instance *raz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_MoveIntoNewStreamUnit);

// /* 001615f8 0000020c */ StreamUnit* STREAM_LoadLevel(/* s3 19 */ char *baseAreaName, /* s5 21 */ StreamUnitPortal *streamPortal, /* a2 6 */ int loadnext) {
//     /* s4 20 */ int i;
//     /* 0x50(sp) */ int32 streamID;
//     /* s0 16 */ StreamUnit *streamUnit;
//     {
//         /* 0x0(sp) */ char dramName[80];
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_LoadLevel);

// /* 00161808 000000ac */ static void STREAM_RemoveInstancesWithIDInInstanceList(/* s4 20 */ InstanceList *list, /* s1 17 */ StreamUnit *streamUnit) {
//     /* s0 16 */ Instance *instance;
//     /* s3 19 */ Instance *next;
//     /* s2 18 */ int32 id;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_RemoveInstancesWithIDInInstanceList);

// /* 001618b8 00000080 */ static void STREAM_MarkUnitNeeded(/* a0 4 */ int32 streamID) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_MarkUnitNeeded);

// /* 00161938 000001a4 */ static void STREAM_DumpUnit(/* s1 17 */ StreamUnit *streamUnit, /* s3 19 */ int32 doSave) {
//     /* s0 16 */ int i;
//     /* v1 3 */ int j;
//     /* a0 4 */ StreamUnitPortal *streamPortal;
//     /* v0 2 */ int numportals;
//     /* 0x0(sp) */ char vramName[80];
//     {
//         /* 0x50(sp) */ char dramName[80];
//     }
//     {
//         /* a1 5 */ SFXMkr *sfxMkr;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpUnit);

// /* 00161ae0 00000078 */ static void STREAM_DumpAllUnitsNotNeeded() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpAllUnitsNotNeeded);

// /* 00161b58 00000084 */ void STREAM_DumpAllLevels(/* s2 18 */ int32 IDNoRemove, /* s1 17 */ int DoSave) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpAllLevels);

// /* 00161be0 0000016c */ void PreloadAllConnectedUnits(/* s4 20 */ StreamUnit *streamUnit, /* s3 19 */ Vector4f *offset) {
//     /* s1 17 */ int i;
//     /* 0x0(sp) */ char text[16];
//     /* s2 18 */ int numportals;
//     /* v0 2 */ char *commapos;
//     /* s0 16 */ StreamUnitPortal *stream;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", PreloadAllConnectedUnits);

// /* 00161d50 00000124 */ void RelocateLevel(/* s0 16 */ Level *level, /* s1 17 */ Vector4f *offset) {
//     /* a0 4 */ int curTree;
//     {
//         /* v0 2 */ Vector4f *result;
//         /* s1 17 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateLevel);

// /* 00161e78 00000110 */ static void RelocateCameras(/* a0 4 */ CameraKey *cameraList, /* a1 5 */ int32 numCameras, /* t0 8 */ Vector4f *offset) {
//     /* t1 9 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateCameras);

// /* 00161f88 00000090 */ static void RelocateSavedCameras(/* a0 4 */ Camera *camera, /* a1 5 */ Level *level, /* a2 6 */ Vector4f *offset) {
//     /* t0 8 */ int i;
//     {
//         /* a2 6 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* a2 6 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* a2 6 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
//     {
//         /* a2 6 */ Vector4f *v2;
//         {
//             /* BADREGISTER -1 */ Vector4fr temp;
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateSavedCameras);

// /* 00162018 0000002c */ void RelocateLevelWithInstances(/* a0 4 */ Level *level, /* s0 16 */ Vector4f *offset) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateLevelWithInstances);

// /* 00162048 000000d4 */ static void RelocateTerrain(/* s0 16 */ Terrain *terrain, /* s1 17 */ Vector4f *offset) {
//     /* s3 19 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateTerrain);

// /* 00162120 00000094 */ static void RelocateVMObjects(/* a0 4 */ VMObject *vobjectlist, /* a1 5 */ int32 numvmobjs, /* a2 6 */ Vector4f *offset) {
//     /* a1 5 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateVMObjects);

// /* 001621b8 00000080 */ static void RelocatePlanMarkers(/* a3 7 */ PlanMkr *planMkrList, /* a1 5 */ int numPlanMkrs, /* a2 6 */ Vector4f *offset) {
//     /* a1 5 */ int i;
//     /* t0 8 */ int16 ox;
//     /* a2 6 */ int16 oy;
//     /* t1 9 */ int16 oz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocatePlanMarkers);

// /* 00162238 00000080 */ static void RelocateSFXMarkers(/* a3 7 */ SFXMkr *sfxMkrList, /* a1 5 */ int numSFXMkrs, /* a2 6 */ Vector4f *offset) {
//     /* a1 5 */ int i;
//     /* t0 8 */ int16 ox;
//     /* a2 6 */ int16 oy;
//     /* t1 9 */ int16 oz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateSFXMarkers);

// /* 001622b8 000000cc */ static void STREAM_AdjustMultiSpline(/* a0 4 */ MultiSpline *multi, /* a1 5 */ Vector4f *offset) {
//     /* a1 5 */ int ox;
//     /* a3 7 */ int oy;
//     /* t0 8 */ int oz;
//     /* a2 6 */ int i;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_AdjustMultiSpline);

// /* 00162388 00000048 */ void STREAM_RelocateInstance(/* s0 16 */ Instance *instance, /* s1 17 */ Vector4f *offset) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_RelocateInstance);

// /* 001623d0 000000f8 */ void STREAM_OffsetInstancePosition(/* s0 16 */ Instance *instance, /* s1 17 */ Vector4f *offset, /* s2 18 */ int streamSignalFlag) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_OffsetInstancePosition);

// /* 001624c8 000000b4 */ void STREAM_SetInstancePosition(/* s2 18 */ Instance *instance, /* a1 5 */ evPositionData *data) {
//     /* 0x0(sp) */ Vector4f offset;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_SetInstancePosition);

// /* 00162580 00000058 */ static void RelocateInstances(/* s1 17 */ Vector4f *offset) {
//     /* s0 16 */ Instance *instance;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateInstances);

// /* 001625d8 000000e4 */ static void RelocateStreamPortals(/* t2 10 */ StreamUnitPortal *StreamUnitList, /* a1 5 */ int NumStreamUnits, /* a2 6 */ Vector4f *offset) {
//     /* v1 3 */ int i;
//     /* v1 3 */ int d;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", RelocateStreamPortals);

// /* 001626c0 0000013c */ static void AddVertex(/* a0 4 */ Vector4f *v0, /* t6 14 */ RECT_PSX *rect) {
//     /* 0x0(sp) */ Vector4f v;
//     /* f0 38 */ float scr_x;
//     /* f1 39 */ float scr_y;
//     /* f0 38 */ float ooz;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", AddVertex);

// /* 00162800 00000068 */ float STREAM_GetPlaneDist(/* a0 4 */ int k, /* a1 5 */ int j, /* a2 6 */ int i, /* a3 7 */ Vector4f *v) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetPlaneDist);

// /* 00162868 00000054 */ static void CalcVert(/* a0 4 */ Vector4f *v, /* a1 5 */ Vector4f *v1, /* a2 6 */ Vector4f *v2, /* f12 50 */ float dist1, /* f13 51 */ float dist2) {
//     /* f13 51 */ float mult;
//     /* f12 50 */ float diff;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", CalcVert);

// /* 001628c0 000002ac */ static void AddClippedTri(/* a0 4 */ Vector4f *iv0, /* a1 5 */ Vector4f *iv1, /* a2 6 */ Vector4f *iv2, /* 0x200(sp) */ RECT_PSX *cliprect) {
//     /* f20 58 */ float clip0;
//     /* f21 59 */ float clip1;
//     /* s5 21 */ int i;
//     /* s6 22 */ int j;
//     /* 0x204(sp) */ int k;
//     /* s7 23 */ int l;
//     /* s4 20 */ int l_1;
//     /* 0x208(sp) */ int numvert;
//     /* s3 19 */ int newnumvert;
//     /* 0x0(sp) */ Vector4f v0[16];
//     /* 0x100(sp) */ Vector4f v1[16];
//     /* fp 30 */ Vector4f *src;
//     /* 0x20c(sp) */ Vector4f *dst;
//     /* a0 4 */ Vector4f *tmp;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", AddClippedTri);

// /* 00162b70 0000016c */ int STREAM_GetClipRect(/* s3 19 */ StreamUnitPortal *portal, /* s2 18 */ RECT_PSX *rect) {
//     /* f0 38 */ float side;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetClipRect);

// /* 00162ce0 00000050 */ BSPTree* STREAM_GetBspTree(/* a0 4 */ StreamUnit *streamUnit, /* a1 5 */ int32 bspNumber) {
//     {
//         /* v0 2 */ Level *level;
//         /* v0 2 */ Terrain *terrain;
//         /* v1 3 */ int d;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_GetBspTree);

// /* 00162d30 000000bc */ void STREAM_DumpNonResidentObjects() {
//     /* s0 16 */ Instance *instance;
//     {
//         /* s2 18 */ Instance *next;
//         /* s1 17 */ Object *object;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_DumpNonResidentObjects);

// /* 00162df0 00000160 */ static int STREAM_TryAndDumpNonResident(/* s2 18 */ ObjectTracker *otr) {
//     /* s0 16 */ Instance *instance;
//     /* s1 17 */ Instance *next;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/stream", STREAM_TryAndDumpNonResident);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5378);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5380);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5388);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5390);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B53A8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B53D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B53D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B53E0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B53E8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B53F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B53F8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5400);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5408);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5410);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5418);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5420);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5428);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5430);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5438);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5440);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5448);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5450);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5458);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5460);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5470);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5480);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5490);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B54A0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B54B0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B54C0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B54C8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B54D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B54D8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B54E0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B54E8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B54F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B54F8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5508);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5518);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5528);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5538);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5548);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5550);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5558);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5568);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5578);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5580);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B55A0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B55D0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B55F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5640);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5698);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B56A0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B56C8);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B56F0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/stream", D_002B5728);
