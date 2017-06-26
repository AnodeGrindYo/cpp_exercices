#include "Autruche.h"

Autruche::Autruche(int level): AdesAiles()
{ 
	age=level;
    cout<<"creation d'une Autruche "<<(long)(this)<<endl;
}

int Autruche::getAge()
{
	return age;
}

void Autruche::Afficher()
{
	cout <<"je suis une Autruche\n";
}

void Autruche::Manger()
{ 
	cout << " les Autruches mangent des plantes grasses, des fruits, des legumes, des oeufs, des insectes... \n "<<endl;
}

void Autruche::AgeHumain()
{
	cout<<"Cette autruche a : "<<age<<" an(s), ce qui fait, en age humain"<<age*1.5<<endl;
}

Autruche::~Autruche() 
{
	cout<<"destruction d'une Autruche"<<(long)(this)<<endl; 
}

void Autruche::QuiSuisJe()
{
	AdesAiles::QuiSuisJe();
	cout << "je suis une autruche"<<endl;
}