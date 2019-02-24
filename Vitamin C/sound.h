#ifndef SOUND_H
#define SOUND_H

#include "SDL_mixer.h"
#include "utils.h"

// TODO: Maybe use Mix_Music someday?
typedef Mix_Chunk sound_t;

void init_audio();
void exit_audio();

sound_t* create_sound( const char* path );
void free_sound( sound_t* sound );
void play_sound( sound_t* sound );

#endif