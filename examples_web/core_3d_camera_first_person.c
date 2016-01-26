/*******************************************************************************************
*
*   raylib [core] example - Basic window (adapted for HTML5 platform)
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

#define MAX_COLUMNS 20

//----------------------------------------------------------------------------------
// Global Variables Definition
//----------------------------------------------------------------------------------
int screenWidth = 800;
int screenHeight = 450;

//Camera camera;
// Define the camera to look into our 3d world
Camera camera = {{ 0.0, 10.0, 10.0 }, { 0.0, 0.0, 0.0 }, { 0.0, 1.0, 0.0 }};

// Generates some random columns
float heights[MAX_COLUMNS];
Vector3 positions[MAX_COLUMNS];
Color colors[MAX_COLUMNS];

//Vector3 playerPosition;
Vector3 playerPosition = { 4, 2, 4 };       // Define player position


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
    InitWindow(screenWidth, screenHeight, "raylib [core] example - 3d camera first person");
    
    for (int i = 0; i < MAX_COLUMNS; i++)
    {
        heights[i] = (float)GetRandomValue(1, 12);
        positions[i] = (Vector3){ GetRandomValue(-15, 15), heights[i]/2, GetRandomValue(-15, 15) };
        colors[i] = (Color){ GetRandomValue(20, 255), GetRandomValue(10, 55), 30, 255 };
    }
    
    SetCameraMode(CAMERA_FIRST_PERSON);         // Set a first person camera mode

    SetTargetFPS(60);                           // Set our game to run at 60 frames-per-second
    
    
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
    UpdateCameraPlayer(&camera, &playerPosition); // Update camera and player position
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(RAYWHITE);

        Begin3dMode(camera);

            DrawPlane((Vector3){ 0, 0, 0 }, (Vector2){ 32, 32 }, LIGHTGRAY); // Draw ground
            DrawCube((Vector3){ -16, 2.5, 0 }, 1, 5, 32, BLUE);     // Draw a blue wall
            DrawCube((Vector3){ 16, 2.5, 0 }, 1, 5, 32, LIME);      // Draw a green wall
            DrawCube((Vector3){ 0, 2.5, 16 }, 32, 5, 1, GOLD);      // Draw a yellow wall
            
            // Draw some cubes around
            for (int i = 0; i < MAX_COLUMNS; i++)
            {
                DrawCube(positions[i], 2, heights[i], 2, colors[i]);
                DrawCubeWires(positions[i], 2, heights[i], 2, MAROON);
            }

        End3dMode();

        DrawText("First person camera default controls:", 20, 20, 10, GRAY);
        DrawText("- Move with keys: W, A, S, D", 40, 50, 10, DARKGRAY);
        DrawText("- Mouse move to look around", 40, 70, 10, DARKGRAY);


    EndDrawing();
    //----------------------------------------------------------------------------------
}