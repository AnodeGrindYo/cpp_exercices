#include "Animal.h"
using namespace std;

#ifndef ADESAILES_H
#define ADESAILES_H

//Un adesailes est un animal qui a des ailes
class AdesAiles : public Animal
{
	private :
	      // pas de donnee private
	public:

		AdesAiles(string name="A des ailes");

		virtual void QuiSuisJe();

		virtual ~AdesAiles();
} ;

#endif