
    void DrawCube(Vector3 position, float width, float height, float lenght, Color color);             // Draw cube
    void DrawCubeV(Vector3 position, Vector3 size, Color color);                                       // Draw cube (Vector version)
    void DrawCubeWires(Vector3 position, float width, float height, float lenght, Color color);        // Draw cube wires
    void DrawCubeTexture(Texture2D texture, Vector3 position, float width, float height, float lenght, Color color);        // Draw cube textured
    void DrawSphere(Vector3 centerPos, float radius, Color color);                                     // Draw sphere
    void DrawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color);            // Draw sphere with extended parameters
    void DrawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color);         // Draw sphere wires
    void DrawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);        // Draw a cylinder/cone
    void DrawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);   // Draw a cylinder/cone wires
    void DrawPlane(Vector3 centerPos, Vector2 size, Color color);                                      // Draw a plane XZ
    void DrawQuad(Vector3 v1, Vector3 v2, Vector3 v3, Vector3 v4, Color color);                        // Draw a quad
    void DrawRay(Ray ray, Color color);                                                                // Draw a ray line
    void DrawGrid(int slices, float spacing);                                                          // Draw a grid (centered at (0, 0, 0))
    void DrawGizmo(Vector3 position);                                                                  // Draw simple gizmo
  
    Model LoadModel(const char *fileName);                                                             // Load a 3d model (.OBJ)
    Model LoadModelEx(VertexData data);                                                                // Load a 3d model (from vertex data)
    Model LoadModelFromRES(const char *rresName, int resId);                                           // Load a 3d model from rRES file (raylib Resource)
    Model LoadHeightmap(Image heightmap, float maxHeight);                                             // Load a heightmap image as a 3d model
    Model LoadCubicmap(Image cubicmap);                                                                // Load a map image as a 3d model (cubes based)
    void UnloadModel(Model model);                                                                     // Unload 3d model from memory
    void SetModelTexture(Model *model, Texture2D texture);                                             // Link a texture to a model

    void DrawModel(Model model, Vector3 position, float scale, Color tint);                            // Draw a model (with texture if set)
    void DrawModelEx(Model model, Vector3 position, float rotationAngle, Vector3 rotationAxis, Vector3 scale, Color tint); // Draw a model with extended parameters
    void DrawModelWires(Model model, Vector3 position, float scale, Color color);                      // Draw a model wires (with texture if set)

    void DrawBillboard(Camera camera, Texture2D texture, Vector3 center, float size, Color tint);                          // Draw a billboard texture
    void DrawBillboardRec(Camera camera, Texture2D texture, Rectangle sourceRec, Vector3 center, float size, Color tint);  // Draw a billboard texture defined by sourceRec

    bool CheckCollisionSpheres(Vector3 centerA, float radiusA, Vector3 centerB, float radiusB);                     // Detect collision between two spheres
    bool CheckCollisionBoxes(Vector3 minBBox1, Vector3 maxBBox1, Vector3 minBBox2, Vector3 maxBBox2);               // Detect collision between two boxes
    bool CheckCollisionBoxSphere(Vector3 minBBox, Vector3 maxBBox, Vector3 centerSphere, float radiusSphere);       // Detect collision between box and sphere
    Vector3 ResolveCollisionCubicmap(Image cubicmap, Vector3 mapPosition, Vector3 *playerPosition, float radius);   // Detect collision of player radius with cubicmap
    
