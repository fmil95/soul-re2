#ifndef MONSTER_MONSENSE_H
#define MONSTER_MONSENSE_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a4b90 */ extern RadarInfo radarDir[8];
/* data 2a4c30 */ extern uint8 radarDirIndex[8];

/* Non-static functions of this unit (STABS signatures). */
void MONSENSE_RelocateCoords(Instance *instance, Vector4f *offset);
MonsterIR*MONSENSE_FindIR(Instance *instance, Instance *target);
MonsterIR*MONSENSE_FindFreeIR(Instance *instance);
void MONSENSE_PurgeOldestIR(Instance *instance);
MonsterIR*MONSENSE_FindClosestIR(Instance *instance, uint32 withFlags, uint32 withoutFlags);
MonsterIR*MONSENSE_FindBestLeader(Instance *instance);
int32 MONSENSE_SameIR(MonsterIR *mir, uint32 instanceID);
void MONSENSE_InitIRList(MonsterIR *list, int32 num);
void MONSENSE_SetInstanceCheckMask(Instance *instance, int32 start, int32 num);
void MONSENSE_SetupSenses(Instance *instance);
int32 MONSENSE_ShouldSenseInstanceSpecific(Instance *instance, uint32 whatAmI, int32 start, int32 num);
int32 MONSENSE_ShouldSenseInstance(Instance *instance, Instance *sensed);
void MONSENSE_SenseInstanceImmediate(Instance *instance, Instance *other);
void MONSENSE_SetMIRFlags(Instance *instance, MonsterIR *mir);
void MONSENSE_SenseInstance(Instance *instance, evCollideInstanceStatsData *data);
int32 MONSENSE_CheckAllegiance(Instance *instance, uint32 whatAmI, int32 start, int32 num);
void MONSENSE_SetAllegianceMirFlag(Instance *instance, MonsterIR *mir, uint32 whatAmI, int32 start, int32 num, uint32 flag);
void MONSENSE_SetupMIR(Instance *instance, evCollideInstanceStatsData *data, uint32 detected);
int32 MONSENSE_RadarCheckLine(Instance *instance, Vector4f *pos, float px, float py, float pr, float mx, float my, float mr);
void MONSENSE_DoRadar(Instance *instance, MonsterRadar *mr, Vector4f *pos);
void MONSENSE_Radar(Instance *instance);
float MONSENSE_GetClosestFreeDirection(Instance *instance, float angle, float range);
void MONSENSE_GetClosestFreeDirectionVector(Instance *instance, float angle, float range, int32 direction, Vector4f *res);
int32 MONSENSE_GetBitInDirection(float angle);
float MONSENSE_GetDistanceInDirectionFromRadar(MonsterRadar *mr, int32 bit);
float MONSENSE_GetDistanceInDirection(Instance *instance, float angle);
void MONSENSE_AdjustRadarFromObjects(Instance *instance, Instance *physob);
void MONSENSE_DoSenses(Instance *instance);
void MONSENSE_CheckEnemy(Instance *instance);
void MONSENSE_CheckAlly(Instance *instance);
void MONSENSE_CheckFood(Instance *instance);
void MONSENSE_CheckGod(Instance *instance);

#endif /* MONSTER_MONSENSE_H */
