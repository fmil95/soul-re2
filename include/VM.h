#ifndef VM_H
#define VM_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 25dfe0 */ extern int32 vmRealClock;
/* data 25dfe4 */ extern int32 vmClock;

/* Non-static functions of this unit (STABS signatures). */
void VM_Tick(int32 time);
void VM_VMObjectSetColor(Level *level, VMObject *vmobject);
void VM_ProcessVMObjectList(Level *level, CameraCore *cameraCore);
void VM_UpdateMorph(Level *level, int initFlg);
void VM_VMObjectSetTable(Level *level, VMObject *vmobject, int table);
void VM_VMObjectSetMaterialTable(Level *level, VMObject *vmobject, int table);
void VM_VMObjectSetSpectralTable(Level *level, VMObject *vmobject, int table);
VMObject*VM_FindVMOID(Level *level, int32 id);

#endif /* VM_H */
