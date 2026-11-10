#ifndef GENERIC_H
#define GENERIC_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void GenericInit(Instance *instance, GameTracker *gameTracker);
void GenericCollide(Instance *instance, GameTracker *gameTracker);
void GenericProcess(Instance *instance, GameTracker *gameTracker);
uint32 GenericQuery(Instance *instance, uint32 query);
void GenericMessage(Instance *instance, uint32 message, uint32 data);
void GenericRelocateTune(Object *object, int32 offset);

#endif /* GENERIC_H */
