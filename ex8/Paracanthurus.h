#include "Aquatique.h"

#ifndef PARACANTHURUS_H
#define PARACANTHURUS_H

using namespace std;

//un Parancathurus est un animal aquatique
class Paracanthurus : virtual public Aquatique
{
	private :

	public:
		// constructeur
	    Paracanthurus(string name="Paracanthurus");
	    // destructeur
		virtual ~Paracanthurus();

		void Afficher() const;

		virtual void Cri() const;

		virtual void Identifier() const;

	    virtual void Manger() const;

	    virtual void QuiSuisJe() const;

		virtual void Menu_animal() const;

		virtual int Estunmamifere() const;

		virtual int Morsure() const;
};

#endif