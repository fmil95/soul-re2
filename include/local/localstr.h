#ifndef LOCAL_LOCALSTR_H
#define LOCAL_LOCALSTR_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a6198 */ extern LocalizationHeader *LocalizationTable;
/* data 2a619c */ extern char **LocalStrings;
/* data 2a61a8 */ extern char ActiveBuildDir[32];
/* data 2a61c8 */ extern char ActiveBuildName[16];
/* bss 1e9aad0 */ extern language_t the_language;

/* Non-static functions of this unit (STABS signatures). */
language_t localstr_get_language(void);
void localstr_set_language(language_t lang);
char*localstr_get(localstr_t id);

#endif /* LOCAL_LOCALSTR_H */
