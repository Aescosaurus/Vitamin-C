#ifndef COLORS_H
#define COLORS_H

#include "utils.h"
#include "SDL_image.h"

typedef Uint32 color_t;

void init_colors( SDL_PixelFormat* pixel_format );

color_t make_rgb( uchar r,uchar g,uchar b );

#endif