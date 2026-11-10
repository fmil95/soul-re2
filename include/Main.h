#ifndef MAIN_H
#define MAIN_H

#include "common.h"

/* Globals of this unit (STABS); their storage is still in asm/data. */
/* data 229e60 */ extern int nosound;
/* data 229e64 */ extern int nomusic;
/* data 229e68 */ extern int spectralStart;
/* data 229e70 */ extern InterfaceItem InterfaceItems[6];
/* data 229ff0 */ extern int32 DoMainMenu;
/* data 229ff4 */ extern int32 mainMenuMode;
/* data 229ff8 */ extern int32 *controlsScreen;
/* data 229ffc */ extern int16 mainMenuFadeInTime;
/* data 229ffe */ extern int16 mainMenuFading;
/* data 22a000 */ extern int gReaverDiags;
/* data 22a004 */ extern int gUseRealFont;
/* data 22a008 */ extern int gDebugHealthOn;
/* data 22a00c */ extern int32 gTextureArtistSwitch;
/* data 22a020 */ extern GameTracker gameTrackerX;
/* data 22a260 */ extern MainTracker mainTrackerX;
/* bss 30de08 */ extern char startUnit[32];
/* bss 30de28 */ extern int mainMenuSfx;

/* Non-static functions of this unit (STABS signatures). */
void InitMainTracker(MainTracker *mainTracker);
char*FindTextInLine(char *search_match, char *search_str);
void ExtractWorldName(char *worldName, char *levelName);
void ExtractLevelNum(char *levelNum, char *levelName);
int ProcessArgs(char *baseAreaName, GameTracker *gameTracker);
void MAIN_DoMainInit(void);
void MAIN_ResetGame(void);
void MAIN_FailAbort(char *fmt);
void MAIN_ImportantWarning(char *fmt);
void MAIN_MainMenuInit(void);
void MAIN_FreeMainMenuStuff(void);
void MAIN_ImageItemDisplay(InterfaceItem *item);
void MAIN_DoMainMenu(MainTracker *mainTracker);
void MAIN_DoAttractMode(MainTracker *mainTracker);
int MainG2(G2AppData *appData);
int32 MainTracker_IsGamePlaying(void);
int32 MainTracker_IsGamePaused(void);

#endif /* MAIN_H */
