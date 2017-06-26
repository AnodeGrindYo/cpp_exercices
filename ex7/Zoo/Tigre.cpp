#include "Tigre.h"

Tigre::Tigre(string name, int id): Felin(name)
{ 
	identification=id;
    cout<<"creation du tigre numero "<<identification<<(long)(this)<<endl;
}

void Tigre::Afficher()
{
	cout <<"je suis un tigre\n";
}

void Tigre::Manger()
{ 
	cout << " les tigre mangent des animaux herbivores (amis vegans, attention a vous) \n "<<endl;
}

void Tigre::Identifier()
{
	cout<<"l'ID de ce tigre est "<<identification<<endl;
}

Tigre::~Tigre() 
{
	cout<<"destruction du tigre"<<(long)(this)<<endl; 
}

void Tigre::QuiSuisJe()
{
	Felin::QuiSuisJe();
	cout << "je suis un tigre"<<endl;
}