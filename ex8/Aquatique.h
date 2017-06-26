#include "Animal.h"

#ifndef AQUATIQUE_H
#define AQUATIQUE_H

using namespace std;


//Un Aquatique est un animal
class Aquatique : virtual public Animal
{
	private :
	      // pas de donnee private
	public:
		// constructeur
		Aquatique(string name="Aquatique");
		// destructeur
		virtual ~Aquatique();

		virtual void Cri() const =0;

		virtual void Manger() const =0;

		virtual void Identifier() const =0;

		virtual void QuiSuisJe() const;

		virtual void Menu_animal() const =0;

		virtual int Estunmamifere() const =0;

		virtual int Morsure() const =0;
} ;

#endif