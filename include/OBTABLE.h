#ifndef OBTABLE_H
#define OBTABLE_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25bb70 */ extern ObjectAccess objectAccess[0];

/* Non-static functions of this unit (STABS signatures). */
void OBTABLE_InstanceInit(Instance *instance);
void OBTABLE_GetInstanceCollideFunc(Instance *instance);
void OBTABLE_GetInstanceAdditionalCollideFunc(Instance *instance);
void OBTABLE_GetInstanceProcessFunc(Instance *instance);
void OBTABLE_GetInstanceQueryFunc(Instance *instance);
void OBTABLE_GetInstanceMessageFunc(Instance *instance);
void OBTABLE_InitObjectWithID(Object *object);
void OBTABLE_SetObjectAccess(Object *object);
void OBTABLE_ClearObjectReferences(void);
void OBTABLE_RemoveObjectEntry(Object *object);
Object*OBTABLE_FindObject(char *objectName);
void OBTABLE_ChangeObjectAccessPointers(Object *oldObject, Object *newObject);
void OBTABLE_RelocateObjectTune(Object *object, int32 offset);
void OBTABLE_RelocateInstanceObject(Instance *instance, int32 offset);
void OBTABLE_InitAnimPointers(ObjectTracker *objectTracker);

#endif /* OBTABLE_H */
