
    void InitAudioDevice(void);                                             // Initialize audio device and context
    void CloseAudioDevice(void);                                            // Close the audio device and context (and music stream)

    Sound LoadSound(char *fileName);                                        // Load sound to memory
    Sound LoadSoundFromWave(Wave wave);                                     // Load sound to memory from wave data
    Sound LoadSoundFromRES(const char *rresName, int resId);                // Load sound to memory from rRES file (raylib Resource)
    void UnloadSound(Sound sound);                                          // Unload sound
    void PlaySound(Sound sound);                                            // Play a sound
    void PauseSound(Sound sound);                                           // Pause a sound
    void StopSound(Sound sound);                                            // Stop playing a sound
    bool SoundIsPlaying(Sound sound);                                       // Check if a sound is currently playing
    void SetSoundVolume(Sound sound, float volume);                         // Set volume for a sound (1.0 is max level)
    void SetSoundPitch(Sound sound, float pitch);                           // Set pitch for a sound (1.0 is base level)

    void PlayMusicStream(char *fileName);                                   // Start music playing (open stream)
    void UpdateMusicStream(void);                                           // Updates buffers for music streaming
    void StopMusicStream(void);                                             // Stop music playing (close stream)
    void PauseMusicStream(void);                                            // Pause music playing
    void ResumeMusicStream(void);                                           // Resume playing paused music
    bool MusicIsPlaying(void);                                              // Check if music is playing
    void SetMusicVolume(float volume);                                      // Set volume for music (1.0 is max level)
    float GetMusicTimeLength(void);                                         // Get current music time length (in seconds)
    float GetMusicTimePlayed(void);                                         // Get current music time played (in seconds)
    
