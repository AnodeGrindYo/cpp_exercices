#include "AdesAiles.h"

#ifndef AUTRUCHE_H
#define AUTRUCHE_H

class Autruche: public AdesAiles
{
private:
	int age;
public:

	Autruche(string name, int age=0);

	virtual ~Autruche();

	int getAge() const;

	virtual void Cri() const;

	virtual void Afficher() const;

	virtual void Manger() const;

	virtual void Identifier() const;

	void AgeHumain() const;

	virtual void QuiSuisJe() const;

	virtual void Menu_animal() const;

	virtual int Estunmamifere() const;

	virtual int Morsure() const;
	
};

#endif