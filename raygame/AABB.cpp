#include "AABB.h"
#include "raylib.h"

void AABB::Draw() 
{
	DrawHitBoxes();
}
//Needs Actor
float AABB::Top()
{
	return YAbsolute() - Height / 2;
}
//Needs Actor
float AABB::Bottom()
{
	return YAbsolute() + Height / 2;
}
//Needs Actor
float AABB::Left()
{
	return XAbsolute() - Height / 2;
}
//Needs Actor
float AABB::Right()
{
	return XAbsolute() + Height / 2;
}
//Needs Actor a little
AABB::AABB(float width, float height) 
{
	Width = width;
	Height = height;
	X = 0;
	Y = 0;
}

void AABB::DrawHitBoxes() 
{
	if (canDrawHitbox == true)
	{
		Rectangle rec;
		rec.x = Left();
		rec.y = Right();
		rec.width = Width;
		rec.height = Height;
		DrawRectangleLinesEx(rec, 5, color);
	}
	if (canDrawHitbox == false)
	{
		return;
	}
}


bool AABB::DetectCollision(AABB other) 
{
	if (Right >= other.Left && Bottom >= other.Top && Left <= other.Right && Top <= other.Bottom)
	{
		color = Color BLUE;
		return true;
	}
	color = Color RED;
	return false;

}
