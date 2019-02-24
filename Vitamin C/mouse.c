#include "mouse.h"

int mouse_x_position = 0;
int mouse_y_position = 0;
bool_t mouse_left_down = FALSE;

void handle_mouse_event( const SDL_Event* evt )
{
	// If mouse is move update it's location.
	if( evt->type == SDL_MOUSEMOTION )
	{
		mouse_x_position = evt->motion.x;
		mouse_y_position = evt->motion.y;
	}

	// It's important to use an if else if here.
	if( evt->type == SDL_MOUSEBUTTONDOWN )
	{
		mouse_left_down = TRUE;
	}
	else if( evt->type == SDL_MOUSEBUTTONUP )
	{
		mouse_left_down = FALSE;
	}
}

int mouse_get_pos_x()
{
	return( mouse_x_position );
}

int mouse_get_pos_y()
{
	return( mouse_y_position );
}

bool_t mouse_left_is_pressed()
{
	return( mouse_left_down );
}
