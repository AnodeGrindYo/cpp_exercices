#include "GPS.h"
using namespace std;

#ifndef EQUIPAGE_H
#define EQUIPAGE_H

class Equipage
{
private:
	string nom; // le nom de l'équipage
	GPS coord; // les coordonnées de l'équipage
public:
	// constructeur et destructeur
	Equipage(string nom="anonyme", GPS coord=(0.0,0.0));
	~Equipage();
	// getters
	string getNom() const; // retourne le nom de l'équipage
	GPS getCoord() const; // retourne les coordonnées de l'équipage
	// setters
	void setNom(string nom); // assigne un nom à l'équipage
	void setCoord(double longitude, double latitude); // assigne les coordonnées
	// operateurs
	Equipage & operator = (const Equipage &team);
	friend ostream & operator << (ostream &out, Equipage team);
	friend istream & operator >> (istream &in, Equipage &team);
	// paramétrer l'équipage en entier
	void param();
};

#endif