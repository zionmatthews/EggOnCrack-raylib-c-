#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();	

	void takeDamage(int damage);
	void Update();
	void Movement();
	bool isDead();

protected:

	int attack();
	int health;
};

