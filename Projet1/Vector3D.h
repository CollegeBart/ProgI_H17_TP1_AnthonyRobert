#pragma once


struct Vector3D {
	float x, y, z;
};





// Vector 3D
Vector3D Add(const Vector3D* const left,const Vector3D* const right);
Vector3D Substract(const Vector3D* const left,const Vector3D* const right);
Vector3D Scale(const Vector3D* vect, float scale);
float Dot(const Vector3D* left,const Vector3D* right);
Vector3D CrossLH(const Vector3D* const left,const Vector3D* const right);
Vector3D CrossRH(const Vector3D* const left,const Vector3D* const right);
void MoveBy(const Vector3D* const by, /*ES*/const Vector3D* const tomove);
float Length(const Vector3D* vect);
float LengthSq(const Vector3D* vect);
bool Normalize(Vector3D* const vect);
void ScaleBy(Vector3D* vect, float const scale);
bool Equals(const Vector3D left, Vector3D right);