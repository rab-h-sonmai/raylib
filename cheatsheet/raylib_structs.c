
    struct Color;       // Color type, RGBA (32bit)
    struct Rectangle;   // Rectangle type
    struct Image;       // Image type (multiple data formats supported)
                        // NOTE: Data stored in CPU memory (RAM)               
    struct Texture2D;   // Texture2D type (multiple internal formats supported)
                        // NOTE: Data stored in GPU memory (VRAM)
    struct SpriteFont;  // SpriteFont type, includes texture and chars data
    struct Vector2;     // Vector2 type
    struct Vector3;     // Vector3 type
    struct Matrix;      // Matrix type (OpenGL style 4x4)
    struct Camera;      // Camera type, defines camera position/orientation
    struct Mesh;        // Vertex data definning a mesh
    struct Shader;      // Shader type (generic shader)
    struct Material;    // Material type
    struct Model;       // Basic 3d Model type
    struct Ray;         // Ray type (useful for raycast)
    struct Wave;        // Wave type, defines audio wave data
    struct Sound;       // Basic Sound source and buffer
    
