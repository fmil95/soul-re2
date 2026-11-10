#ifndef SAVEINFO_H
#define SAVEINFO_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a6158 */ extern GlobalSaveTracker *GlobalSave;
/* data 2a615c */ extern int32 numbufferedIntros;
/* data 2a6160 */ extern int the_header_size;
/* data 2a6168 */ extern int32 SaveArraySize[8];
/* bss 1e9a8b0 */ extern SavedInfoTracker savedInfoTracker;
/* bss 1e9a8d0 */ extern SavedBasic *bufferSavedIntroArray[128];

/* Non-static functions of this unit (STABS signatures). */
void*SAVE_GetBuffer(void);
void SAVE_GetInstanceRotation(Instance *instance, Vector3f *vector);
void SAVE_ClearMemory(GameTracker *gameTracker);
void SAVE_Init(GameTracker *gt);
void*SAVE_GetSavedBlock(int32 saveType, int32 extraSize);
SavedIntro*SAVE_GetSavedIntro(Instance *instance);
SavedIntro*SAVE_UpdateSavedIntro(Instance *instance, Level *level, SavedIntro *savedIntro, evControlSaveDataData *extraData);
SavedIntroWithIntro*SAVE_UpdateSavedIntroWithIntro(Instance *instance, Level *level, SavedIntroWithIntro *savedIntro, evControlSaveDataData *extraData);
SavedBasic*SAVE_GetSavedEvent(int32 areaID, int32 eventNumber);
void SAVE_DeleteSavedEvent(int32 areaID, int32 eventNumber);
SavedBasic*SAVE_GetSavedNextEvent(int32 areaID, SavedBasic *curSave);
void SAVE_BufferIntro(SavedBasic *savedIntro);
void SAVE_IntroduceBufferIntros(void);
void SAVE_IntroForStreamID(StreamUnit *streamUnit);
SavedIntro*SAVE_HasSavedIntro(int32 uniqueID);
SavedLevel*SAVE_HasSavedLevel(int32 areaID);
void SAVE_UpdateLevelWithSave(StreamUnit *streamUnit);
SavedLevel*SAVE_CreatedSavedLevel(int32 areaID, Level *level);
void SAVE_DeleteBlock(SavedBasic *savedBlock);
void SAVE_Instance(Instance *instance, Level *level);
void SAVE_DeleteInstance(Instance *instance);
void SAVE_SetDeadDeadBit(int uniqueID, int32 set);
int32 SAVE_IsIntroDeadDead(Intro *intro);
void SAVE_DoInstanceDeadDead(Instance *instance);
void SAVE_MarkDeadDead(Instance *instance);
void SAVE_UndestroyInstance(Instance *instance);
SavedIntroSmall*SAVE_GetSavedSmallIntro(Instance *instance);
SavedIntroSpline*SAVE_GetIntroSpline(Instance *instance);
void SAVE_SaveGame(void);
void SAVE_RestoreGame(void);
void SAVE_DebugSaveGame(void);
void SAVE_DebugRestoreGame(void);
void SAVE_LoadSaveGame(void);
int32 SAVE_SizeOfFreeSpace(void);

#endif /* SAVEINFO_H */
