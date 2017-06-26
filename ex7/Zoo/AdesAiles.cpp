#include "AdesAiles.h"

AdesAiles::AdesAiles(string name): Animal(name)
{
	cout<<"creation d'un animal avec des ailes"<<(long)(this)<<endl;
}

AdesAiles::~AdesAiles()
{
	cout<<"destruction d'un animal avec des ailes"<<(long)(this)<<endl;
}

void AdesAiles::QuiSuisJe()
{
	Animal::QuiSuisJe();
	cout << "je suis un truc qui a des ailes"<<endl;;
}