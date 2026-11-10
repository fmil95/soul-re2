#ifndef G2_MAING2_H
#define G2_MAING2_H

#include "common.h"

/* Non-static functions of this unit (STABS signatures). */
G2Bool MainG2_InitEngine(G2AppData *appData, unsigned int screenWidth, unsigned int screenHeight, char *filesystemName);
void MainG2_ShutDownEngine(G2AppData *appData);

#endif /* G2_MAING2_H */
