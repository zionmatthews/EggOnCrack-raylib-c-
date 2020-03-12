#include "Enemy.h"

Enemy::Enemy()
{
	//Enemy hp
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
	//Damage
	health -= damage;	
}

void Enemy::Update() 
{
	//Hitbox detection should be here
}

//Enemy movement function
void Enemy::Movement() 
{

}