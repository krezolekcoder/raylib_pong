/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with
raylib 1.0

*   Example licensed under an unmodified zlib/libpng license, which is an
OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2022 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
// gcc main.c -o game.exe -O1 -Wall -std=c99 -Wno-missing-braces -I include/ -L
// lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
// clang-format -i *.c
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

#define SCREEN_WIDTH  640
#define SCREEN_HEIGHT 480

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "raylib [core] example - basic window");

    //--------------------------------------------------------------------------------------

    SetTargetFPS(60);             // Set our game to run at 60 frames-per-second
                                  // Main game loop
    while (!WindowShouldClose())  // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(BLACK);

        DrawText("Congrats! You created your first window!", 190, 200, 20, WHITE);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();  // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}