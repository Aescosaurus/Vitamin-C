#include "sound.h"
#include <stdio.h>

void init_audio()
{
	Mix_OpenAudio( MIX_DEFAULT_FREQUENCY,
		MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,2048 );
}

void exit_audio()
{
	Mix_Quit();
}

sound_t* create_sound( const string_t path )
{
	sound_t* temp_sound = Mix_LoadWAV( path );

	if( temp_sound == NULL )
	{
		printf( "(!) Failed to load sound from %s\n",path );
	}
	return( temp_sound );
}

void free_sound( sound_t* sound )
{
	Mix_FreeChunk( sound );
}

void play_sound( sound_t* sound )
{
	Mix_PlayChannel( -1,sound,FALSE );
}
