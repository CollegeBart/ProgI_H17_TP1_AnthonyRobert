#include "rectangle.h"



Rectangle::Rectangle()
	: x(0), y(0), width(0), height(0)
{
}


Rectangle::Rectangle(float x, float y, float width, float height)
	:x(x), y(y), width(width), height(height)
{
}

Rectangle::Rectangle(const Vector2D* const topLeft,const Vector2D* const btmRight)
	:width(topLeft->x - btmRight->x), height(topLeft->y - btmRight->y),
	x(topLeft->x), y(btmRight->y)
{
}

bool Rectangle::Contains(float x, float y) const
{
	if (this->x < x && this->y < y
		&& this->x + this->width > x
		&& this->y + this->height < y)
	{
		return true;
	}

	return false;
}

bool Rectangle::Contains(const Vector2D* const point)
{
	if (Contains(point->x, point->y)) 
	{
		return true;
	}
	return false;
}

void Rectangle::SetPosition(const Vector2D* vect)
{
	SetPosition(vect->x, vect->y);
}

void Rectangle::SetPosition(float x, float y)
	
{
	this->x = x;
	this->y = y;
}

void Rectangle::MoveBy(const Vector2D* const vect)
{
	this->x += vect->x;
	this->y += vect->y;
}

void Rectangle::MoveBy(const float x, const float y)
{
	this->x += x;
	this->y += y;
}

bool Rectangle::CollidesWith(const Rectangle* const rect) const
{
	if(this->Contains(rect->x, rect->y) || 
		this->Contains(rect->x + rect->width, rect->y) ||
		this->Contains(rect->x, rect->y - rect->width) ||
		this->Contains(rect->x + rect->width, rect->y - rect-> width))
		return true;

	return false;
}

