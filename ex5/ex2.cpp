#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
using namespace std;

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
		Date() // ok
		{
			jour = 1;
			mois = 1;
			an = 0;
			LABEL;
		}

		// constructeurs avec parametres
		Date(int jj, int mm) // ok
		{
			jour = jj;
			mois = mm;
			an = 0;
			LABEL;
		}

		Date(int jj, int mm, int aa, const string &nom)
		{
			jour = jj;
			mois = mm;
			an = aa;
			 // réservation de la mémoire
	        LABEL = nom;
		}

		// constructeur par copie
		Date(const Date &acopier)
		{
			jour = acopier.jour;
			mois = acopier.mois;
			an = acopier.an;
			LABEL = acopier.LABEL;
		}

		// accesseurs
		int getJour() const // ok
		{
			return jour;
		}

		int getMois() const // ok
		{
			return mois;
		}

		int getAn() const // ok
		{
			return an;
		}

		string getLabel() const
		{
			return LABEL;
		}

		// mutateurs (how to become a X-man)
		void setJour(const int &_jour) // ok
		{
			jour = _jour;
		}

		void setMois(const int &_mois) // ok
		{
			mois = _mois;
		}
		// ex2: une façon possible
		void setAn(const int &_an) // ok
		{
			an = _an;
		}

		void setLabel(const string _label)
		{
			LABEL = _label;
		}

		// Machete is now known as Tilde The Destructor
		~Date()
		{
			// je crois qu'on n'a plus besoin de ça, maintenant
			/*if (LABEL)
			{
				delete[] LABEL;
				LABEL = 0;
			}*/
		}

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


// operateur = (affectation)
Date & Date::operator=(const Date &D)
{
	// affichage pedagogique
	cout << "Bravo a toi, tu viens d'utiliser l'operateur d'affectation !!!" << endl;

	jour = D.jour;
	mois = D.mois;
	an = D.an;

	LABEL = D.LABEL;

	return *this;

}

// operateur == (comparaison)
bool Date::operator==(const Date &D)
{
	if (getJour() == D.getJour() &&
		getMois() == D.getMois() &&
		  getAn() == D.getAn())
		return true;
	else
		return false;

	// autre possibilité :
	/*if (DateToDouble() == D.DateToDouble())
		return true;
	else
		return false;*/
}

Date Date::operator+(const int &JeanCharlesHenriPhilibert)
{
	Date D;
	D.setJour(getJour());
	D.setMois(getMois());
	D.setAn(getAn() + JeanCharlesHenriPhilibert);
	D.setLabel(getLabel());

	return D;
}

istream & operator>>(istream &in, Date &D)
{
	string label;
	cout << "jour : ";
	cin >> D.jour;
	cout << "mois : ";
	cin >> D.mois;
	cout <<"annee : ";
	cin >> D.an;
	cout << "label : ";
	cin >> label;
	D.setLabel(label);
	return in;
}

ostream & operator<<(ostream &out, const Date &D)
{
	cout << D.getLabel() << " : " << setw(2) << setfill('0') << D.getJour() << "/" << setw(2) << D.getMois() << "/" << setw(4) << D.getAn() << endl;
	return out;
}


// affiche la date
void Date::Afficher() const // ok
{
	cout << setw(2) << setfill('0') << jour << "/" << setw(2) << mois << "/" << setw(4) << an << endl;
}

// saisie de la date par l'user
void Date::Saisie() // ok
{
	cout << "jour : ";
	cin >> jour;
	cout << "mois : ";
	cin >> mois;
	cout <<"annee : ";
	cin >> an;
}

// modification de la date
void Date::Modifier(const Date &acopier) // ok
{
	jour = acopier.jour;
	mois = acopier.mois;
	an = acopier.an;
}

bool Date::Comparer(const Date &D1, const Date &D2) const // ok
{
	if (D1.jour == D2.jour &&
		D1.mois == D2.mois &&
		D1.an == D2.an)
	{
		cout << D1.jour << "/" << D1.mois << "/" << D1.an << " == ";
		cout << D2.jour << "/" << D2.mois << "/" << D2.an << endl;
		return true;
	}
		
	else
	{
		cout << D1.jour << "/" << D1.mois << "/" << D1.an << " != ";
		cout << D2.jour << "/" << D2.mois << "/" << D2.an << endl;
		return false;
	}
}

bool Date::checkDate() // ok
{
   int valid = true;
   int month_length[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (Estbissextile() == true) // si c'est une année bissextile, fevrier a 29 jours au lieu de 28
   {
      month_length[2] = 29;
   }
   if (mois < 1 || mois > 12) // vérifie si le mois existe
   {
      valid = false;
   } 
   else if ( jour < 1 || jour > month_length[mois] ) // vérifie si le mois existe
   {
      valid = false;
   }
   return valid;
}

bool Date::Estbissextile() // ok
{
   bool leap;
   if(an%4 == 0)
   {
	   	if (an%100 != 0)
	   	{
	   		cout << "Est bissextile" << endl;
	   		leap = true;
	   	}
	   	else if (an%400 == 0)
	   	{
	   		cout << "Est bissextile" << endl;
	   		leap = true;
	   	}
   }
   else
   {
   	cout << "N'est pas bissextile" << endl;
   		leap = false;
   }
   return leap;

}

bool Estbissextile_EXT(const int &an) // ok
{
	bool leap;
   if(an%4 == 0)
   {
	   	if (an%100 != 0)
	   	{
	   		cout << "Est bissextile" << endl;
	   		leap = true;
	   	}
	   	else if (an%400 == 0)
	   	{
	   		cout << "Est bissextile" << endl;
	   		leap = true;
	   	}
   }
   else
   {
   	cout << "N'est pas bissextile" << endl;
   		leap = false;
   }
   return leap;
}

// ex2 convertit une date en double
double DateToDouble(const Date &D) // ok
{
	double sortie = 0;
	sortie += static_cast<double>(D.getJour()*1000000); // cette écriture est un peu longue pour un cast
	sortie += (double)(D.getMois()*10000);
	sortie += (double)D.getAn();
	return sortie;
}

// pour le fun
void getUserName (string user) // ok
{
	int i;
	user = getenv("HOME");

	for (i = 0; i < user.size()-6; i++)
	{
		user[i] = user[i+6];
	}
	user[user.size()-6] = '\0';
}

int main(int argc, char *argv[])
{
	/* code */
	bool comparaison;
	double testDateToDouble;
	string user;
	char c;
	Date D;
	Date D1;
	Date D2;

	getUserName(user);

	cout << "Bonjour " << user << endl;
	cin >> D;
	cout << D << endl;

	/*D.Saisie();
	D.Afficher();
	D1.Saisie();
	D.Modifier(D1);
	D.Afficher();
	D.Comparer(D, D1);
	D.Estbissextile();
	// test de la fonction Estbissextile_EXT
	comparaison = Estbissextile_EXT(D.getAn());
	D.setAn(2039);
	D.Afficher();
	testDateToDouble = DateToDouble(D);
	cout.setf(ios::fixed);
	cout << setprecision(2) << testDateToDouble << endl;

	// test de l'opérateur +
	D.setJour(1);
	D1.setJour(1);
	D.setMois(1);
	D1.setMois(1);
	D.setAn(1);
	D1.setAn(1);
	D2 = D + 1;
	D2.Afficher(); // devrait afficher 01/01/0002 // ok*/
	

	cout << "Au revoir, " << user << endl;
	return 0;
}