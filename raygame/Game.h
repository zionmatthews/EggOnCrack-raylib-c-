#pragma once
class Game
{
public:

	Game(int X, int Y);
	~Game();
	void run();

	int windowSizeX;
	int windowSizeY;

	char* name;

	bool gameover;
};

