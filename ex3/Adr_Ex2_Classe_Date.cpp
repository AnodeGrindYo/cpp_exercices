#include <iostream>
using namespace std;

class Date
{
	private:
		int jour;
		int mois;
		int an;

	public:
		// constructeur par defaut
		Date()
		{
			jour = 1;
			mois = 1;
			an = 0;
		}

		// accesseurs
		int getJour()
		{
			return jour;
		}

		int getMois()
		{
			return mois;
		}

		int getAn()
		{
			return an;
		}

		// constructeur avec parametre
		Date(int jj, int mm)
		{
			jour = jj;
			mois = mm;
			an = 0;
		}

		// Chuck Norris is now known as Tilde The Destructor
		~Date()
		{
			/*In the eyes of a ranger,
			The unsuspecting stranger,
			Had better know the truth of wrong from right,

			Cause the eyes of a ranger are upon you,
			Any wrong you do, he's gonna see

			When you're in Texas, look behind you,

			Cause that's where the rangers gonna be.*/
		}

		void Afficher(); // ok
		void Saisie(); // ok
		void Modifier(const Date &acopier); // ok
		bool Comparer(const Date &D1, const Date &D2); // ok
		bool checkDate(); // ok
		bool Estbissextile(); // ok

};

void Date::Afficher()
{
	cout << jour << "/" << mois << "/" << an << endl;
}

void Date::Saisie()
{
	cout << "jour : ";
	cin >> jour;
	cout << "mois : ";
	cin >> mois;
	cout <<"annee : ";
	cin >> an;
}

void Date::Modifier(const Date &acopier)
{
	jour = acopier.jour;
	mois = acopier.mois;
	an = acopier.an;
}

bool Date::Comparer(const Date &D1, const Date &D2)
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

bool Date::checkDate() 
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

bool Date::Estbissextile()
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

bool Estbissextile_EXT(const int &an)
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

int main(int argc, char *argv[])
{
	/* code */
	bool comparaison;
	Date D;
	Date D1;

	D.Saisie();
	D.Afficher();
	D1.Saisie();
	D.Modifier(D1);
	D.Afficher();
	D.Comparer(D, D1);
	D.Estbissextile();
	// test de la fonction Estbissextile_EXT
	comparaison = Estbissextile_EXT(D.getAn);

	return 0;
}