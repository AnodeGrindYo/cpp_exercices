#include "Felin.h"
using namespace std;

Felin::Felin(string name): Animal(name)
{
	cout<<"creation du felin"<<(long)(this)<<endl; 
}

void Felin::Manger()
{ 
	cout << "les felins mangent de la viande \n " <<endl;
}

Felin::~Felin() 
{
	cout<<"destruction du felin"<<(long)(this)<<endl; 
}

void Felin::QuiSuisJe()
{
	Animal::QuiSuisJe();
	cout << "je suis un felin"<<endl;
}