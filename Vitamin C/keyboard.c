#include "keyboard.h"

bool_t key_press_states[128] = { FALSE };

void handle_keyboard_event( const SDL_Event* evt )
{
	const int key = evt->key.keysym.sym;
	if( key > 0 && key < 128 )
	{
		key_press_states[key] = ( evt->type == SDL_KEYDOWN );
	}
}

bool_t key_is_pressed( SDL_Keycode key )
{
	return( key_press_states[key] );
}
