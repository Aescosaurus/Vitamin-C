#include "graphics.h"

SDL_Renderer* gfx_renderer = NULL;
SDL_Surface* screen_surface = NULL;

void init_graphics( SDL_Renderer* rend )
{
	gfx_renderer = rend;

	const int r_mask = 0xff000000;
	const int g_mask = 0x00ff0000;
	const int b_mask = 0x0000ff00;
	const int a_mask = 0x000000ff;

	screen_surface = SDL_CreateRGBSurface( 0,
		ScreenWidth,ScreenHeight,32,
		r_mask,g_mask,b_mask,a_mask );

	SDL_LockSurface( screen_surface );
}

void begin_frame()
{
	SDL_RenderClear( gfx_renderer );
}

void end_frame()
{
	SDL_Texture* tex = SDL_CreateTextureFromSurface(
		gfx_renderer,screen_surface );

	SDL_RenderCopy( gfx_renderer,tex,NULL,NULL );

	SDL_DestroyTexture( tex );
	

	SDL_RenderPresent( gfx_renderer );
}

void free_graphics()
{
	SDL_FreeSurface( screen_surface );
}

void put_pixel( int x,int y,color_t c )
{
	Uint8* p = ( Uint8* )screen_surface->pixels +
		y * screen_surface->pitch +
		x * get_pixel_format()->BytesPerPixel;

	*( Uint32* )p = c;
}

SDL_PixelFormat* get_pixel_format()
{
	return( screen_surface->format );
}
