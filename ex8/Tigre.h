#include "Felin.h"

#ifndef TIGRE_H
#define TIGRE_H

using namespace std;

//un tigre est un felin
class Tigre : virtual public Felin
{
	private :

	    int identification ; // numero de tatouage

	public:
		// constructeur
	    Tigre(string name="Tigre", int id=0);
		// destructeur
		virtual ~Tigre();

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