#include "circle.h"





Circle::Circle(float x, float y, float radius)
	: x(x), y(y), radius(radius)
{
}

Circle::Circle(const Vector2D* const center, const float radius)
	:x(center->x), y(center->y), radius(radius)
{
}

bool Circle::Contains(const float x,const float y) const
{
	Vector2D r = { x,y };
	
	if (this->Contains(&r))
	{
		return true;
	}
	return false;
}

bool Circle::Contains(const Vector2D* const point) const
{
	float x = this->x - point->x;
	float y = this->y - point->y;
	Vector2D result = { x,y };
	float add = Length(&result);
	if (add < this->radius)
		return true;

	return false;
}

float Circle::GetRadiusSq()
{
	sqrt(radius);
	return radius;
}


void Circle::SetPosition(const Vector2D* vect)
{
	SetPosition(vect->x, vect->y);
}

void Circle::SetPosition(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Circle::MoveBy(const Vector2D* const vect)
{
	this->x += vect->x;
	this->y += vect->y;
}

void Circle::MoveBy(const float x,const float y)
{
	this->x += x;
	this->y += y;
}

bool Circle::CollidesWith(const Circle* const circ) const
{
	if (this->Contains(circ->x, circ->y) ||
		this->Contains(circ->x + circ->radius, circ->y) ||
		this->Contains(circ->x, circ->y + circ->radius) ||
		this->Contains(circ->x + circ->radius, circ->y + circ->radius))
	{
		return true;
	}
	return false;
}
