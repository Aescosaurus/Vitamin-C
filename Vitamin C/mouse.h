#ifndef MOUSE_H
#define MOUSE_H

#include "SDL.h"
#include "utils.h"

// Deal with mouse movement and clicking.
void handle_mouse_event( const SDL_Event* evt );
// Returns the current x position of the mouse.
int mouse_get_pos_x();
// Returns the current y position of the mouse.
int mouse_get_pos_y();
// Whether the left mouse button is clicked.  True if it is.
bool_t mouse_left_is_pressed();

#endif