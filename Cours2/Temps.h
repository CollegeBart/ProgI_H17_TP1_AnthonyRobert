#pragma once
#include <iostream>
class Temps
{
public:
	Temps(int hh, int min, int ss);
	Temps(int hh, int min);
	Temps(int hh);
	Temps();


	~Temps();
	
	void Afficher();
private:
	int second;
};

