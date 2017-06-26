#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <ctime>

using namespace std;
 
#ifndef CLASSE_H 
#define CLASSE_H

class Date
{
	private:
		int jour;
		int mois;
		int an;
		string LABEL;

		bool checkDate(); // ok
		// mais... mais... mais... si on met cette fonction ici, elle ne sera pas accessible dans le main() !
		//void operator=(const Date &D);

	public:
		// constructeur par defaut
		Date();

		// constructeurs avec parametres
		Date(int jj, int mm);

		Date(int jj, int mm, int aa, const string &nom);

		// constructeur par copie
		Date(const Date &acopier);

		// accesseurs
		int getJour() const;

		int getMois() const;

		int getAn() const;

		string getLabel() const;

		// mutateurs
		void setJour(const int &_jour);

		void setMois(const int &_mois);
		
		void setAn(const int &_an);

		void setLabel(const string _label);

		// Tilde The Destructor
		~Date();

		// opérateurs
		bool operator==(const Date &D);
		Date operator+(const int &JeanCharlesHenriPhilibert); // manque d'inspiration...
		//void operator=(const Date &D);
		Date & operator=(const Date &D);
		friend istream & operator>>(istream &in, Date &D);
		friend ostream & operator<<(ostream &out, const Date &D);

		// fonctions
		void Afficher() const; // ok
		void Saisie(); // ok
		void Modifier(const Date &acopier); // ok
		bool Comparer(const Date &D1, const Date &D2) const; // ok
		bool Estbissextile(); // ok
};

#endif