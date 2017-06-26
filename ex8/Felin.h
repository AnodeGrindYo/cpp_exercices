#include "Animal.h"

#ifndef FELIN_H
#define FELIN_H

using namespace std;


//Un felin est un animal
class Felin : virtual public Animal
{
	private :
	      // pas de donnee private
	public:
		// constructeur
		Felin(string name="felin");
		// destructeur
		virtual ~Felin();

		virtual void Cri() const =0;

		virtual void Manger()const =0;

		virtual void Identifier() const =0;

		virtual void QuiSuisJe()const ;
		
		virtual void Menu_animal() const =0;

		virtual int Estunmamifere() const =0;

		virtual int Morsure() const =0;
} ;

#endif