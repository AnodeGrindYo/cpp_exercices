#include "Felin.h"

#ifndef TIGRE_H
#define TIGRE_H

using namespace std;

//un tigre est un felin
class Tigre : public Felin
{
	private :

	    int identification ; // numero de tatouage

	public:
		
	    Tigre(string name="Tigre", int id=0)/*: Felin(name)*/; // dans le prototype, il ne faut pas mettre l'appel au constructeur parent

		void Afficher();

		void Identifier();

	    void Manger();

	    virtual void QuiSuisJe();

		virtual ~Tigre();

};

#endif