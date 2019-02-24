#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "window.h"
#include "colors.h"

// Initialize graphics state.
void init_graphics( SDL_Renderer* rend );
// Call at the beginning of the frame.
void begin_frame();
// Present pixels to the screen.
void end_frame();
// Free memory related to graphics.
void free_graphics();

// Put a pixel with color c on the screen at x, y.
void put_pixel( int x,int y,color_t c );

// Get pixel format for color functions.
SDL_PixelFormat* get_pixel_format();
// Get the color of a pixel at (x, y) on the screen.
color_t get_pixel( int x,int y );

#define ScreenWidth 800
#define ScreenHeight 600

#endif