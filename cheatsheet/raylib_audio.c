
    void InitAudioDevice(void);                                             // Initialize audio device and context
    void CloseAudioDevice(void);                                            // Close the audio device and context (and music stream)
    bool IsAudioDeviceReady(void);                                          // Check if audio device is ready

    Sound LoadSound(char *fileName);                                        // Load sound to memory
    Sound LoadSoundFromWave(Wave wave);                                     // Load sound to memory from wave data
    Sound LoadSoundFromRES(const char *rresName, int resId);                // Load sound to memory from rRES file (raylib Resource)
    void UnloadSound(Sound sound);                                          // Unload sound
    void PlaySound(Sound sound);                                            // Play a sound
    void PauseSound(Sound sound);                                           // Pause a sound
    void StopSound(Sound sound);                                            // Stop playing a sound
    bool IsSoundPlaying(Sound sound);                                       // Check if a sound is currently playing
    void SetSoundVolume(Sound sound, float volume);                         // Set volume for a sound (1.0 is max level)
    void SetSoundPitch(Sound sound, float pitch);                           // Set pitch for a sound (1.0 is base level)

    int PlayMusicStream(int index, char *fileName);                         // Start music playing (open stream)
    void UpdateMusicStream(int index);                                      // Updates buffers for music streaming
    void StopMusicStream(int index);                                        // Stop music playing (close stream)
    void PauseMusicStream(int index);                                       // Pause music playing
    void ResumeMusicStream(int index);                                      // Resume playing paused music
    bool IsMusicPlaying(int index);                                         // Check if music is playing
    void SetMusicVolume(int index, float volume);                           // Set volume for music (1.0 is max level)
    void SetMusicPitch(int index, float pitch);                             // Set pitch for a music (1.0 is base level)
    float GetMusicTimeLength(int index);                                    // Get current music time length (in seconds)
    float GetMusicTimePlayed(int index);                                    // Get current music time played (in seconds)
    int GetMusicStreamCount(void);                                          // Get number of streams loaded
    
