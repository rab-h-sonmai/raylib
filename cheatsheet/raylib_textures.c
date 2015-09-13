
    Image LoadImage(const char *fileName);                                                             // Load an image into CPU memory (RAM)
    Image LoadImageEx(Color *pixels, int width, int height);                                           // Load image data from Color array data (RGBA - 32bit)
    Image LoadImageRaw(const char *fileName, int width, int height, int format, int headerSize);       // Load image data from RAW file
    Image LoadImageFromRES(const char *rresName, int resId);                                           // Load an image from rRES file (raylib Resource)
    Texture2D LoadTexture(const char *fileName);                                                       // Load an image as texture into GPU memory
    Texture2D LoadTextureEx(void *data, int width, int height, int textureFormat, int mipmapCount);    // Load a texture from raw data into GPU memory
    Texture2D LoadTextureFromRES(const char *rresName, int resId);                                     // Load an image as texture from rRES file (raylib Resource)
    Texture2D LoadTextureFromImage(Image image);                                                       // Load a texture from image data
    void UnloadImage(Image image);                                                                     // Unload image from CPU memory (RAM)
    void UnloadTexture(Texture2D texture);                                                             // Unload texture from GPU memory
    Color *GetImageData(Image image);                                                                  // Get pixel data from image as a Color struct array
    Image GetTextureData(Texture2D texture);                                                           // Get pixel data from GPU texture and return an Image
    void ImageConvertToPOT(Image *image, Color fillColor);                                             // Convert image to POT (power-of-two)
    void ImageConvertFormat(Image *image, int newFormat);                                              // Convert image data to desired format
    void GenTextureMipmaps(Texture2D texture);                                                         // Generate GPU mipmaps for a texture

    void DrawTexture(Texture2D texture, int posX, int posY, Color tint);                               // Draw a Texture2D
    void DrawTextureV(Texture2D texture, Vector2 position, Color tint);                                // Draw a Texture2D with position defined as Vector2
    void DrawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint);  // Draw a Texture2D with extended parameters
    void DrawTextureRec(Texture2D texture, Rectangle sourceRec, Vector2 position, Color tint);         // Draw a part of a texture defined by a rectangle
    void DrawTexturePro(Texture2D texture, Rectangle sourceRec, Rectangle destRec, Vector2 origin,     // Draw a part of a texture defined by a rectangle with 'pro' parameters
                        float rotation, Color tint);

