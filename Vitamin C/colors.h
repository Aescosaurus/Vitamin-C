#ifndef COLORS_H
#define COLORS_H

#include "utils.h"
#include "SDL.h"

typedef Uint32 color_t;

// Initialize pixel format.
void init_colors( SDL_PixelFormat* pixel_format );

// Make rgb color with r(0-255), g(0-255), and b(0-255).
color_t make_rgb( uchar r,uchar g,uchar b );

#endif