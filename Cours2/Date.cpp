#include "Date.h"

Date::Date()
	: jj(DEFAULT_DAY), mm(1), aaaa(2017)
{
	std::cout << "Construit default" << std::endl;
	//this->jj = jj;
	//this->mm = 1;
	//this ->aaaa = 2017;
	//Init(1,1,2017);
}

Date::Date(int jj, int mm, int aaaa)
	: jj(jj), mm(mm), aaaa(aaaa)
{
	std::cout << "Construit Date parametre" << std::endl;
	//Init(jj, mm, aaaa);
	//this->mm = mm;
	//this->jj = jj;
	//this->aaaa = aaaa;
}

Date::Date(int jj, int mm)
	:jj(jj), mm(mm), aaaa(2017)
{
	//Init jj, mm ,2017);
	//this->jj = jj;
	//this->mm = mm;
	//this->aaaa = 2017;
}

Date::Date(int jj)
	:jj(jj), mm(1), aaaa(2017)
{
	//Init(jj, 1, 2017);
}

Date::~Date()
{


}

void Date::Afficher()
{
	std::cout << std::setw(2) << std::setfill('0') << jj << std::setw(2) << mm << "-" << aaaa << std::endl;
}