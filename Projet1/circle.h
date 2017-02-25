#pragma once
#include "Vector2D.h"
class Circle {
public:
	Circle(float x, float y, float radius);
	Circle(const Vector2D* const center, const float radius);
	bool Contains(const float x, const float y) const;
	bool Contains(const Vector2D* const point) const;
	float GetX() { return x; }
	float GetY() { return y; }
	float GetRadiusSq();
	float GetRadius() { return radius; }
	void SetPosition(const Vector2D* vect);
	void SetPosition(float x, float y);
	void MoveBy(const Vector2D* const vect);
	void MoveBy(const float x, const float y);
	bool CollidesWith(const Circle* const circ) const;
private :
	float x, y, radius;
};
