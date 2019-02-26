#ifndef SOUND_H
#define SOUND_H

#include "SDL_mixer.h"
#include "utils.h"

// TODO: Maybe use Mix_Music someday?
typedef Mix_Chunk sound_t;

// Initialize state related to audio.
void init_audio();
// Free audio related memory.
void exit_audio();

// Returns a pointer to a newly created sound at path.
//  Make sure to free it's memory when you're done.
sound_t* create_sound( const string_t path );
// Free memory from a sound.
void free_sound( sound_t* sound );
// Play a sound.
void play_sound( sound_t* sound );

#endif