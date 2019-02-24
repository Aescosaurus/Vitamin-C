#ifndef WINDOW_H
#define WINDOW_H

#include "SDL.h"
#include "utils.h"
#include <stdio.h>

// Make the window that makes the whole program work.
void create_window( const string_t title,int x,int y,
	int width,int height,bool_t fullscreen );

// Returns false when event queue has been exhausted.
bool_t handle_events();
// Free memory possessed by window.
void destroy_window();

// Tells whether the window is open.  Returns TRUE if open.
bool_t window_is_open();
// Returns a pointer to the renderer.
SDL_Renderer* get_renderer();
// Returns a pointer to the latest event that was captured.
SDL_Event* window_get_event();

#endif