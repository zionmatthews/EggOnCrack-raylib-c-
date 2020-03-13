#pragma once
#include "List.h"

class Player
{
public:
	Player();
	~Player();
	void takeDamage(int damage);
	void update();
	void movement();

private:

	int _health;
	int _attack;
	List<int>* ammo;
};