#include "Chat.h"

Chat::Chat(string name, int tatou): Felin(name)
{ 
	tatouage=tatou;
    cout<<"\033[33mcreation du chat numero "<<tatouage<<(long)(this)<<"\033[0m"<<endl;
    setNom(name);
    setComestible(false);
}

Chat::~Chat() 
{
	cout<<"\033[33mdestruction du chat "<<(long)(this)<<"\033[0m"<<endl; 
}


void Chat::Afficher() const
{
	cout <<"\033[33mje suis un chat\n";
}

void Chat::Manger() const
{ 
	cout << "\033[33mles chats mangent des souris \n \033[0m"<<endl;
}

void Chat::QuiSuisJe() const
{
	Felin::QuiSuisJe();
	cout << "\033[33mje suis un chat\033[0m"<<endl;
}

void Chat::Identifier() const
{
	cout<<"\033[33mJe suis un chat, je m'appelle "<<getNom()<<", mon numero de tatouage est : "<<tatouage<<"\033[0m"<<endl;
}

void Chat::Cri() const
{
	cout<<"\033[33mMiaou!!!\033[0m"<<endl;
}

void Chat::Menu_animal() const
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

int Chat::Estunmamifere() const
{
	return 1;
}

int Chat::Morsure() const
{
	return 6;
}