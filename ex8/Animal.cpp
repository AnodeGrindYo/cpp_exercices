#include "Animal.h"
using namespace std;

Animal::Animal(string nom)
{ 
	this->nom=nom ;
	cout<<"creation de l'animal"<<nom<<(long)(this) <<endl;
}

Animal::~Animal()
{  
	cout<<"destruction de l'animal... abracadabra !"<<(long)(this)<<endl;
}

Animal & Animal::operator=(const Animal &A)
{
	nom = A.nom;
	comestible = A.comestible;
}

void Animal::Dormir() const
{
	cout<<"zzzZZZzzzZZZzzzZZZzzz...";
}

void Animal::QuiSuisJe() const
{
	cout << "je suis un animal"<<endl;
}

string Animal::getNom() const
{
	return nom;
}

bool Animal::getComestible() const
{
	return comestible;
}

void Animal::setComestible(bool value)
{
	comestible = value;
}

void Animal::setNom(string nom)
{
	this->nom = nom;
}