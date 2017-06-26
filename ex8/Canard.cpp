#include "Canard.h"

Canard::Canard(string name, string couleur): AdesAiles(name)
{
	cout<<"\033[35mcreation d'un canard"<<(long)(this)<<endl;
	setVole(true);
	setComestible(true);
	setNom(name);
}

Canard::~Canard()
{
	cout<<"\033[35mdestruction d'un canard"<<(long)(this)<<endl;
}

void Canard::Manger() const
{
	cout<< "\033[35mun canard est granivore\033[0m"<<endl;
}

void Canard::Cri() const
{
	cout<<"\033[35mCOIN ! COIN ! COIN ! COIN !\033[0m"<<endl;
}

string Canard::getCouleur() const
{
	return couleur;
}

void Canard::setCouleur(string newcolor)
{
	couleur = newcolor;
}

void Canard::AfficherCouleur() const
{
	cout<<"\033[35mla couleur de ce canard est "<<getCouleur()<<"\033[0m"<<endl;
}

void Canard::Modifier() // modifie la couleur du canard
{
	string newcolor;
	cout<<"\033[35mnouvelle couleur : \033[0m";
	cin>>newcolor;
	setCouleur(newcolor);
}

void Canard::QuiSuisJe() const
{
	AdesAiles::QuiSuisJe();
	cout << "\033[35mje suis un canard\033[0m"<<endl;
}

void Canard::Identifier() const
{
	cout<<"\033[35mJe suis un canard, je m'appelle "<<getNom()<<", ma couleur est : "<<couleur<<"\033[0m"<<endl;
}

void Canard::Voler() const
{
	cout << "\033[35mOh, le canard s'envole !!! ... Pull ! *crk-crk PAN*\033[0m"<<endl;
}

void Canard::Menu_animal() const
{
	int choix;
	string test;
	do
	{
		cout<<"1 - Cri"<<endl;
		cout<<"2 - Alimentation"<<endl;
		cout<<"3 - Dormir"<<endl;
		cout<<"4 - Dangerosite de la morsure"<<endl;
		cout<<"0 - Retour"<<endl;
		cin>>choix;
	} while (choix <0 || choix >4);
	switch (choix)
	{
		case 0: return;
		case 1:
		{
			this->Cri();
			break;
		}
		case 2:
		{
			this->Manger();
			break;
		}
		case 3:
		{
			this->Dormir();
			break;
		}
		case 4:
		{
			cout<<"sur une echelle de 0 a 10, la dangerosite de la morsure est "<<this->Morsure()<<endl;
			break;
		}
	}
	cout<<"Appuyez sur 'entree' pour continuer ";
					getline(cin, test);
					getline(cin, test);
}

int Canard::Estunmamifere() const
{
	return 1;
}

int Canard::Morsure() const
{
	return 3;
}