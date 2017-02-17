#pragma once
#pragma once

struct Vector3D {
	float x, y, z;
};
const float PI = 3.1415926535897f;




// Vector 3D
Vector3D Add(Vector3D left, Vector3D right);
Vector3D Substract(Vector3D left, Vector3D right);
Vector3D Scale(Vector3D vect, float scale);
float Dot(Vector3D left, Vector3D right);
Vector3D CrossLH(Vector3D left, Vector3D right);
Vector3D CrossRH(Vector3D left, Vector3D right);
void MoveBy(Vector3D by, /*ES*/ Vector3D tomove);
float Length(Vector3D vect);
float LengthSq(Vector3D vect);
bool Normalize(Vector3D vect);
void ScaleBy(Vector3D vect, float scale);
bool Equals(const Vector3D left, Vector3D right);