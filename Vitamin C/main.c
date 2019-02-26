#include "SDL.h"
#include "window.h"
#include "graphics.h"
#include "colors.h"
#include "keyboard.h"
#include "mouse.h"
#include "sound.h"
#include "game.h"

int main( int argc,char* argv[] )
{
	const int fps = 60; // Target fps.
	const int frameDelay = 1000 / fps; // Help for math.
	
	Uint32 frameStart; // Start time of each frame.
	int frameTime; // Duration of each frame.

	// Create the actual window.
	create_window( "Vitamin C Framework!",
		SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,
		ScreenWidth,ScreenHeight,FALSE );

	// Initialize everything.
	init_graphics( get_renderer() );
	init_colors( get_pixel_format() );
	init_audio();

	initialize_game();

	while( window_is_open() )
	{
		frameStart = SDL_GetTicks();

		begin_frame(); // Begin the graphics frame.

		// Process events until there are none left.
		while( handle_events() )
		{
			handle_keyboard_event( window_get_event() );
			handle_mouse_event( window_get_event() );
		}

		update_model();
		compose_frame();

		end_frame(); // Present created frame to the screen.

		// Keep game running at desired framerate.
		frameTime = SDL_GetTicks() - frameStart;
		if( frameTime < frameDelay )
		{
			SDL_Delay( frameDelay - frameTime );
		}
	}

	// I want my gc... :(
	destruct_game();
	exit_audio();
	free_graphics();
	destroy_window();

	return( 0 );
}