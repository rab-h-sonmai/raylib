
    Shader LoadShader(char *vsFileName, char *fsFileName);                                              // Load a custom shader and bind default locations
    void UnloadShader(Shader shader);                                                                   // Unload a custom shader from memory

    Shader GetDefaultShader(void);                                                                      // Get default shader
    Shader GetStandardShader(void);                                                                     // Get default shader
    Texture2D GetDefaultTexture(void);                                                                  // Get default texture

    int GetShaderLocation(Shader shader, const char *uniformName);                                      // Get shader uniform location
    void SetShaderValue(Shader shader, int uniformLoc, float *value, int size);                         // Set shader uniform value (float)
    void SetShaderValuei(Shader shader, int uniformLoc, int *value, int size);                          // Set shader uniform value (int)
    void SetShaderValueMatrix(Shader shader, int uniformLoc, Matrix mat);                               // Set shader uniform value (matrix 4x4)

    void SetMatrixProjection(Matrix proj);                                                              // Set a custom projection matrix (replaces internal projection matrix)
    void SetMatrixModelview(Matrix view);                                                               // Set a custom modelview matrix (replaces internal modelview matrix)

    void BeginShaderMode(Shader shader);                                                                // Begin custom shader drawing
    void EndShaderMode(void);                                                                           // End custom shader drawing (use default shader)
    void BeginBlendMode(int mode);                                                                      // Begin blending mode (alpha, additive, multiplied)
    void EndBlendMode(void);                                                                            // End blending mode (reset to default: alpha blending)
    
    void InitVrDevice(int hmdDevice);                                                                   // Init VR device
    void CloseVrDevice(void);                                                                           // Close VR device
    void UpdateVrTracking(void);                                                                        // Update VR tracking (position and orientation)
    void BeginVrDrawing(void);                                                                          // Begin VR drawing configuration
    void EndVrDrawing(void);                                                                            // End VR drawing process (and desktop mirror)
    bool IsVrDeviceReady(void);                                                                         // Detect if VR device (or simulator) is ready
    void ToggleVrMode(void);                                                                            // Enable/Disable VR experience (device or simulator)
    
