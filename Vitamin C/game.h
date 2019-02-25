#ifndef GAME_H
#define GAME_H

// Initialize the game's state here.
void initialize_game();
// Update the game.  Called once every frame.
void update_model();
// Draw things in the game.  Also called once a frame.
void compose_frame();
// Free memory from game.
void destruct_game();
// ---------------User Functions Go Here---------------- //

// ----------------------------------------------------- //
#endif