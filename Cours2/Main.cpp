#include <iostream>
//#include "Date.h"
//#include "Temps.h
#include"DateTemps.h"
// Classe Vs Objet


// .h / .cpp
//.h

//Includes
//Constante
//Prototype
//

//Classe est abstraite
//Concrètement l'Object c'est l'instantiation d'une classe

int main()
{
	Date d1;
	Date d2(1, 1, 2017);
	Date d3 = Date(1, 1, 2017);
	
	d1.Afficher();
	return 0;
	
	DateTemps dt = DateTemps(26 , 12, 1983 , 11 , 24 , 5);
}