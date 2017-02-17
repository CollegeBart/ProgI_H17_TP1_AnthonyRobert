#pragma once
#include <math.h>
struct Vector2D {
	float x, y;
};

const float PI = 3.1415926535897f;
const float EPSILON = 0.0001f;

// Vector 2D
Vector2D Add(const Vector2D* const left,const Vector2D* const right);
Vector2D Substract(const Vector2D* const left,const Vector2D* const right);
Vector2D Scale(const Vector2D* vect, float scale);
void MoveBy(const Vector2D* const by,Vector2D* const toMove);
float GetPolarAngleDeg(Vector2D vect);
float AngleBetweenDeg(Vector2D left, Vector2D right);
float Length(const Vector2D* vect);
float LengthSq(const Vector2D* vect);
bool Normalize(Vector2D vect);
void ScaleBy(Vector2D vect, float scale);
Vector2D GetVectorByAngleDeg(float angle);
bool Equals(const Vector2D* const left, const Vector2D* const right);
