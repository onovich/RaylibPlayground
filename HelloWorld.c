#include "raylib.h"

int main(void) {
    int screenWidth = 800;
    int screenHeight = 450;

    InitWindow(screenWidth, screenHeight,
               "raylib [core] example - basic window");

    SetTargetFPS(60);

    // Detect window close button or ESC key
    while (!WindowShouldClose()) {
        // Update

        // Draw
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("HELLO WORLD!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    CloseWindow(); // Close window and OpenGL context

    return 0;
}