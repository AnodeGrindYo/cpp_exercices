#include "AdesAiles.h"

#ifndef AUTRUCHE_H
#define AUTRUCHE_H

class Autruche: public AdesAiles
{
private:
	int age;
public:

	Autruche(int age=0);

	int getAge();

	virtual void Afficher();

	virtual void Manger();

	void AgeHumain();

	virtual void QuiSuisJe();
	
	virtual ~Autruche();
};

#endif