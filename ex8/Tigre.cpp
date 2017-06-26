#include "Tigre.h"

Tigre::Tigre(string name, int id): Felin(name)
{ 
	identification=id;
    cout<<"\033[34mcreation du tigre numero "<<identification<<(long)(this)<<"\033[0m"<<endl;
   	setComestible(false);
   	setNom(name);
}

Tigre::~Tigre() 
{
	cout<<"\033[34mdestruction du tigre"<<(long)(this)<<"\033[0m"<<endl; 
}


void Tigre::Afficher() const
{
	cout <<"\033[34mje suis un tigre\n033[0m";
}

void Tigre::Manger() const
{ 
	cout << "\033[34mles tigre mangent des animaux herbivores (amis vegans, attention a vous) \n \033[0m"<<endl;
}

void Tigre::QuiSuisJe() const
{
	Felin::QuiSuisJe();
	cout << "\033[34mje suis un tigre\033[0m"<<endl;
}

void Tigre::Identifier() const
{
	cout<<"\033[34mJe suis un tigre, je m'appelle "<<getNom()<<", mon numero de ID est : "<<identification<<"\033[0m"<<endl;
}

void Tigre::Cri() const
{
	cout<<"\033[34mGrrraou!!!\033[0m"<<endl;
}

void Tigre::Menu_animal() const
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

int Tigre::Estunmamifere() const
{
	return 1;
}

int Tigre::Morsure() const
{
	return 12;
}