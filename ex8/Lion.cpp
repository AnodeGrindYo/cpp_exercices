#include "Lion.h"

Lion::Lion(string name): Felin(name)
{ 
    cout<<"\033[34mcreation d'un Lion "<<(long)(this)<<"\033[0m"<<endl;
   	setComestible(false);
   	setNom(name);
}

Lion::~Lion() 
{
	cout<<"\033[34mdestruction du Lion"<<(long)(this)<<"\033[0m"<<endl; 
}

void Lion::Afficher() const
{
	cout <<"\033[34mje suis un Lion\n033[0m";
}

void Lion::Manger() const
{ 
	cout << "\033[34mles Lion mangent des animaux herbivores, certains mangent des barres chocolatees ou des cereales \n \033[0m"<<endl;
}

void Lion::QuiSuisJe() const
{
	Felin::QuiSuisJe();
	cout << "\033[34mje suis un Lion\033[0m"<<endl;
}

void Lion::Identifier() const
{
	cout<<"\033[34mJe suis un Lion, je m'appelle "<<getNom()<<"\033[0m"<<endl;
}

void Lion::Cri() const
{
	cout<<"\033[34mJe vais faire, dans la cour des grands, Une entrée triomphale, En poussant, très royalement, Un rugissement bestial !\033[0m"<<endl;
}

void Lion::Menu_animal() const
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

int Lion::Estunmamifere() const
{
	return 1;
}

int Lion::Morsure() const
{
	return 12;
}