#include "Vector3D.h"
#include "Constante.h"

Vector3D Add(const Vector3D * const left, const Vector3D * const right)
{
	Vector3D v;
	v.x = left->x + right->x;
	v.y = left->y + right->y;
	v.z = left->z + right->z;
	return v;
}

Vector3D Substract(const Vector3D * const left, const Vector3D * const right)
{
	Vector3D v;
	v.x = left->x - right->x;
	v.y = left->y - right->y;
	v.z = left->z - right->z;
	return v;
}

Vector3D Scale(const Vector3D * vect, float scale)
{
	Vector3D v;
	v.x = vect->x * scale;
	v.y = vect->y * scale;
	v.z = vect->z * scale;
	return v;
}

float Dot(const Vector3D * left, const Vector3D * right)
{
	return (left->x * right->x) + (left->y* right->y) + (left->z * right->z);
}

Vector3D CrossLH(const Vector3D * const left, const Vector3D * const right)
{

	return CrossRH(right, left);
}

Vector3D CrossRH(const Vector3D* const left,const Vector3D* const right)
{
	Vector3D v;
	v.x = (left->y * right->z) - (right->y * left->z);
	v.y = -((left->x * right->z) - (right->x * left->z));
	v.z = (left->x * right->y) - (right->x * left->y);
	return v;
}

void MoveBy(const Vector3D * const by,Vector3D * const tomove)
{
	*tomove = Add(by, tomove);
}

float Length(const Vector3D * vect)
{
	return sqrtf(LengthSq(vect));
}

float LengthSq(const Vector3D * vect)
{
	return  (vect->x * vect->x) + (vect->y * vect->y) + (vect->z * vect->z);
}

bool Normalize(Vector3D * const vect)
{
	if (Length(vect) != 0)
	{
		float length = Length(vect);
		vect->x = vect->x / length;
		vect->y = vect->y / length;
		vect->z = vect->z / length;
		return true;
	}
	else
		return false;
}

void ScaleBy(Vector3D * vect, float const scale)
{
	*vect = Scale(vect, scale);
}

bool Equals(const Vector3D* const left,const Vector3D* const right)
{
	return fabs(left->x - right->x) < EPSILON &&
		fabs(left->y - right->y) < EPSILON &&
		fabs(left->z - right->z) < EPSILON;
}
