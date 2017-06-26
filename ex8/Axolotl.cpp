#include "Axolotl.h"

Axolotl::Axolotl(string name): Aquatique(name)
{ 
    cout<<"\033[31mcreation de l'axolotl"<<(long)(this)<<"\033[0m"<<endl;
   	setComestible(false);
   	setNom(name);
}

Axolotl::~Axolotl() 
{
	cout<<"\033[31mdestruction de l'axolotl"<<(long)(this)<<"\033[0m"<<endl; 
}

void Axolotl::Afficher() const
{
	cout <<"\033[31mje suis un axolotl\n033[0m";
}

void Axolotl::Manger() const
{ 
	cout << "\033[31mles axolotl mangent des algues vertes \n \033[0m"<<endl;
}

void Axolotl::QuiSuisJe() const
{
	Aquatique::QuiSuisJe();
	cout << "\033[31mje suis un axolotl\033[0m"<<endl;
}

void Axolotl::Identifier() const
{
	cout<<"\033[31mJe suis un axolotl, je m'appelle "<<getNom()<<"\033[0m"<<endl;
}

void Axolotl::Cri() const
{
	system("xdg-open https://www.youtube.com/watch?v=MxA0QVGVEJw");
}

void Axolotl::Menu_animal() const
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

int Axolotl::Estunmamifere() const
{
	return 0;
}

int Axolotl::Morsure() const
{
	return 0;
}