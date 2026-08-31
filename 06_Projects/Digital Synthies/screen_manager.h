#ifndef SCREEN_MANAGER_H
#define SCREEN_MANAGER_H

#include "raylib.h"

// Оголошення екранів
typedef enum GameScreen {
    LOGO = 0,
    TITLE,
    GAMEPLAY,
    ENDING
} GameScreen;

// Глобальна змінна поточного екрану (доступна для всіх файлів)
extern GameScreen currentScreen;

// Прототипи функцій
void switchScene(void);
void drawScene(Texture2D scr, int screenWidth, int screenHeight);

#endif

