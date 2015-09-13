
    Shader LoadShader(char *vsFileName, char *fsFileName);                                              // Load a custom shader and bind default locations
    unsigned int LoadShaderProgram(char *vShaderStr, char *fShaderStr);                                 // Load custom shaders strings and return program id
    void UnloadShader(Shader shader);                                                                   // Unload a custom shader from memory
    void SetPostproShader(Shader shader);                                                               // Set fullscreen postproduction shader
    void SetCustomShader(Shader shader);                                                                // Set custom shader to be used in batch draw
    void SetDefaultShader(void);                                                                        // Set default shader to be used in batch draw
    void SetModelShader(Model *model, Shader shader);                                                   // Link a shader to a model
    bool IsPosproShaderEnabled(void);                                                                   // Check if postprocessing shader is enabled

    int GetShaderLocation(Shader shader, const char *uniformName);                                      // Get shader uniform location
    void SetShaderValue(Shader shader, int uniformLoc, float *value, int size);                         // Set shader uniform value (float)
    void SetShaderValuei(Shader shader, int uniformLoc, int *value, int size);                          // Set shader uniform value (int)
    void SetShaderMapDiffuse(Shader *shader, Texture2D texture);                                        // Default diffuse shader map texture assignment
    void SetShaderMapNormal(Shader *shader, const char *uniformName, Texture2D texture);                // Normal map texture shader assignment
    void SetShaderMapSpecular(Shader *shader, const char *uniformName, Texture2D texture);              // Specular map texture shader assignment
    void SetShaderMap(Shader *shader, int mapLocation, Texture2D texture, int textureUnit);             // Generic shader map assignment

    void SetBlendMode(int mode);                                                                        // Set blending mode (alpha, additive, multiplied)
    
