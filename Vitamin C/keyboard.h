#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "SDL.h"
#include "utils.h"

// Check for key press and key release.
void handle_keyboard_event( const SDL_Event* evt );
// Check if a key is being pressed.  TRUE if key is down.
bool_t key_is_pressed( SDL_Keycode key );

#endif