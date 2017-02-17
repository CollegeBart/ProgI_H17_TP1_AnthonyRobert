#include <iostream>

struct Point 
{


	Point():x(0),y(0) {}

	//Getters
	//ABHÉRATION - Pour fin pedagogique
	//La méthode const ne modifie pas les privées de la classe ni fera appel à une méthode
	//const float* const GetX() const { x = nullptr; return x; }



	float x, y;
};

//Point::Point()
//	:x(0), y(0)
//{
//
//}
void main()
{
	{
		//refence
		//alias

		int value = 8;
		int autreValue = 12;
		int& ref = value;
		//&ref = autreValue;

		std::cout << "A: " << value << std::endl;
		std::cout << "B: " << ref << std::endl;
		std::cout << "C: " << &value << std::endl;
		std::cout << "D: " << &ref << std::endl;
	}
	{
		//Pointeur
		int value = 8;
		int autreValue = 12;
		int* pointeur = nullptr;
		int* autrePointeur = &value;
		autrePointeur = &autreValue;

		int* autreAutrePointeur = NULL;
		Point point = Point();
		Point* pPoint = &point;


		if (pointeur == nullptr)
			std::cout << "Est null" << std::endl;

		std::cout << "A: " << pointeur << std::endl;
		std::cout << "B: " << &point << std::endl;
		std::cout << "C: " << pPoint << std::endl;
		std::cout << "D: " << &pPoint << std::endl;
			
		std::cout << "E: " << (*pPoint).x << std::endl;
		std::cout << "F: " << pPoint->x << std::endl;
		std::cout << "G: " << pPoint[0].x << std::endl;
	}

	{//Tableaux
		char chaine[] = "Salut";
		char* pChaine = chaine;
		char* pChaine2 = "Salut";

		int test[] = { 1,2,3,4,5 };
		int* pTest = test;


		std::cout <<"A: "<< pChaine << std::endl;
		std::cout << "B: " << chaine << std::endl;
		std::cout << "C: " << pChaine2 << std::endl;
		std::cout << "D: " << *pTest << std::endl;
		std::cout << "D: " << pTest[1] << std::endl;
	
		pTest += 2;
		std::cout << "D: " << *pTest << std::endl;
		
		
		int value2 = 5;
		int autreValue2;
		/*const*/ int* /*const*/ pInt = &value2;
	
		pInt = &autreValue2;
		*pInt = 5;
	}
}