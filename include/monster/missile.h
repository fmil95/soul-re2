#ifndef MONSTER_MISSILE_H
#define MONSTER_MISSILE_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
Instance*MISSILE_Find(Instance *instance, Object *object, int32 segment);
Instance*MISSILE_Birth(Instance *instance, MonsterMissile *missiledef);
Instance*MISSILE_FireAtInstance(Instance *instance, MonsterMissile *missiledef, Instance *target);
Instance*MISSILE_FireAtPosition(Instance *instance, MonsterMissile *missiledef, Vector4f *position);
Instance*MISSILE_FireInDirection(Instance *instance, MonsterMissile *missiledef, Vector4f *direction);

#endif /* MONSTER_MISSILE_H */
