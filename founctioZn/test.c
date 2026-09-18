#include "raylib.h"

int main(void) {
    InitWindow(800, 600, "Raylib Test");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("Hello Raylib!", 300, 280, 30, WHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}