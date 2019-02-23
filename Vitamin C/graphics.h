#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "window.h"
#include "SDL_image.h"
#include "colors.h"

void init_graphics( SDL_Renderer* rend );
void begin_frame();
void end_frame();
void free_graphics();

void put_pixel( int x,int y,color_t c );
void draw_rect( int x,int y,int width,int height,color_t c );

SDL_PixelFormat* get_pixel_format();

#define ScreenWidth 800
#define ScreenHeight 600

#endif