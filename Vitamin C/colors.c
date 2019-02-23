#include "colors.h"

SDL_PixelFormat* colors_pixel_format = NULL;

void init_colors( SDL_PixelFormat* pixel_format )
{
	colors_pixel_format = pixel_format;
}

color_t make_rgb( uchar r,uchar g,uchar b )
{
	return( SDL_MapRGB( colors_pixel_format,r,g,b ) );
}
