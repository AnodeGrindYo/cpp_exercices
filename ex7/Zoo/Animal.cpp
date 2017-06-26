#include "Animal.h"
using namespace std;

Animal::Animal(string nom)
{ 
	this->nom=nom ;
	cout<<"creation de l'animal"<<nom<<(long)(this) <<endl;
}

void Animal::Manger()
{ 
	cout << " un animal mange \n " ;
}

Animal::~Animal()
{  
	cout<<"destruction de l'animal"<<(long)(this)<<endl;
}

void Animal::QuiSuisJe()
{
	cout << "je suis un animal"<<endl;
}