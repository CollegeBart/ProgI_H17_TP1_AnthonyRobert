#pragma once
#include <iostream>
#include <iomanip>
class Date
{
public:
	//Constructeur par d�faut.
	Date();
	//Constructeur param�tr�
	Date(int jj, int mm, int aaaa);
	//Param�tre par d�faut
	//Date(int jj = 01, int mm = 01, int aaaa = 2017);
	
	//Constructeur param�tr� surcharg�.
	Date(int jj, int mm);
	Date(int jj);
//	Date(int aaaa);

	~Date();

	void Afficher();
private:
	static const int DEFAULT_DAY = 1;
	
	//void Init(int jj, int mm, int aaaa);

	int jj;
	int mm;
	int aaaa;


};



