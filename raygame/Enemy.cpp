#include "Enemy.h"

Enemy::Enemy()
{
	health = 10;
}

Enemy::~Enemy()
{

}

int Enemy::attack()
{
	return 10;
}

void Enemy::takeDamage(int damage)
{
	health -= damage;	
}