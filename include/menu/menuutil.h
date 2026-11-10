#ifndef MENU_MENUUTIL_H
#define MENU_MENUUTIL_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 2a65b8 */ extern menu_sound_entry_t the_menu_sounds[0];

/* Non-static functions of this unit (STABS signatures). */
menu_ctrl_t menu_get_ctrl(void);
void menu_print(int xpos, int ypos, char *text, int color);
int menu_text_width(char *text);
void menu_sound(menu_sound_t sound);

#endif /* MENU_MENUUTIL_H */
