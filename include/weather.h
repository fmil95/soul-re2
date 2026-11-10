#ifndef WEATHER_H
#define WEATHER_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
int Weather_GetHeight(Level *level, Vector4f *pos);
int Weather_GetHeight_All(Level *level, Vector4f *pos);
int Weather_GetHeight_Drawn(Level *level, Vector4f *pos);
int Weather_GetHeight_DrawnShort(Level *level, SVector *pos);
void Weather_RelocatePtrs(Level *level, int offset);

#endif /* WEATHER_H */
