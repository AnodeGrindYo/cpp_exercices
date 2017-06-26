#include "Canard.h"

Canard::Canard(string couleur): AdesAiles()
{
	cout<<"creation d'un canard"<<(long)(this)<<endl;
}

Canard::~Canard()
{
	cout<<"destruction d'un canard"<<(long)(this)<<endl;
}

void Canard::Cancane()
{
	cout<<"COIN ! COIN ! COIN ! COIN !"<<endl;
}

string Canard::getCouleur()
{
	return couleur;
}

void Canard::setCouleur(string newcolor)
{
	couleur = newcolor;
}

void Canard::AfficherCouleur()
{
	cout<<"la couleur de ce canard est "<<couleur<<endl;
}

void Canard::Modifier() // modifie la couleur du canard
{
	string newcolor;
	cout<<"nouvelle couleur : ";
	cin>>newcolor;
	setCouleur(newcolor);
}

void Canard::QuiSuisJe()
{
	AdesAiles::QuiSuisJe();
	cout << "je suis un canard"<<endl;
}