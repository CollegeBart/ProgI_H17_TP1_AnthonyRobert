#pragma once

#include "Date.h"
#include "Temps.h"
class DateTemps
{
public:
	DateTemps();
	DateTemps(int jj, int mm, int yyyy,
		int hh, int min, int ss);


	~DateTemps();

private:

	Date date;
	Temps temps;


};

