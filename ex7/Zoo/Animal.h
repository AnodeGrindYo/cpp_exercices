#include <iostream>
#include <string>

using namespace std;


#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
	private :
		string nom ;


	public :
		Animal(string nom= "animal");
  	

		virtual void Manger();

		virtual void QuiSuisJe();
		

		virtual ~Animal();
	
};


#endif