#include "Animal.h"
using namespace std;

#ifndef ADESAILES_H
#define ADESAILES_H

//Un adesailes est un animal qui a des ailes
class AdesAiles : virtual public Animal
{
	private :
	    bool vole;
	public:
		// constructeur
		AdesAiles(string name="A des ailes");
		// destructeur
		virtual ~AdesAiles();
		// geters
		bool getVole() const;
		// setters
		void setVole(bool value);

		virtual void Manger() const =0;

		virtual void Identifier() const =0;

		virtual void QuiSuisJe() const ;

		virtual void Menu_animal()const =0;

		virtual int Estunmamifere() const =0;

		virtual int Morsure() const =0;
} ;

#endif