#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();	

	void takeDamage(int damage);
	void Update();
	void Movement();

protected:

	int attack();
	int health;
};

