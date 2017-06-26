#include "Felin.h"

#ifndef LION_H
#define LION_H

using namespace std;

//un Lion est un felin
class Lion : virtual public Felin
{
	private :

	public:
		// constructeur
	    Lion(string name="Lion");
	    // destructeur
		virtual ~Lion();

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