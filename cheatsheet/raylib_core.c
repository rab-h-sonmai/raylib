
    void InitWindow(int width, int height, char* title);                    // Initialize Window and Graphics Context (OpenGL)
    void CloseWindow(void);                                                 // Close Window and Terminate Context
    bool WindowShouldClose(void);                                           // Detect if KEY_ESCAPE pressed or Close icon pressed
    bool IsWindowMinimized(void);                                           // Detect if window has been minimized (or lost focus)
    void ToggleFullscreen(void);                                            // Fullscreen toggle (by default F11)
    void SetCustomCursor(const char *cursorImage);                          // Set a custom cursor icon/image
    void SetExitKey(int key);                                               // Set a custom key to exit program (default is ESC)
    int GetScreenWidth(void);                                               // Get current screen width
    int GetScreenHeight(void);                                              // Get current screen height

    void ClearBackground(Color color);                                      // Sets Background Color
    void BeginDrawing(void);                                                // Setup drawing canvas to start drawing
    void EndDrawing(void);                                                  // End canvas drawing and Swap Buffers (Double Buffering)

    void Begin3dMode(Camera cam);                                           // Initializes 3D mode for drawing (Camera setup)
    void End3dMode(void);                                                   // Ends 3D mode and returns to default 2D orthographic mode
    
    Ray GetMouseRay(Vector2 mousePosition, Camera camera);                  // Returns a ray trace from mouse position

    // Timming-related functions
    void SetTargetFPS(int fps);                                             // Set target FPS (maximum)
    float GetFPS(void);                                                     // Returns current FPS
    float GetFrameTime(void);                                               // Returns time in seconds for one frame

    // Color-related functions
    Color GetColor(int hexValue);                                           // Returns a Color struct from hexadecimal value
    int GetHexValue(Color color);                                           // Returns hexadecimal value for a Color

    // Misc. functions
    int GetRandomValue(int min, int max);                                   // Returns a random value between min and max (both included)
    Color Fade(Color color, float alpha);                                   // Color fade-in or fade-out, alpha goes from 0.0 to 1.0
    void SetConfigFlags(char flags);                                        // Setup some window configuration flags
    void ShowLogo(void);                                                    // Activates raylib logo at startup (can be done with flags)

    // Drag-and-drop files functions
    bool IsFileDropped(void);                                               // Check if a file have been dropped into window
    char **GetDroppedFiles(int *count);                                     // Retrieve dropped files into window
    void ClearDroppedFiles(void);                                           // Clear dropped files paths buffer
    
    // Input-related functions
    bool IsKeyPressed(int key);                                             // Detect if a key has been pressed once
    bool IsKeyDown(int key);                                                // Detect if a key is being pressed
    bool IsKeyReleased(int key);                                            // Detect if a key has been released once
    bool IsKeyUp(int key);                                                  // Detect if a key is NOT being pressed

    bool IsMouseButtonPressed(int button);                                  // Detect if a mouse button has been pressed once
    bool IsMouseButtonDown(int button);                                     // Detect if a mouse button is being pressed
    bool IsMouseButtonReleased(int button);                                 // Detect if a mouse button has been released once
    bool IsMouseButtonUp(int button);                                       // Detect if a mouse button is NOT being pressed
    int GetMouseX(void);                                                    // Returns mouse position X
    int GetMouseY(void);                                                    // Returns mouse position Y
    Vector2 GetMousePosition(void);                                         // Returns mouse position XY
    void SetMousePosition(Vector2 position);                                // Set mouse position XY
    int GetMouseWheelMove(void);                                            // Returns mouse wheel movement Y
    
    void ShowCursor(void);                                                  // Shows cursor
    void HideCursor(void);                                                  // Hides cursor
    bool IsCursorHidden(void);                                              // Check if cursor is not visible

    bool IsGamepadAvailable(int gamepad);                                   // Detect if a gamepad is available
    Vector2 GetGamepadMovement(int gamepad);                                // Return axis movement vector for a gamepad
    bool IsGamepadButtonPressed(int gamepad, int button);                   // Detect if a gamepad button has been pressed once
    bool IsGamepadButtonDown(int gamepad, int button);                      // Detect if a gamepad button is being pressed
    bool IsGamepadButtonReleased(int gamepad, int button);                  // Detect if a gamepad button has been released once
    bool IsGamepadButtonUp(int gamepad, int button);                        // Detect if a gamepad button is NOT being pressed
    
    int GetTouchX(void);                                                    // Returns touch position X (relative to screen size)
    int GetTouchY(void);                                                    // Returns touch position Y (relative to screen size)
    Vector2 GetTouchPosition(void);                                         // Returns touch position XY (relative to screen size)

