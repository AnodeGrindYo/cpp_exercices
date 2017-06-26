#include "AdesAiles.h"

#ifndef CANARD_H
#define CANARD_H

class Canard: public AdesAiles
{
private:
	string couleur;

public:
	// constructeur
	Canard(string name="un canard", string couleur="noir");
	// destructeur
	virtual ~Canard();
	// getter
	string getCouleur() const;
	// setter
	void setCouleur(string newcolor);

	virtual void Manger() const;

	virtual void Identifier() const;

	void Cri() const;

	void Voler() const;

	void AfficherCouleur() const;

	void Modifier(); // modifie la couleur du canard

	virtual void QuiSuisJe() const;

	virtual void Menu_animal() const;

	virtual int Estunmamifere() const;

	virtual int Morsure() const;
};

#endif