#include "Chat.h"

Chat::Chat(string name, int tatou): Felin(name)
{ 
	tatouage=tatou;
    cout<<"creation du chat numero"<<tatouage<<(long)(this)<<endl;
}

void Chat::Afficher()
{
	cout <<"je suis un chat\n";
}

void Chat::Manger()
{ 
	cout << " les chats mangent des souris \n "<<endl;
}

Chat::~Chat() 
{
	cout<<"destruction du chat"<<(long)(this)<<endl; 
}

void Chat::QuiSuisJe()
{
	Felin::QuiSuisJe();
	cout << "je suis un chat"<<endl;
}