#include "Temps.h"



Temps::Temps(int hh, int min, int ss)
	: second(hh*60*60+min*60+ss)
{
	std::cout << "Construit Temps parametre" << std::endl;
}

Temps::Temps(int hh, int min)
	: second(hh * 60 * 60 + min * 60)
{

}

Temps::Temps(int hh)
	: second(hh * 60 * 60)

{

}

Temps::Temps()
	: second(0)
{

}


Temps::~Temps()
{

}

void Temps::Afficher()
{
	int hours, minutes;
	minutes = second / 60;
	hours = minutes / 60;


	std::cout << second / 60 / 60 << ":" << second;
}
