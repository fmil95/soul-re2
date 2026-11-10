#ifndef PS2_MEMCARD_MEMCARD_H
#define PS2_MEMCARD_MEMCARD_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a65e8 */ extern int mcport;
/* data 2a65ec */ extern int mcslot;
/* data 2a65f0 */ extern unsigned char *iconName[3];
/* data 2a6600 */ extern short unsigned int ascii_special[33][2];
/* data 2a6688 */ extern short unsigned int ascii_table[3][2];
/* data 2a6698 */ extern localstr_t save_name[0];
/* data 2a66a8 */ extern int frame;
/* bss 1e9b308 */ extern char dirBaseName[20];
/* bss 1e9b31c */ extern int gMemcardSaveSize;

/* Non-static functions of this unit (STABS signatures). */
uint16 Ascii2Sjis(unsigned char ascii_code);
void AsciiString2Sjis(uint8 *input, uint16 *output);
void MEMCARD_Init(void);
void MEMCARD_DisplayInfo(MemCardInfo *mcard);
void MEMCARD_Process(MemCardInfo *mcard);
int MEMCARDMENU_WaitExitLoad(int32 param);
int MEMCARDMENU_WaitExitSave(int32 param);
int MEMCARDMENU_WaitLoadFile(int32 param);
int do_memcard_load_menu(int32 param, menu_ctrl_t ctrl);
int wait_memcard_load_menu(int32 param);
int MEMCARDMENU_WaitSaveFile(int32 param);
int MEMCARDMENU_SaveMenu(int index);
void MEMCARDMENU_InitSaveMenu(void);
int do_memcard_save_menu(int32 param, menu_ctrl_t ctrl);
int wait_memcard_save_menu(int32 param);

#endif /* PS2_MEMCARD_MEMCARD_H */
