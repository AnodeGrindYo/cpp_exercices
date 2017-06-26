#include "AdesAiles.h"

AdesAiles::AdesAiles(string name): Animal(name)
{
	cout<<"creation d'un animal avec des ailes"<<(long)(this)<<endl;
}

AdesAiles::~AdesAiles()
{
	cout<<"destruction d'un animal avec des ailes"<<(long)(this)<<endl;
}

bool AdesAiles::getVole() const
{
	return vole;
}

void AdesAiles::setVole(bool value)
{
	vole = value;
}

void AdesAiles::QuiSuisJe() const
{
	Animal::QuiSuisJe();
	cout << "je suis un truc qui a des ailes"<<endl;;
}