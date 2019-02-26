#include "colors.h"

const SDL_PixelFormat* colors_pixel_format = NULL;

void init_colors( const SDL_PixelFormat* pixel_format )
{
	colors_pixel_format = pixel_format;
}

color_t make_rgb( uchar r,uchar g,uchar b )
{
	return( SDL_MapRGB( colors_pixel_format,r,g,b ) );
}

color_t color_white()
{
	return( make_rgb( 255,255,255 ) );
}

color_t color_black()
{
	return( make_rgb( 0,0,0 ) );
}

color_t color_gray()
{
	return( make_rgb( 127,127,127 ) );
}

color_t color_light_gray()
{
	return( make_rgb( 191,191,191 ) );
}

color_t color_dark_gray()
{
	return( make_rgb( 63,63,63 ) );
}

color_t color_red()
{
	return( make_rgb( 255,0,0 ) );
}

color_t color_yellow()
{
	return( make_rgb( 255,255,0 ) );
}

color_t color_green()
{
	return( make_rgb( 0,255,0 ) );
}

color_t color_cyan()
{
	return( make_rgb( 0,255,255 ) );
}

color_t color_blue()
{
	return( make_rgb( 0,0,255 ) );
}

color_t color_magenta()
{
	return( make_rgb( 255,0,255 ) );
}
