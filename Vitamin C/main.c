#include "SDL.h"
#include "window.h"
#include "graphics.h"
#include "colors.h"
#include "keyboard.h"
#include "mouse.h"
#include "sound.h"

int main( int argc,char* argv[] )
{
	const int fps = 60;
	const int frameDelay = 1000 / fps;
	
	Uint32 frameStart;
	int frameTime;

	// Create the actual window and initialize everything.
	create_window( "Vitamin C Framework!",
		SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,
		ScreenWidth,ScreenHeight,FALSE );

	init_graphics( get_renderer() );
	init_colors( get_pixel_format() );
	init_audio();

	while( window_is_open() )
	{
		frameStart = SDL_GetTicks();

		begin_frame();

		// Process events until there are none left.
		while( handle_events() )
		{
			handle_keyboard_event( window_get_event() );
			handle_mouse_event( window_get_event() );
		}
		
		// Some test code.
		if( mouse_left_is_pressed() )
		{
			color_t col = make_rgb( 255,255,255 );
			if( key_is_pressed( SDLK_SPACE ) )
			{
				col = make_rgb( 0,255,255 );
			}
		
			draw_rect( mouse_get_pos_x() - 15,
				mouse_get_pos_y() - 15,
				30,30,
				col );
		}

		end_frame();

		// Keep game running at desired framerate.
		frameTime = SDL_GetTicks() - frameStart;
		if( frameTime < frameDelay )
		{
			SDL_Delay( frameDelay - frameTime );
		}
	}

	// I want my gc... :(
	free_graphics();
	destroy_window();

	return( 0 );
}