#include "Aquatique.h"

#ifndef AXOLOTL_H
#define AXOLOTL_H

using namespace std;

//un Axolotl est un animal aquatique
class Axolotl : virtual public Aquatique
{
	private :

	public:
		// constructeur
	    Axolotl(string name="Axolotl");
	    // destructeur
		virtual ~Axolotl();

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