#include "Felin.h"

#ifndef CHAT_H
#define CHAT_H

using namespace std;

//un chat est un felin
class Chat : virtual public Felin
{
	private :
	    int tatouage ; // numero de tatouage
	public:
		// constructeur
	    Chat(string name="chat", int tatou=0);
		// destructeur
		virtual ~Chat();

		void Afficher() const;

		virtual void Cri() const;

	    virtual void Manger() const;

	    virtual void Identifier() const;

	    virtual void QuiSuisJe() const;
	    
		virtual void Menu_animal() const;

		virtual int Estunmamifere() const;

		virtual int Morsure() const;

};

#endif