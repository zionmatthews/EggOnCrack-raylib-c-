#include "Player.h"

Player::Player()
{
	_health = 50;
	_attack = 10;
}


Player::~Player()
{
}

void Player::takeDamage(int damage)
{
	_health -= damage;
}

void Player::update()
{

}

void Player::movement()
{

}