#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();


	int attack();
	int health;
	void takeDamage(int damage);
};

