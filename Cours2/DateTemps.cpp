#include "DateTemps.h"



DateTemps::DateTemps()
{
	std::cout << "DateTemps construit";
}

DateTemps::DateTemps(int jj, int mm, int yyyy,
	int hh, int min, int ss)
	: date(yyyy, jj, mm)
	, temps(hh, min, ss)
{
	std::cout << "DateTemps paramétré construit" << std::endl;
}


DateTemps::~DateTemps()
{

}
