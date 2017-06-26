#include "Aquatique.h"
using namespace std;

Aquatique::Aquatique(string name): Animal(name)
{
	cout<<"creation de la bestiole aquatique"<<(long)(this)<<endl;
	setComestible(false); // on dira qu'aucun des félins ne se mange
}

/*void Aquatique::Manger()
{ 
	cout << "les Aquatiques mangent de la viande \n " <<endl;
}*/

Aquatique::~Aquatique() 
{
	cout<<"destruction de la bestiole Aquatique"<<(long)(this)<<endl; 
}

void Aquatique::QuiSuisJe() const
{
	Animal::QuiSuisJe();
	cout << "je suis une bestiole aquatique"<<endl;
}