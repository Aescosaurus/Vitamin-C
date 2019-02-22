#include "SDL.h"
#include "window.h"

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
		800,600,FALSE );

	while( window_is_open() )
	{
		begin_frame();

		handle_events();

		end_frame();
	}

	return( 0 );
}