#include "SDL.h"
#include "window.h"
#include "graphics.h"
#include "colors.h"

int main( int argc,char* argv[] )
{
	// const int fps = 60;
	// const int frameDelay = 1000 / fps;
	// 
	// Uint32 frameStart;
	// int frameTime;
	// 
	// game = new Game();
	// 
	// game->init( "The Game!",
	// 	SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,
	// 	800,640,false );
	// 
	// while( game->running() )
	// {
	// 	frameStart = SDL_GetTicks();
	// 
	// 	game->handleEvents();
	// 	game->update();
	// 	game->render();
	// 
	// 	frameTime = SDL_GetTicks() - frameStart;
	// 
	// 	if( frameTime < frameDelay )
	// 	{
	// 		SDL_Delay( frameDelay - frameTime );
	// 	}
	// }
	// 
	// game->clean();

	create_window( "Vitamin C Framework!",
		SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,
		ScreenWidth,ScreenHeight,FALSE );

	init_graphics( get_renderer() );
	init_colors( get_pixel_format() );

	while( window_is_open() )
	{
		begin_frame();

		handle_events();
		put_pixel( 50,50,make_rgb( 0,255,255 ) );

		end_frame();
	}

	free_graphics();
	destroy_window();

	return( 0 );
}