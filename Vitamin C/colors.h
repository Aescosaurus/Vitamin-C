#ifndef COLORS_H
#define COLORS_H

#include "utils.h"
#include "SDL.h"

typedef Uint32 color_t;

// Initialize pixel format.
void init_colors( const SDL_PixelFormat* pixel_format );

// Make rgb color with r(0-255), g(0-255), and b(0-255).
color_t make_rgb( uchar r,uchar g,uchar b );

// List of pre made colors, feel free to add new ones here.
color_t color_white();
color_t color_black();
color_t color_gray();
color_t color_light_gray();
color_t color_dark_gray();
color_t color_red();
color_t color_yellow();
color_t color_green();
color_t color_cyan();
color_t color_blue();
color_t color_magenta();

#endif