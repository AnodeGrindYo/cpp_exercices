#include "GPS.h"

// constructeur
GPS::GPS(double longitude, double latitude)
{
	this->longitude = longitude;
	this->latitude  = latitude;
}

// destructeur
GPS::~GPS()
{
	/*cout<<"GLOU GLOU GLOU"<<endl;*/
}

// getters
double GPS::getLongitude() const
{
	return longitude;
}

double GPS::getLatitude() const
{
	return latitude;
}

// setters
void GPS::setLongitude(double longitude)
{
	this->longitude = longitude;
}

void GPS::setLatitude(double latitude)
{
	this->latitude = latitude;
}

// operateurs
GPS & GPS::operator = (const GPS &Coord)
{
	this->longitude = Coord.longitude;
	this->latitude = Coord.latitude;
}

ostream & operator << (ostream &out, GPS Coord)
{
	out <<YELLOW<<"Longitude : "<< setw(10)<<RED<< Coord.longitude<<endl;
	out <<YELLOW<<"Latitude  : "<< setw(10)<<RED<< Coord.latitude <<DEFCOLOR<<endl;
	return out;
}

istream & operator >> (istream &in, GPS &Coord)
{
	in>>Coord.longitude>>Coord.latitude;
	return in;
}