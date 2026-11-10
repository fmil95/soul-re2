#ifndef RESOLVE_H
#define RESOLVE_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
void*RESOLVE_RelocBinaryData(int32 *data, int memType);
void RESOLVE_LoadCallback(void *data, int length, int memType, FILEREQUEST *filereq);
void RESOLVE_CancelCallback(FILEREQUEST *filereq);

#endif /* RESOLVE_H */
