#include "Equipage.h"
using namespace std;

// constructeur
Equipage::Equipage(string nom, GPS coord)
{
	this->nom = nom;
	this->coord = coord;
}

// destructeur
Equipage::~Equipage()
{
	/*cout<<BLUE<<"Un equipage repose parmis les poissons"<<DEFCOLOR<<endl;*/
}

// getters
string Equipage::getNom() const
{
	return nom;
}

GPS Equipage::getCoord() const
{
	return coord;
}

// setters
void Equipage::setNom(string nom)
{
	this->nom = nom;
}

void Equipage::setCoord(double longitude, double latitude)
{
	this->coord.setLongitude(longitude);
	this->coord.setLatitude(latitude);
}

// operateurs
Equipage & Equipage::operator = (const Equipage &team)
{
	this->nom = team.nom;
	this->coord = team.coord;
}

ostream & operator << (ostream &out, Equipage team)
{
	out <<BLUE<<"Nom       : "<< setw(10)<<MAGENTA<< team.nom<<endl;;
	out << team.coord <<endl;

	return out;
}

istream & operator >> (istream &in, Equipage &team)
{
	in>>team.nom>>team.coord;
	return in;
}

// parametrer l'equipage en entier
void Equipage::param()
{
	string name;
	double lon ;
	double lat ;
	cout<<GREEN <<"Nom         : "<<DEFCOLOR;
	cin>>name;
	cout<<YELLOW<<"Longitude   : "<<DEFCOLOR;
	cin>>lon;
	cout<<RED   <<"Latitude    : "<<DEFCOLOR;
	cin>>lat;
	this->setNom(name);
	this->setCoord(lon, lat);
}
