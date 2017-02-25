#pragma once


#include "Vector2D.h"
class Rectangle {
public:
	Rectangle();
	Rectangle(float x, float y, float width, float height);
	Rectangle(const Vector2D* const topLeft, const Vector2D* const btmRight);
	bool Contains(float x, float y) const;
	bool Contains(const Vector2D* const point);
	float GetX() const { return x; }
	float GetY() const { return y; }
	float GetWidth() { return width; }
	float GetHeight() { return height; }
	void SetPosition(const Vector2D* vect);
	void SetPosition(float x, float y);
	void MoveBy(const Vector2D* const vect);
	void MoveBy(const float x,const float y);
	bool CollidesWith(const Rectangle* const rect) const;

private:
	float x ,y ,height ,width;
};