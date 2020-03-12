#include "Game.h"
#include <raylib.h>

Game::Game(int X, int Y) 
{

	windowSizeX = X;
	windowSizeY = Y;

	InitWindow(X, Y, "Egg on Crack .5 1/2");
	SetTargetFPS(60);
}

Game::~Game() 
{

}
// This is where we will run the game
void Game::run() 
{

}