/*******************************************************************************************
*
*   raylib [core] example - Mouse input (adapted for HTML5 platform)
*
*   This example is prepared to compile for PLATFORM_WEB, PLATFORM_DESKTOP and PLATFORM_RPI
*   As you will notice, code structure is slightly diferent to the other examples...
*   To compile it for PLATFORM_WEB just uncomment #define PLATFORM_WEB at beginning
*
*   This example has been created using raylib 1.3 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2015 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

#if defined(PLATFORM_WEB)
    #include <emscripten/emscripten.h>
#endif

//----------------------------------------------------------------------------------
// Global Variables Definition
//----------------------------------------------------------------------------------
int screenWidth = 800;
int screenHeight = 450;

Vector2 ballPosition = { 100, 100 };
Color ballColor = GREEN;

//----------------------------------------------------------------------------------
// Module Functions Declaration
//----------------------------------------------------------------------------------
void UpdateDrawFrame(void);     // Update and Draw one frame

//----------------------------------------------------------------------------------
// Main Enry Point
//----------------------------------------------------------------------------------
int main()
{
    // Initialization
    //--------------------------------------------------------------------------------------
    InitWindow(screenWidth, screenHeight, "raylib [core] example - mouse input");
    
#if defined(PLATFORM_WEB)
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------
    
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        UpdateDrawFrame();
    }
#endif

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

//----------------------------------------------------------------------------------
// Module Functions Definition
//----------------------------------------------------------------------------------
void UpdateDrawFrame(void)
{
    // Update
    //----------------------------------------------------------------------------------
    
    if (IsMouseButtonDown(MOUSE_RIGHT_BUTTON))
    {
        ballPosition = GetMousePosition();
    }
    
    if (IsKeyDown(KEY_LEFT_SHIFT)) ballColor = RED;
    else ballColor = GREEN;
    /*
    if (IsGestureDetected())
    {
        printf("Gesture detected: %i\n", GetGestureType());
        
        if (GetGestureType() == GESTURE_TAP)
        {
            ballPosition = GetTouchPosition();
            
            printf("Touch position: (%i, %i)\n", (int)ballPosition.x, (int)ballPosition.y);
            
            printf("Screen size: (%i, %i)\n", GetScreenWidth(), GetScreenHeight());
        }
    }
    */
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawCircleV(ballPosition, 40, ballColor);

        DrawText("mouse click to draw the ball", 10, 10, 20, LIGHTGRAY);

    EndDrawing();
    //----------------------------------------------------------------------------------
}