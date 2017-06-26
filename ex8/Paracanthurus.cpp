#include "Paracanthurus.h"

Paracanthurus::Paracanthurus(string name): Aquatique(name)
{ 
    cout<<"\033[33mcreation du Paracanthurus"<<(long)(this)<<"\033[0m"<<endl;
   	setComestible(false);
   	setNom(name);
}

Paracanthurus::~Paracanthurus() 
{
	cout<<"\033[33mdestruction du Paracanthurus"<<(long)(this)<<"\033[0m"<<endl; 
}

void Paracanthurus::Afficher() const
{
	cout <<"\033[33mje suis un Paracanthurus\n033[0m";
}

void Paracanthurus::Manger() const
{ 
	cout << "\033[33mles Paracanthurus mangent des algues vertes \n \033[0m"<<endl;
}

void Paracanthurus::QuiSuisJe() const
{
	Aquatique::QuiSuisJe();
	cout << "\033[33mje suis un Paracanthurus (un poisson chirurgien, comme Dory)\033[0m"<<endl;
}

void Paracanthurus::Identifier() const
{
	cout<<"\033[33mJe suis un Paracanthurus, je m'appelle "<<getNom()<<"\033[0m"<<endl;
}

void Paracanthurus::Cri() const
{
	cout<<"\033[33mNage droit devant toi ! Nage droit devant toi\033[0m"<<endl;
}

void Paracanthurus::Menu_animal() const
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

int Paracanthurus::Estunmamifere() const
{
	return 0;
}

int Paracanthurus::Morsure() const
{
	return 0;
}