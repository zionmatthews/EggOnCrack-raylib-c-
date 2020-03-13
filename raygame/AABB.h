#pragma once
#include "Actor.h"
class AABB : public Actor
{

public: 

	void DrawHitBoxes();
	void Draw() override;

	float Top();
	float Bottom();
	float Left();
	float Right();

	AABB(float width, float height);

	Color color = RED;

	float Width;
	float Height;

	static bool canDrawHitbox;

	bool DetectCollision(AABB other);
	


};
