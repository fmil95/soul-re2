#ifndef INSTANCE_H
#define INSTANCE_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25af00 */ extern int16 gInstanceIntroUniqueIDs[200];
/* data 25b0c0 */ extern int16 gInstanceCurrentStreamUnitIDs[200];

/* Non-static functions of this unit (STABS signatures). */
void INSTANCE_ClearTfaces(Instance *instance);
void INSTANCE_DeactivateFarInstances(GameTracker *gameTracker);
void INSTANCE_InitInstanceList(InstanceList *list, InstancePool *pool);
Instance*INSTANCE_NewInstance(InstanceList *list, Object *object);
int32 INSTANCE_InstanceGroupNumber(Instance *instance);
void INSTANCE_InsertInstanceGroup(InstanceList *list, Instance *instance);
void INSTANCE_AddInstance(InstanceList *list, Instance *instance);
void INSTANCE_ReallyRemoveInstance(InstanceList *list, Instance *instance, int32 reset);
void INSTANCE_CleanUpInstanceList(InstanceList *list, int32 reset);
int INSTANCE_Introduced(Intro *intro, int16 streamUnitID);
INICommand*INSTANCE_GetIntroCommand(INICommand *command, int cmd);
INICommand*INSTANCE_FindIntroCommand(Instance *instance, int cmd);
void INSTANCE_ProcessIntro(Instance *instance);
void INSTANCE_InitEffects(Instance *instance, Object *object, int32 mdlview);
Instance*INSTANCE_IntroduceInstance(Intro *intro, int16 streamUnitID);
void INSTANCE_AdditionalCollideFunctions(InstanceList *instanceList);
int32 INSTANCE_GetSplineFrameNumber(Instance *instance, MultiSpline *spline);
void INSTANCE_ProcessFunctions(InstanceList *instanceList);
void INSTANCE_StartFade(Instance *instance);
void INSTANCE_DoFade(Instance *instance);
Instance*INSTANCE_BirthObject(Instance *parent, Object *object, int modelNum);
Instance*INSTANCE_Birth(Instance *parent, int32 object_id, int modelNum);
void INSTANCE_BuildStaticShadow(Instance *instance);
void INSTANCE_DefaultInit(Instance *instance, Object *object, int modelNum);
void INSTANCE_PlainDeath(Instance *instance);
void INSTANCE_KillInstance(Instance *instance);
uint32 INSTANCE_Query(Instance *Inst, uint32 Query);
void INSTANCE_Post(Instance *Inst, int Message, int Data);
void INSTANCE_Broadcast(Instance *sender, int32 whatAmIMask, int Message, int Data);
void INSTANCE_BroadcastAll(int Message, int Data);
int INSTANCE_InPlane(Instance *instance, int plane);
int32 INSTANCE_SavedIntroduced(SavedIntro *savedIntro);
void INSTANCE_StripNameAndNumber(char *string, char *newString, int32 *number);
Instance*INSTANCE_FindWithName(int32 areaID, char *instanceName, Instance *startInstance);
Intro*INSTANCE_FindIntroWithNameFromLevel(Level *level, char *instanceName, int32 *index);
Intro*INSTANCE_FindIntro(int32 areaID, int32 introUniqueID);
Intro*INSTANCE_FindIntroUniqueID(int32 introUniqueID, int32 *streamUnitID);
Instance*INSTANCE_Find(int32 introUniqueID);
Instance*INSTANCE_IntroduceSavedInstance(SavedIntro *savedIntro, StreamUnit *streamUnit, int *deleted);
Instance*INSTANCE_IntroduceSavedInstanceWithIntro(SavedIntroWithIntro *savedIntro, StreamUnit *streamUnit, int *deleted);
Instance*INSTANCE_GetFromHandle(InstanceHandle *handle);
void INSTANCE_SetHandle(InstanceHandle *handle, Instance *instance);
Instance*INSTANCE_ValidateWithID(Instance *instance, int32 id);
void INSTANCE_SpatialRelationships(InstanceList *instanceList);
int INSTANCE_SetStatsData(Instance *instance, Instance *checkee, Vector4f *checkPoint, evCollideInstanceStatsData *data, float *mat[4]);
void INSTANCE_RelativePosition(Instance *origin, Instance *instance, Vector4f *outPos);
void INSTANCE_RelativePositionInstance(Instance *origin, Vector4f *instancePos, Vector4f *outPos);
void INSTANCE_RelativePositionIntro(Intro *origin, Vector4f *instancePos, Vector4f *outPos);
void INSTANCE_LinkToParent(Instance *instance, Instance *parent, int node);
void INSTANCE_LinkToParentMarker(Instance *instance, Instance *parent, int marker);
void INSTANCE_DynamicLinkToParentMarker(Instance *instance, Instance *parent, int segment);
void INSTANCE_UnlinkFromParent(Instance *instance);
void INSTANCE_UnlinkChildren(Instance *instance);
void INSTANCE_UpdateFamilyStreamUnitID(Instance *instance);
void INSTANCE_ReallyRemoveAllChildren(Instance *instance);
Instance*INSTANCE_GetChildLinkedToSegment(Instance *instance, int segment);
Instance*INSTANCE_GetChildLinkedToMarker(Instance *instance, int marker);
int INSTANCE_Linked(Instance *instance1, Instance *instance2);
int INSTANCE_GetFadeValue(Instance *instance);
int32 INSTANCE_DefaultAnimCallback(G2Anim *anim, G2AnimSectionID sectionID, G2AnimCallbackMsg message, int32 messageDataA, int32 messageDataB, void *data);
void INSTANCE_SetModel(Instance *instance, int model);
void INSTANCE_SetCurrentStreamUnitID(Instance *instance, int id);
void INSTANCE_HideAllDrawGroups(Instance *instance);
void INSTANCE_UnhideAllDrawGroups(Instance *instance);
void INSTANCE_HideAllFXDrawGroups(Instance *instance);
void INSTANCE_UnhideAllFXDrawGroups(Instance *instance);
void INSTANCE_MatchDrawGroups(Instance *src, Instance *dest);
void INSTANCE_HideUnhideDrawGroup(Instance *instance, int drawGroup, int on);
void INSTANCE_HideUnhideFXDrawGroup(Instance *instance, int drawGroup, int on);

#endif /* INSTANCE_H */
