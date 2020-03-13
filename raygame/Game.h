#pragma once
#include "Enemy.h"
#include "List.h"
#include "Player.h"

class Game
{
public:
	Game();
	~Game();

private:

	List<Enemy>* enemy;
	Player _player;
};