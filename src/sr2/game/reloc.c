/* Original path: C:\sr2\game\reloc.c */
/* .text 0x00169E20, .rodata 0x002B5BE0, .bss 0x01E94CC8 */

#include "common.h"

/* Globals of this unit (STABS). Their storage is still in asm/data, hence extern. */
/* bss 1e94cc8 */ extern uint32 lastHighAdj[16];
/* bss 1e94d08 */ extern int usedHighAdj[16];
/* bss 1e94d48 */ extern char *data;
/* bss 1e94d4c */ extern char *curptr;

// /* 00169e20 00000044 */ static void seek(/* a2 6 */ int offset, /* a1 5 */ int type) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/reloc", seek);

// /* 00169e68 00000088 */ static LPBYTE GetRelativeAddress(/* a3 7 */ PEHANDLE *pe, /* a1 5 */ DWORD dwAddress) {
//     /* a2 6 */ PESECTIONHEADER *lpSection;
//     /* a0 4 */ int n;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reloc", GetRelativeAddress);

// /* 00169ef0 000002f4 */ static LPPERELOCHEADER RelocatePage(/* s1 17 */ PEHANDLE *pe, /* s0 16 */ PERELOCHEADER *lpRelocTable, /* s5 21 */ int offset) {
//     /* s4 20 */ LPBYTE lpPage;
//     /* s2 18 */ LPWORD lpEntry;
//     /* s0 16 */ LPDWORD lpTarget;
//     /* s3 19 */ DWORD dwSize;
//     /* a0 4 */ WORD wType;
//     /* a1 5 */ WORD wOffset;
//     /* a1 5 */ int i;
//     {
//         /* a2 6 */ int32 addr;
//         /* s0 16 */ int16 *target16;
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reloc", RelocatePage);

// /* 0016a1e8 00000020 */ static void InvalidImport() {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/reloc", InvalidImport);

// /* 0016a208 00000138 */ static void ResolveImports(/* s2 18 */ PEHANDLE pe) {
//     /* pe: no type info */
//     /* s0 16 */ LPPEIMPORTTABLE lpImportDirectory;
//     /* s0 16 */ LPDWORD lpLookupTable;
//     /* s1 17 */ LPDWORD lpAddressTable;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reloc", ResolveImports);

// /* 0016a340 0000015c */ int MakePeHandle(/* a2 6 */ void *peData, /* s0 16 */ PEHANDLE *pe) {
//     /* a3 7 */ PESECTIONHEADER *lpSection;
//     /* t0 8 */ int n;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reloc", MakePeHandle);

// /* 0016a4a0 0000023c */ int RelocPE(/* a0 4 */ void *peData, /* s4 20 */ int offset) {
//     /* 0x0(sp) */ PEHANDLE pe;
//     /* s3 19 */ LPPERELOCHEADER lpRelocTable;
//     /* s2 18 */ DWORD dwRelocTableSize;
//     /* v0 2 */ int code;
//     /* v0 2 */ int i;
//     {
//         /* s0 16 */ PESECTIONHEADER *section;
//         /* s1 17 */ int n;
//         {
//             /* a0 4 */ int32 size;
//             /* v1 3 */ uint32 *ptr;
//             {
//                 /* a1 5 */ uint16 im;
//             }
//         }
//     }
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reloc", RelocPE);

// /* 0016a6e0 00000120 */ void* GetProcAddress(/* a0 4 */ void *peData, /* s5 21 */ char *lpszName) {
//     /* s2 18 */ LPPEEXPORTTABLE lpExportDirectory;
//     /* s1 17 */ LPDWORD lpNameTable;
//     /* s4 20 */ LPDWORD lpAddressTable;
//     /* s0 16 */ DWORD n;
//     /* 0x0(sp) */ PEHANDLE pe;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reloc", GetProcAddress);

// /* 0016a800 00000070 */ void RELOC_Relocate(/* s0 16 */ void *data, /* s1 17 */ int offset) {
//     /* v0 2 */ int code;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reloc", RELOC_Relocate);

// /* 0016a870 00000044 */ void* RELOC_GetEntry(/* a0 4 */ void *data) {
//     /* s0 16 */ void *entry;
// }
INCLUDE_ASM("asm/nonmatchings/sr2/game/reloc", RELOC_GetEntry);

// /* 0016a8b8 00000020 */ void* RELOC_GetDebugInfo(/* a0 4 */ void *data) {}
INCLUDE_ASM("asm/nonmatchings/sr2/game/reloc", RELOC_GetDebugInfo);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/reloc", D_002B5BE0);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/reloc", D_002B5C08);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/reloc", D_002B5C10);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/reloc", D_002B5C48);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/reloc", D_002B5C68);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/reloc", D_002B5C78);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/reloc", D_002B5C88);

INCLUDE_RODATA("asm/nonmatchings/sr2/game/reloc", D_002B5CB0);
