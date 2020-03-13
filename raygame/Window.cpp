#include "Window.h"
#include "Game.h"
#include <raylib.h>

Window::Window(int X, int Y) 
{

	windowSizeX = X;
	windowSizeY = Y;

	InitWindow(X, Y, "Egg on Crack .5 and 1/2");
	SetTargetFPS(60);
}

Window::~Window() 
{

}
// This is where we will run the game
void Window::run() 
{
	while (!WindowShouldClose()) 
	{
		BeginDrawing();
		ClearBackground(BLACK);

		//Stuff will go here
		//Actor/Game
		Game game;
		EndDrawing();
	}
}