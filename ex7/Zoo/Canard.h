#include "AdesAiles.h"

#ifndef CANARD_H
#define CANARD_H

class Canard: public AdesAiles
{
private:
	string couleur;

public:

	Canard(string couleur="noir");

	void Cancane();

	string getCouleur();

	void setCouleur(string newcolor);

	void AfficherCouleur();

	void Modifier(); // modifie la couleur du canard

	virtual void QuiSuisJe();

	virtual ~Canard();
};

#endif