#include "screen_manager.h"

GameScreen currentScreen = LOGO;
static int framesCounter = 0;

void switchScene(void) {
    switch (currentScreen) {
        case LOGO: {
            framesCounter++;
            if (framesCounter > 120) { // 2 секунди
                currentScreen = TITLE;
            }
        } break;

        case TITLE: {
            if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP)) {
                currentScreen = GAMEPLAY;
            }
        } break;

        case GAMEPLAY: {
            if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP)) {
                currentScreen = ENDING;
            }
        } break;

        case ENDING: {
            if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP)) {
                currentScreen = TITLE;
            }
        } break;

        default: break;
    }
}

// Передаємо параметри ширини, висоти та текстури для малювання
void drawScene(Texture2D scr, int screenWidth, int screenHeight) {
    switch (currentScreen) {
        case LOGO: {
            DrawTexture(scr, 20, 40, RAYWHITE);
        } break;

        case TITLE: {
            DrawRectangle(0, 0, screenWidth, screenHeight, GREEN);
            DrawText("TITLE SCREEN", 20, 20, 40, DARKGREEN);
            DrawText("PRESS ENTER or TAP to JUMP to GAMEPLAY SCREEN", 120, 220, 20, DARKGREEN);
        } break;

        case GAMEPLAY: {
            DrawRectangle(0, 0, screenWidth, screenHeight, PURPLE);
            DrawText("GAMEPLAY SCREEN", 20, 20, 40, MAROON);
            DrawText("PRESS ENTER or TAP to JUMP to ENDING SCREEN", 130, 220, 20, MAROON);
        } break;

        case ENDING: {
            DrawRectangle(0, 0, screenWidth, screenHeight, BLUE);
            DrawText("ENDING SCREEN", 20, 20, 40, DARKBLUE);
            DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20, DARKBLUE);
        } break;

        default: break;
    }
}
