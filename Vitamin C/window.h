#ifndef WINDOW_H
#define WINDOW_H

#include "SDL.h"
#include "utils.h"
#include <stdio.h>

void create_window( const string_t title,int x,int y,
	int width,int height,bool_t fullscreen );

// Returns false when event queue has been exhausted.
bool_t handle_events();
void destroy_window();

bool_t window_is_open();
SDL_Renderer* get_renderer();
SDL_Event* window_get_event();

#endif