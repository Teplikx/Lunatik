#ifndef SCREEN_MANAGER_H
#define SCREEN_MANAGER_H

#include "raylib.h"

typedef enum GameScreen {
    LOGO = 0,
    TITLE,
    GAMEPLAY,
    ENDING
} GameScreen;

extern GameScreen currentScreen;

void switchScene(void);
void drawScene(Texture2D scr, int screenWidth, int screenHeight);

#endif
