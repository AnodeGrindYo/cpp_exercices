#include "Animal.h"

#ifndef FELIN_H
#define FELIN_H

using namespace std;


//Un felin est un animal
class Felin : public Animal
{
	private :
	      // pas de donnee private
	public:
		Felin(string name="felin")/*: Animal(name)*/; // dans le prototype, il ne faut pas mettre l'appel au constructeur parent

		virtual void Manger();

		virtual void QuiSuisJe();

		virtual ~Felin();
} ;

#endif