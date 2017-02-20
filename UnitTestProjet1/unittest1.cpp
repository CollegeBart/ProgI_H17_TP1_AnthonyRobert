#include "stdafx.h"
#include "CppUnitTest.h"

#include "Vector2D.h"
#include "Vector3D.h"
#include "Constante.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProjet1
{		
	TEST_CLASS(Vector2DTest)
	{
	public:
		TEST_METHOD(AddTest1)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(AddTest2)
		{
			Vector2D u = { 20, 15 };
			Vector2D v = { -80, 30.5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { -60, 45.5 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(SubstractTest1)
		{
			Vector2D u = { 100, -99 };
			Vector2D sub = Substract(&u, &u);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(SubstractTest2)
		{
			Vector2D u = { 20, 15 };
			Vector2D v = { -80, 30.5 };
			Vector2D sub = Substract(&u, &v);
			Vector2D r = { 100, -15.5 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(ScaleTest1)
		{
			float scale = { 2.0f };
			Vector2D u = { 5, 10 };
			Vector2D scl = Scale(&u, scale);
			Vector2D r = { 10, 20 };
			Assert::IsTrue(Equals(&scl, &r));
		}
		TEST_METHOD(ScaleTest2)
		{
			float scale = { 2.5f };
			Vector2D u = { 1.5 , 3.5 };
			Vector2D scl = Scale(&u, scale);
			Vector2D r = { 3.75, 8.75 };
			Assert::IsTrue(Equals(&scl, &r));
		}
		TEST_METHOD(MoveByTest1)
		{
			Vector2D _by = { 0, 0 };
			Vector2D _toMove = { 20,20 };
			MoveBy(&_by, &_toMove);
			Vector2D r = { 20, 20 };
			Assert::IsTrue(Equals(&_toMove, &r));
		}
		TEST_METHOD(MoveByTest2)
		{
			Vector2D _by = { 0.5, 0.75 };
			Vector2D _toMove = { 10.5,2.25 };
			MoveBy(&_by, &_toMove);
			Vector2D r = { 11, 3 };
			Assert::IsTrue(Equals(&_toMove, &r));
		}
		TEST_METHOD(GetPolarAngleDegTest1)
		{
			Vector2D u = { -1, 0 };
			float getpolarAngleDeg = GetPolarAngleDeg(&u);
			float r = 180.0f;
			Assert::IsTrue(abs(getpolarAngleDeg - r)< EPSILON);
		}
		TEST_METHOD(GetPolarAngleDegTest2)
		{
			Vector2D u = { 1, 0 };
			float getpolarAngleDeg = GetPolarAngleDeg(&u);
			float r = 0.0f;
			Assert::IsTrue(abs(getpolarAngleDeg - r)< EPSILON);
		}
		TEST_METHOD(AngleBetweenDegTest1)
		{
			Vector2D u = { -1, 0 };
			Vector2D v = { -1, 0 };
			float angleBetweenDeg;
			angleBetweenDeg = AngleBetweenDeg(&u, &v);
			float r = 0.0f;
			Assert::IsTrue(abs(angleBetweenDeg- r)< EPSILON);
		}
		TEST_METHOD(AngleBetweenDegTest2)
		{
			Vector2D u = { 1, 0 };
			Vector2D v = { 0, -1 };
			float angleBetweenDeg;
			angleBetweenDeg = AngleBetweenDeg(&u, &v);
			float r = 90.0f;
			Assert::IsTrue(abs(angleBetweenDeg - r)< EPSILON);
		}
		TEST_METHOD(LengthTest1)
		{
			Vector2D v = { 3, 4 };
			float length = Length(&v);
			float result = 5.0f;
			Assert::IsTrue(abs(length - result) < EPSILON);
		}
		TEST_METHOD(LengthTest2)
		{
			Vector2D v = { -3, 4 };
			float length = Length(&v);
			float result = 5.0f;
			Assert::IsTrue(abs(length - result) < EPSILON);
		}
		TEST_METHOD(LengthSqTest1)
		{
			Vector2D v = { 3, 4 };
			float l;
			l = LengthSq(&v);
			float r;
			r = 25.0f;
			Assert::IsTrue(abs(l - r) < EPSILON);
		}
		TEST_METHOD(LengthSqTest2)
		{
			Vector2D v = { -3, -4 };
			float l;
			l = LengthSq(&v);
			float r;
			r = 25.0f;
			Assert::IsTrue(abs(l - r) < EPSILON);
		}
		TEST_METHOD(NormalizeTest1)
		{
			Vector2D u = { 10, 10 };
			Assert::IsTrue(Normalize(&u));
			Vector2D v = { (10 / (sqrt(200.0f))), (10 / (sqrt(200.0f))) };
			Assert::IsTrue(Equals(&u, &v));
		}
		TEST_METHOD(NormalizeTest2)
		{
			Vector2D u = { 10, 10 };
			Assert::IsTrue(Normalize(&u));
			Vector2D v = { (10 / (sqrt(200.0f))), (10 / (sqrt(200.0f))) };
			Assert::IsTrue(Equals(&u, &v));
		}
		TEST_METHOD(ScaleByTest1)
		{
			Vector2D u = { 9, -5 };
			float f =  2.0f;
			ScaleBy(&u, f);
			Vector2D r = { 18, -10 };
			Assert::IsTrue(Equals(&u, &r));
		}
		TEST_METHOD(ScaleByTest2)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(GetVectorByAngleDegTest1)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(GetVectorByAngleDegTest2)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(EqualsTest1)
		{
			Vector2D u = { 1.0f, 0 };
			Vector2D v = { 0.999999f, 0 };
			Assert::IsTrue(Equals(&u, &v));
		}
	};
	TEST_CLASS(Vector3DTest)
	{
		TEST_METHOD(ADDTest3D)
		{

		}
		TEST_METHOD(ADDTest3D1)
		{

		}
		TEST_METHOD(SubstractTest1)
		{

		}
		TEST_METHOD(SubstractTest2)
		{

		}
		TEST_METHOD(ScaleTest1)
		{

		}
		TEST_METHOD(ScaleTest2)
		{

		}
		TEST_METHOD(DotTest1)
		{

		}
		TEST_METHOD(DotTest2)
		{

		}
		TEST_METHOD(DotTest3)
		{

		}
		TEST_METHOD(CrossLHTest1)
		{

		}
		TEST_METHOD(CrossLHTest2)
		{

		}
		TEST_METHOD(CrossRHTest1)
		{

		}
		TEST_METHOD(CrossRHTest2)
		{

		}
		TEST_METHOD(MoveByTest1)
		{

		}
		TEST_METHOD(MoveByTest2)
		{

		}
		TEST_METHOD(Length3D1Test)
		{

		}
		TEST_METHOD(Length3D2Test)
		{

		}
		TEST_METHOD(LengthSq3DTest1)
		{

		}
		TEST_METHOD(LengthSq3DTest2)
		{

		}
		TEST_METHOD(Normalize3dTest1)
		{

		}
		TEST_METHOD(Normalize3dTest2)
		{

		}
		TEST_METHOD(ScaleByTest1)
		{

		}
		TEST_METHOD(ScaleByTest2)
		{

		}
		TEST_METHOD(EqualsTest1)
		{

		}
	};

}