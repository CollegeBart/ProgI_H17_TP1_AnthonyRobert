#pragma once

//struct Point
//{
//	float x, y;
//
//	static void Init(Point& p,float x, float y)
//	{
//		//(*this).x = x;
//		//(*this).y = y;
//
//		p.x = x;
//		p.y = y;
//	}
//};
//
//








class Point
{
public:
	//Constructeurs
	//Par défaut
	Point() 
	{
		this->x = 0;
		this->y = 0;
	}
	//paramètré
	Point(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
	//Setters / Getters
	float GetX() {return x;}
	//void SetX(float x) { this->x = x; }

private:
	//Les parametre doivent toujours etre privées, toujours toujours toujours
	float x, y;
};