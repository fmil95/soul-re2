#ifndef STREAM_H
#define STREAM_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25c340 */ extern STracker StreamTracker;
/* data 25c5e8 */ extern char onlyMonsterArg[512];
/* data 25c7e8 */ extern char *onlyMonsterList[20];

/* Non-static functions of this unit (STABS signatures). */
void STREAM_AbortAreaLoad(char *baseAreaName);
void STREAM_Init(void);
int FindObjectName(char *name);
ObjectTracker*STREAM_FindObjectInTracker(Object *object);
void STREAM_ReportCurrentObjects(void);
void STREAM_LoadObjectReturn(void *loadData, void *data, void *data2);
void STREAM_DumpMonster(ObjectTracker *dumpee);
void STREAM_DumpSomeMonsters(void);
void STREAM_NoMonsters(void);
void STREAM_YesMonsters(void);
void STREAM_MakeOnlyMonsterList(void);
int STREAM_IsMonster(char *name);
void STREAM_DumpAMonster(int needed);
int STREAM_TryAndDumpANonResidentObject(void);
int InsertGlobalObject(char *name, GameTracker *gameTracker);
void*STREAM_GetGlobalObject(char *name);
ObjectTracker*STREAM_GetObjectTracker(char *name);
void STREAM_StreamLoadObjectAbort(void *loadData, void *data, void *data2);
void STREAM_DumpLoadingObjects(void);
void STREAM_DumpObject(ObjectTracker *objectTracker);
void RemoveAllObjects(GameTracker *gameTracker);
Level*STREAM_GetLevelWithID(int32 id);
StreamUnit*STREAM_GetStreamUnitWithID(int32 id);
StreamUnit*STREAM_GetStreamUnitWithName(char *name);
void STREAM_CalculateWaterLevel(Level *level);
int STREAM_IsMorphInProgress(void);
float STREAM_GetWaterZLevel(Level *level, Instance *instance);
void STREAM_ConnectStream(StreamUnit *streamUnit);
void STREAM_StreamLoadLevelAbort(void *loadData, void *data, void *data2);
void STREAM_FinishLoad(StreamUnit *streamUnit);
void STREAM_LoadLevelReturn(void *loadData, void *data, void *data2);
void STREAM_StreamLoadLevelReturn(void *loadData, void *data, void *data2);
void STREAM_UpdateLevelPointer(Level *oldLevel, Level *newLevel, int32 sizeOfLevel);
StreamUnit*STREAM_WhichUnitPointerIsIn(void *pointer);
void STREAM_UpdateObjectPointer(Object *oldObject, Object *newObject, int32 sizeOfObject);
void STREAM_UpdateInstanceCollisionInfo(HModel *oldHModel, HModel *newHModel);
void STREAM_MoveObjectSoundPointers(Object *oldObject, int32 sizeOfObject, int32 offset);
void STREAM_MoveIntoNewStreamUnit(void);
StreamUnit*STREAM_LoadLevel(char *baseAreaName, StreamUnitPortal *streamPortal, int loadnext);
void STREAM_DumpAllLevels(int32 IDNoRemove, int DoSave);
void PreloadAllConnectedUnits(StreamUnit *streamUnit, Vector4f *offset);
void RelocateLevel(Level *level, Vector4f *offset);
void RelocateLevelWithInstances(Level *level, Vector4f *offset);
void STREAM_RelocateInstance(Instance *instance, Vector4f *offset);
void STREAM_OffsetInstancePosition(Instance *instance, Vector4f *offset, int streamSignalFlag);
void STREAM_SetInstancePosition(Instance *instance, evPositionData *data);
float STREAM_GetPlaneDist(int k, int j, int i, Vector4f *v);
int STREAM_GetClipRect(StreamUnitPortal *portal, RECT_PSX *rect);
BSPTree*STREAM_GetBspTree(StreamUnit *streamUnit, int32 bspNumber);
void STREAM_DumpNonResidentObjects(void);

#endif /* STREAM_H */
