/*******************************************************************************************
*
*   raylib [core] example - Initialize 3d camera free (adapted for HTML5 platform)
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

// Define the camera to look into our 3d world
Camera camera = {{ 0.0, 10.0, 10.0 }, { 0.0, 0.0, 0.0 }, { 0.0, 1.0, 0.0 }};

Vector3 cubePosition = { 0.0, 0.0, 0.0 };


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
    InitWindow(screenWidth, screenHeight, "raylib [core] example - 3d camera free");
    
    SetCameraMode(CAMERA_FREE);         // Set a free camera mode
    SetCameraPosition(camera.position); // Set internal camera position to match our camera position
    SetCameraTarget(camera.target);     // Set internal camera target to match our camera target
    
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
     UpdateCamera(&camera);          // Update internal camera and our camera
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE);

        Begin3dMode(camera);

            DrawCube(cubePosition, 2, 2, 2, RED);
            DrawCubeWires(cubePosition, 2, 2, 2, MAROON);

            DrawGrid(10.0, 1.0);

        End3dMode();

        DrawText("Free camera default controls:", 20, 20, 10, GRAY);
        DrawText("- Mouse Wheel to Zoom in-out", 40, 50, 10, DARKGRAY);
        DrawText("- Mouse Wheel Pressed to Pan", 40, 70, 10, DARKGRAY);
        DrawText("- Alt + Mouse Wheel Pressed to Rotate", 40, 90, 10, DARKGRAY);
        DrawText("- Alt + Ctrl + Mouse Wheel Pressed for Smooth Zoom", 40, 110, 10, DARKGRAY);
        DrawText("- Z to zoom to (0, 0, 0)", 40, 130, 10, DARKGRAY);
        
        /* To test inputs keys
        if (IsKeyDown(KEY_LEFT_ALT)) DrawText("Alt is pressed", 40, 150, 10, DARKGRAY);
        if (IsKeyDown(KEY_LEFT_CONTROL)) DrawText("Control is pressed", 40, 170, 10, DARKGRAY);
        */
        
    EndDrawing();
    //----------------------------------------------------------------------------------
}