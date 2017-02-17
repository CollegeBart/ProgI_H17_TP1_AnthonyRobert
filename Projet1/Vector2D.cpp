#include "Vector2D.h"

Vector2D Add(const Vector2D* const left,const Vector2D* const right)
{
	Vector2D v;
	v.x = left->x + right->x;
	v.y = left->y + right->y;
	return v;
}

Vector2D Substract(const Vector2D* const left, const Vector2D* const right)
{
	Vector2D v;
	v.x = left->x - right->x;
	v.y = left->y - right->y;
	return v;
}

Vector2D Scale(const Vector2D* vect, float scale)
{
	Vector2D v;
	v.x = vect->x *scale;
	v.y = vect -> y *scale;
	return v;
}

void MoveBy(const Vector2D* const by,Vector2D* const toMove)
{
	 *toMove = Add(by, toMove);	
}

float GetPolarAngleDeg(Vector2D vect)
{

	return 0.0f;
}

float AngleBetweenDeg(Vector2D left, Vector2D right)
{
	return 0.0f;
}

float Length(const Vector2D* vect)
{
	//math.sqrt(x*x + y*y)/2
	float longueur;
	return longueur = sqrt(LengthSq(vect));
}

float LengthSq(const Vector2D* vect)
{
	return  vect->x * vect->x + vect->y * vect->y;
}

bool Normalize(Vector2D vect)
{
	return false;
}

void ScaleBy(Vector2D vect, float scale)
{
}

Vector2D GetVectorByAngleDeg(float angle)
{
	return Vector2D();
}

bool Equals(const Vector2D* const left, const Vector2D* const right)
{
	return fabs(left->x - right->x) < EPSILON &&
		   fabs(left->y - right->y) < EPSILON;
}
