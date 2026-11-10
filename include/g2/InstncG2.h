#ifndef G2_INSTNCG2_H
#define G2_INSTNCG2_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a6030 */ extern G2AnimSegValue *_segValues;
/* bss 1e97200 */ extern G2AnimSegValue _segValuesStatic[128];

/* Non-static functions of this unit (STABS signatures). */
void G2Instance_BuildTransformsForList(Instance *listHead);
void G2Instance_BuildTransforms(Instance *instance);
void G2Instance_RebuildTransforms(Instance *instance);
G2AnimKeylist*G2Instance_GetKeylist(Instance *instance, G2AnimKeylistID id);
void G2Instance_NextKeyframe(Instance *instance);

#endif /* G2_INSTNCG2_H */
