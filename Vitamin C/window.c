#include "window.h"

SDL_Renderer* renderer = NULL;
SDL_Window* window = NULL;
SDL_Event window_event;
bool_t window_running = FALSE;

void create_window( const string_t title,int x,int y,
	int width,int height,bool_t fullscreen )
{
	int flags = 0;
	if( fullscreen ) flags = SDL_WINDOW_FULLSCREEN;

	if( SDL_Init( SDL_INIT_EVERYTHING ) == 0 )
	{
		printf( "(+) Subsystems initialized!\n" );

		window = SDL_CreateWindow( title,x,y,width,height,
			flags );
		if( window != NULL )
		{
			printf( "(+) Window created!\n" );
		}

		renderer = SDL_CreateRenderer( window,-1,0 );
		if( renderer != NULL )
		{
			SDL_SetRenderDrawColor( renderer,0,0,0,255 );
			printf( "(+) Renderer created!\n" );
		}

		window_running = TRUE;
	}
	else
	{
		window_running = FALSE;
	}
}

bool_t handle_events()
{
	bool_t result = SDL_PollEvent( &window_event );

	switch( window_event.type )
	{
	case SDL_QUIT:
		window_running = FALSE;
		break;
	}

	return( result );
}

void destroy_window()
{
	SDL_DestroyWindow( window );
	SDL_DestroyRenderer( renderer );

	printf( "(+) Window destroyed!\n" );

	SDL_Quit();
}

bool_t window_is_open()
{
	return( window_running );
}

SDL_Renderer* get_renderer()
{
	return( renderer );
}

SDL_Event* window_get_event()
{
	return( &window_event );
}
