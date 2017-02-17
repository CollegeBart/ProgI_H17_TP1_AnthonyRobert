#include "stdafx.h"
#include "CppUnitTest.h"

#include "Vector2D.h"

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
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(GetPolarAngleDegTest2)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(AngleBetweenDegTest1)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(AngleBetweenDegTest2)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(LengthTest1)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(LengthTest2)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(LengthSqTest1)
		{
			Vector2D u = { 9, -5 };
			float vLength;
			vLength = LengthSq(&u);
			float r = { 30 };
			Assert::IsTrue(abs(vLength - r));
		}
		TEST_METHOD(LengthSqTest2)
		{
			Vector2D u = { 10, 11 };
			float vLength;
			vLength = LengthSq(&u);
			float r = { 15 };
			Assert::IsTrue(abs(vLength - r));
		}
		TEST_METHOD(NormalizeTest1)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(NormalizeTest2)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
		}
		TEST_METHOD(ScaleByTest1)
		{
			Vector2D u = { 9, -5 };
			Vector2D v = { -9, 5 };
			Vector2D add = Add(&u, &v);
			Vector2D r = { 0, 0 };
			Assert::IsTrue(Equals(&add, &r));
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

}