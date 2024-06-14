#include <stdio.h>
#include <stdlib.h>
#include "lib/raylib.h"


int main (int argc, char *argv[]) {


    char slot1;
    char slot2;
    char slot3;

    char *Slot1 = &slot1;
    char *Slot2 = &slot2;
    char *Slot3 = &slot3;

    const int ScreenWidth = 500;
    const int ScreenHeight = 500;


    InitWindow(ScreenWidth, ScreenHeight, "Stack Simulation");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);

        int OriginX = 200;
        int OriginY = 250;
        int OriginWidth = 100;
        int OriginHeight = 50;

        DrawRectangle(OriginX, OriginY, OriginWidth, OriginHeight, BLUE);
        DrawText(Slot1, 200, 250, 15, BLACK);

        DrawRectangle(OriginX, OriginY+50, OriginWidth, OriginHeight, PURPLE);
        DrawText(Slot2, 200, 300, 15, BLACK);

        DrawRectangle(OriginX, OriginY+100, OriginWidth, OriginHeight, RED);
        DrawText(Slot3, 200, 350, 15, BLACK);


        EndDrawing();
    }
    
    
    CloseWindow();
    return 0;
}