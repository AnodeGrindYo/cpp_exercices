#include "Autruche.h"

Autruche::Autruche(string name, int level): AdesAiles(name)
{ 
	age=level;
    cout<<"\033[36mcreation d'une Autruche "<<(long)(this)<<"\033[0m"<<endl;
    setVole(false);
    setComestible(false);
    setNom(name);
}

int Autruche::getAge() const
{
	return age;
}

void Autruche::Afficher() const // un peu inutile, cette fonction avec QuiSuisJe
{
	cout <<"\033[36mje suis une Autruche\n"<<"\033[0m"<<endl;
}

void Autruche::Manger() const
{ 
	cout << "\033[36mles Autruches mangent des plantes grasses, des fruits, des legumes, des oeufs, des insectes... \n "<<"\033[0m"<<endl;
}

void Autruche::AgeHumain() const
{
	cout<<"\033[36mCette autruche a : "<<age<<" an(s), ce qui fait, en age humain"<<age*1.5<<"\033[0m"<<endl;
}

Autruche::~Autruche() 
{
	cout<<"\033[36mdestruction d'une Autruche"<<(long)(this)<<"\033[0m"<<endl; 
}

void Autruche::QuiSuisJe() const
{
	AdesAiles::QuiSuisJe();
	cout << "\033[36mje suis une autruche\033[0m"<<endl;
}

void Autruche::Identifier() const
{
	cout<<"\033[36mJe suis une autruche, je m'appelle "<<getNom()<<", j'ai "<<age<<"ans\033[0m"<<endl;
}

void Autruche::Cri() const
{
	system("xdg-open https://www.youtube.com/watch?v=b4OCDtQSw4g");
}

void Autruche::Menu_animal() const
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

int Autruche::Estunmamifere() const
{
	return 1;
}

int Autruche::Morsure() const
{
	return 8;
}