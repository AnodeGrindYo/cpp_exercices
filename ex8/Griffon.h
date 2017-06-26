#include "AdesAiles.h"
#include "Lion.h"

#ifndef GRIFFON_H
#define GRIFFON_H

class Griffon : public AdesAiles, public Lion
{
private:
	string couleur;

public:
	// constructeur
	Griffon(string name="un Griffon", string couleur="noir");
	// destructeur
	virtual ~Griffon();
	// getter
	string getCouleur() const;
	// setter
	void setCouleur(string newcolor);

	virtual void Manger() const;

	virtual void Identifier() const;

	void Cri() const;

	void Voler() const;

	void AfficherCouleur() const;

	void Modifier(); // modifie la couleur du Griffon

	virtual void QuiSuisJe() const;

	virtual void Menu_animal() const;

	virtual int Estunmamifere() const;

	virtual int Morsure() const;
};

#endif