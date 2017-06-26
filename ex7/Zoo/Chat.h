#include "Felin.h"

#ifndef CHAT_H
#define CHAT_H

using namespace std;

//un chat est un felin
class Chat : public Felin
{
	private :
	    int tatouage ; // numero de tatouage
	public:
	    Chat(string name="chat", int tatou=0)/*: Felin(name)*/; // dans le prototype, il ne faut pas mettre l'appel au constructeur parent

		void Afficher();

	    void Manger();

	    virtual void QuiSuisJe();

		virtual ~Chat();

};

#endif