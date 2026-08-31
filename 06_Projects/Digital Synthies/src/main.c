#include "raylib.h"
#include "screen_manager.h"

int main(void) {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic screen manager");

    Texture2D scr = LoadTexture("assets/scr.png");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        // Оновлення логіки
        switchScene();

        // Малювання
        BeginDrawing();
            ClearBackground(RAYWHITE);
            drawScene(scr, screenWidth, screenHeight);
        EndDrawing();
    }

    // Очищення ресурсів
    UnloadTexture(scr);
    CloseWindow();

    return 0;
}
