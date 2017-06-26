#include "Griffon.h"

Griffon::Griffon(string name, string couleur): AdesAiles(name)
{
	cout<<"\033[35mcreation d'un Griffon"<<(long)(this)<<endl;
	setVole(true);
	setComestible(true);
	setNom(name);
}

Griffon::~Griffon()
{
	cout<<"\033[35mdestruction d'un Griffon"<<(long)(this)<<endl;
}

void Griffon::Manger() const
{
	cout<< "\033[35mun Griffon ne se nourrit pas, il fait de la photosynthese\033[0m"<<endl;
}

void Griffon::Cri() const
{
	cout<<"\033[35mI shot the sheriff "<<endl;
	cout<<"But I didn't shot no deputy! Ooh-ooh-ooh"<<endl;
	cout<<"Reflexes had the better of me"<<endl;
	cout<<"And what is to be must be"<<endl;
 	cout<<"Everyday the bucket a go a well"<<endl;
	cout<<"One day the bottom a go drop out"<<endl;
	cout<<"One day the bottom a go drop out"<<endl;
	cout<<"I say : I-I-I, I shot the sheriff"<<endl;
	cout<<"Lord I didn't shot no deputy no!"<<endl;
	cout<<"Yere, I, I shot the sheriff"<<endl;
	cout<<"But I didn't shot no deputy! Yere, so, yere.\033[0m"<<endl;
}

void Griffon::QuiSuisJe() const
{
	AdesAiles::QuiSuisJe();
	cout << "\033[35mje suis un Griffon\033[0m"<<endl;
}

void Griffon::Identifier() const
{
	cout<<"\033[35mJe suis un Griffon, je m'appelle "<<getNom()<<", ma couleur est : "<<couleur<<"\033[0m"<<endl;
}

void Griffon::Voler() const
{
	cout << "\033[35mOh, le Griffon s'envole !!! Visez bien\033[0m"<<endl;
}

void Griffon::Menu_animal() const
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

int Griffon::Estunmamifere() const
{
	return 1;
}

int Griffon::Morsure() const
{
	return 18;
}