#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "SDL.h"
#include "utils.h"

void handle_keyboard_event( SDL_Event evt );
bool_t key_is_pressed( SDL_Keycode key );

#endif