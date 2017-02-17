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

float GetPolarAngleDeg(const Vector2D* vect)
{
	return atan2(vect->y, vect->x) * 180 / PI;
}

float AngleBetweenDeg(const Vector2D* left, const Vector2D* right)
{
	return acos(left->x * right->x + left->y * right ->y) / (Length(left) * Length(right)) * 180 / PI                                                                                                                       ;
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

bool Normalize(Vector2D* const vect)
{
	if (Length(vect) != 0)
	{
		float length = Length(vect);
		vect->x = vect->x / length;
		vect->y = vect->y / length;
		return true;
	}
	else
		return false;
}


void ScaleBy(const Vector2D* vect, float const scale)
{
	Vector2D v;
	v = Scale(vect, scale);
}

Vector2D GetVectorByAngleDeg(float angle)
{
	Vector2D v;

	v.x = cos(angle);
	v.y = sin(angle);

	return v;
}

bool Equals(const Vector2D* const left, const Vector2D* const right)
{
	return fabs(left->x - right->x) < EPSILON &&
		   fabs(left->y - right->y) < EPSILON;
}
