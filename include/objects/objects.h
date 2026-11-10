#ifndef OBJECTS_OBJECTS_H
#define OBJECTS_OBJECTS_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void BLOCK_Init(Instance *instance, GameTracker *gameTracker);
void BLOCK_Process(Instance *instance, GameTracker *gameTracker);
uint32 BLOCK_Query(Instance *instance, uint32 query);
int32 BLOCK_CheckSlide(Instance *instance, float x, float y, evPhysicsSlideData **data);
void SWITCH_Init(Instance *instance, GameTracker *gameTracker);
void SWITCH_Process(Instance *instance, GameTracker *gameTracker);
uint32 SWITCH_Query(Instance *instance, uint32 query);
void WEAPON_Init(Instance *instance, GameTracker *gameTracker);
uint32 WEAPON_NoHitQuery(Instance *instance, uint32 query);
uint32 WEAPON_Query(Instance *instance, uint32 query);
void WEAPON_Process(Instance *instance, GameTracker *gameTracker);
void WEAPON_Relocate(Object *object, int32 offset);
void WEAPON_Collide(Instance *instance, GameTracker *gameTracker);
int PROJECTILE_Absorb(Instance *instance, short int steps, Instance *force, int linkNode);
void INTERACT_Init(Instance *instance, GameTracker *gameTracker);
void INTERACT_Process(Instance *instance, GameTracker *gameTracker);
uint32 INTERACT_Query(Instance *instance, uint32 query);
void INTERACT_Relocate(Object *object, int32 offset);
uint32 INTERACT_WeaponQuery(Instance *instance, uint32 query);
void ANIMATE_Init(Instance *instance, GameTracker *gameTracker);
void ANIMATE_Process(Instance *instance, GameTracker *gameTracker);
uint32 ANIMATE_Query(Instance *instance, uint32 query);
void COLLECTIBLE_Init(Instance *instance, GameTracker *gameTracker);
void COLLECTIBLE_Process(Instance *instance, GameTracker *gameTracker);
uint32 COLLECTIBLE_Query(Instance *instance, uint32 query);
Instance*COLLECTIBLE_Birth(Instance *parent, int x, int y, int z, int type, int lifeTime);
void PUZZLE_Init(Instance *instance, GameTracker *gameTracker);
void PUZZLE_Process(Instance *instance, GameTracker *gameTracker);
uint32 PUZZLE_Query(Instance *instance, uint32 query);
void PUZZLE_Relocate(Object *object, int32 offset);
void PROJECTILE_Init(Instance *instance, GameTracker *gameTracker);
void PROJECTILE_Process(Instance *instance, GameTracker *gameTracker);
void PROJECTILE_Relocate(Object *object, int32 offset);
uint32 PROJECTILE_Query(Instance *instance, uint32 query);
void PROJECTILE_Collide(Instance *instance, GameTracker *gameTracker);
void MSWITCH_Init(Instance *instance, GameTracker *gameTracker);
uint32 MSWITCH_Query(Instance *instance, uint32 query);
void MSWITCH_Process(Instance *instance, GameTracker *gameTracker);
void ARMOR_Init(Instance *instance, GameTracker *gameTracker);
uint32 ARMOR_Query(Instance *instance, uint32 query);
void ARMOR_Process(Instance *instance, GameTracker *gameTracker);
void ObjectInit(Instance *instance, GameTracker *gameTracker);
void ObjectProcess(Instance *instance, GameTracker *gameTracker);
void ObjectCollide(Instance *instance, GameTracker *gameTracker);
void ObjectAdditionalCollide(Instance *instance, GameTracker *gameTracker);
uint32 ObjectQuery(Instance *instance, uint32 query);
void OBJ_Post(Instance *instance, uint32 message, uint32 data);
void ObjectRelocateTune(Object *object, int32 offset);
int32 OBJ_CheckObject(Instance *instance);
int32 OBJ_CheckFamily(Instance *instance, uint16 family);
int32 OBJ_CheckAbility(Instance *instance, uint16 ability);
ObjSplinter*OBJ_GetSplinter(Instance *instance);
void OBJ_TurnOffCollision(Instance *instance, int coll);
void OBJ_TurnOnCollision(Instance *instance, int coll);
evObjectBirthProjectileData*OBJ_BirthProjectile(Instance *parent, int joint, int type);
void OBJ_SetTrackingThrowDirection(Instance *instance, Instance *target, float speed);

#endif /* OBJECTS_OBJECTS_H */
