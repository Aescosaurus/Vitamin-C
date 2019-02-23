#ifndef MOUSE_H
#define MOUSE_H

#include "SDL.h"
#include "utils.h"

void handle_mouse_event( const SDL_Event* evt );
int mouse_get_pos_x();
int mouse_get_pos_y();
bool_t mouse_left_is_pressed();

#endif