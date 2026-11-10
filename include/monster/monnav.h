#ifndef MONSTER_MONNAV_H
#define MONSTER_MONNAV_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a54e0 */ extern MonsterWaypoint *waypointStore;
/* data 2a54e4 */ extern MonsterWaypoint *waypointList;
/* data 2a54e8 */ extern int32 searchCount;

/* Non-static functions of this unit (STABS signatures). */
int32 MON_InitMonsterNavigation(void);
void MON_CleanUpMonsterNavigation(void);
float MON_DistanceFromFacePlane(Vector4f *position, PlanData *data, PlanFace *face);
int32 MON_InsideBoundingBox(Vector4f *position, PlanPoint *min, PlanPoint *max);
int32 MON_InsidePlanFace(Vector4f *position, PlanData *data, PlanFace *face);
void MON_GenerateOctTreeBoundingBox(PlanPoint *min, PlanPoint *max, PlanPoint *middle, int32 oct, PlanPoint *lmin, PlanPoint *lmax);
PlanFace*MON_FindPlanFace(Vector4f *position, PlanData *data, PlanOctTree *tree, PlanPoint *min, PlanPoint *max);
void MON_CleanUpWaypointStore(void);
MonsterWaypoint*MON_GetNewWaypoint(void);
void MON_ReturnWaypoint(MonsterWaypoint *point);
MonsterWaypoint*MON_FindMinDistancePointPrevious(MonsterWaypoint *unexpandedHeader);
void MON_ProjectPointOnEdge(Vector4f *test, Vector4f *p0, Vector4f *p1, int32 bound, Vector4f *res);
void MON_FindReflectionPoint(PlanFace *face, int32 edge, Vector4f *start, Vector4f *end, PlanData *data, Vector4f *res);
int32 MON_ExpandWaypoint(MonsterWaypoint *toExpand, Vector4f *start, Vector4f *dest, PlanData *data, MonsterWaypoint *list);
int32 MON_FindPlanWaypoint(PlanFace *start, Vector4f *startPos, PlanFace *dest, Vector4f *destPos, PlanData *data, Vector4f *waypoint);
void MON_FindWaypoint(Instance *instance, Vector4f *destination, uint32 endUnit);

#endif /* MONSTER_MONNAV_H */
