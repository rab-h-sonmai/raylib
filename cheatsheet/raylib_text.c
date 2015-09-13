
    SpriteFont GetDefaultFont(void);                                                                   // Get the default SpriteFont
    SpriteFont LoadSpriteFont(const char *fileName);                                                   // Load a SpriteFont image into GPU memory
    void UnloadSpriteFont(SpriteFont spriteFont);                                                      // Unload SpriteFont from GPU memory

    void DrawText(const char *text, int posX, int posY, int fontSize, Color color);                    // Draw text (using default font)
    void DrawTextEx(SpriteFont spriteFont, const char* text, Vector2 position,                         // Draw text using SpriteFont and additional parameters
                    int fontSize, int spacing, Color tint);
    int MeasureText(const char *text, int fontSize);                                                   // Measure string width for default font
    Vector2 MeasureTextEx(SpriteFont spriteFont, const char *text, int fontSize, int spacing);         // Measure string size for SpriteFont

    void DrawFPS(int posX, int posY);                                                                  // Shows current FPS on top-left corner
    const char *FormatText(const char *text, ...);                                                     // Formatting of text with variables to 'embed'

