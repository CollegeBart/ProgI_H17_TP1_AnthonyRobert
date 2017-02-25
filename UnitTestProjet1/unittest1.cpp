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
			Vector2D v = { 100, -99 };
			Vector2D sub = Substract(&u, &v);
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
			Vector3D u = { 9, -5, 10 };
			Vector3D v = { -9, 5, -10 };
			Vector3D add = Add(&u, &v);
			Vector3D r = { 0, 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(ADDTest3D1)
		{
			Vector3D u = { 9, -5 , 0};
			Vector3D v = { 3, 8 , 12};
			Vector3D add = Add(&u, &v);
			Vector3D r = { 12, 3, 12};
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(SubstractTest1)
		{
			Vector3D u = { 100, -99, 0 };
			Vector3D v = { 100, -99,  0};
			Vector3D sub = Substract(&u, &v);
			Vector3D r = { 0, 0, 0 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(SubstractTest2)
		{
			Vector3D u = { 20, 15, 25 };
			Vector3D v = { -80, 30.5, 20.5 };
			Vector3D sub = Substract(&u, &v);
			Vector3D r = { 100, -15.5, 4.5 };
			Assert::IsTrue(Equals(&sub, &r));
		}
		TEST_METHOD(ScaleTest1)
		{
			float scale = { 2.0f };
			Vector3D u = { 5, 10, 15 };
			Vector3D scl = Scale(&u, scale);
			Vector3D r = { 10, 20, 30 };
			Assert::IsTrue(Equals(&scl, &r));
		}
		TEST_METHOD(ScaleTest2)
		{
			float scale = { 2.5f };
			Vector3D u = { 5, 10, 15  };
			Vector3D scl = Scale(&u, scale);
			Vector3D r = { 12.5f, 25, 37.5f  };
			Assert::IsTrue(Equals(&scl, &r));
		}
		TEST_METHOD(DotTest1)
		{
			Vector3D u = { 2.0f , 3.0f ,4.0f };
			Vector3D v = { 4.0f, 5.0f ,6.0f };
			float doot = Dot(&u, &v);
			float r = 47.0f;
			Assert::IsTrue(abs(doot - r) < EPSILON);
		}
		TEST_METHOD(DotTest2)
		{
			Vector3D u = { -4.0f , -6.0f ,-5.0f };
			Vector3D v = { 4.0f, 5.0f ,6.0f };
			float doot = Dot(&u, &v);
			float r = -76.f;
			Assert::IsTrue(abs(doot - r) < EPSILON);
		}
		TEST_METHOD(DotTest3)
		{
			Vector3D u = { 0.f , 0.0f ,0.0f };
			Vector3D v = { 0.0f, 0.0f ,0.0f };
			float doot = Dot(&u, &v);
			float r = 0.0f;
			Assert::IsTrue(abs(doot - r) < EPSILON);
		}
		TEST_METHOD(CrossLHTest1)
		{
			Vector3D u = { 2,3,4 };
			Vector3D v = { 4,5,6 };
			Vector3D cr = CrossRH(&u, &v);
			Vector3D r = { -2, 4, -2 };
			Assert::IsTrue(Equals(&cr, &r));
		}
		TEST_METHOD(CrossLHTest2)
		{
			Vector3D u = { -4, 8, -6 };
			Vector3D v = { -2, 5, -2 };
			Vector3D cl = CrossLH(&u, &v);
			Vector3D r = { -14 , -4, -4 };
			Assert::IsTrue(Equals(&cl, &r));
		}
		TEST_METHOD(CrossRHTest1)
		{
			Vector3D u = { 2,3,4 };
			Vector3D v = { 4,5,6 };
			Vector3D cr = CrossRH(&u, &v);
			Vector3D r = { -2, 4, -2 };
			Assert::IsTrue(Equals(&cr, &r));
		}
		TEST_METHOD(CrossRHTest2)
		{
			Vector3D u = { -4, 8, -6 };
			Vector3D v = { -2, 5, -2 };
			Vector3D cr = CrossRH(&u, &v);
			Vector3D r = { 14 , 4 , 4 };
			Assert::IsTrue(Equals(&cr, &r));
		}
		TEST_METHOD(MoveByTest1)
		{
			Vector3D _by = { 0, 0, 0};
			Vector3D _toMove = { 20,20, 20 };
			MoveBy(&_by, &_toMove);
			Vector3D r = { 20, 20 , 20 };
			Assert::IsTrue(Equals(&_toMove, &r));
		}
		TEST_METHOD(MoveByTest2)
		{
			Vector3D _by = { 0, 0 };
			Vector3D _toMove = { 20,20 };
			MoveBy(&_by, &_toMove);
			Vector3D r = { 20, 20 };
			Assert::IsTrue(Equals(&_toMove, &r));
		}
		TEST_METHOD(Length3D1Test)
		{
			Vector3D v = { 3, 4, 5 };
			float length = Length(&v);
			float result = 7.071067f;
			Assert::IsTrue(abs(length - result) < EPSILON);
		}
		TEST_METHOD(Length3D2Test)
		{
			Vector3D v = { 4, 5, 6 };
			float length = Length(&v);
			float result = 8.774964f;
			Assert::IsTrue(abs(length - result) < EPSILON);
		}
		TEST_METHOD(LengthSq3DTest1)
		{
			Vector3D v = { 3, 4 , 5 };
			float l;
			l = LengthSq(&v);
			float r;
			r = 50.0f;
			Assert::IsTrue(abs(l - r) < EPSILON);
		}
		TEST_METHOD(LengthSq3DTest2)
		{
			Vector3D v = {4, 5, 6 };
			float l;
			l = LengthSq(&v);
			float r;
			r = 77.0f;
			Assert::IsTrue(abs(l - r) < EPSILON);
		}
		TEST_METHOD(Normalize3dTest1)
		{

		}
		TEST_METHOD(Normalize3dTest2)
		{

		}
		TEST_METHOD(ScaleByTest1)
		{
			Vector3D u = { 9, -5, 10 };
			float f = 2.0f;
			ScaleBy(&u, f);
			Vector3D r = { 18, -10, 10 };
			Assert::IsTrue(Equals(&u, &r));
		}
		TEST_METHOD(ScaleByTest2)
		{
			Vector3D u = { -9, -5, -6 };
			float f = 2.0f;
			ScaleBy(&u, f);
			Vector3D r = { -18, -10, -12  };
			Assert::IsTrue(Equals(&u, &r));
		}
		TEST_METHOD(EqualsTest1)
		{
			Vector3D u = { 1.0f, 0, 0 };
			Vector3D v = { 0.999999f, 0, 0 };
			Assert::IsTrue(Equals(&u, &v));
		}
	};

}