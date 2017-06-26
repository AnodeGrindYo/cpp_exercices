#include <iostream>
#include <iomanip>
#include <vector>
#include <new>
#include <cstdlib>
#include <exception>
using namespace std;

#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define DEFCOLOR "\033[0m"
#define LIGNE cout<<"----------------------------------------------------------------"<<endl;

#ifndef GPS_H
#define GPS_H

class GPS
{
private:
	double longitude;
	double latitude;
public:
	// constructeur
	GPS(double longitude=0.0, double latitude=0.0);
	// destructeur
	~GPS();
	// getters
	double getLongitude() const;
	double getLatitude() const;
	// setters
	void setLongitude(double longitude);
	void setLatitude(double latitude);
	// opérateurs
	GPS & operator = (const GPS &Coord);
	friend ostream & operator << (ostream &out, GPS coord);
	friend istream & operator >> (istream &in, GPS &coord);

};

#endif