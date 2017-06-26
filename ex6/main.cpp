#include  <iostream>
using namespace std;

#include "Date.h"

int main(int argc, char *argv[])
{
	/* code */
	bool comparaison;
	double testDateToDouble;
	time_t yesterday = (long)time(NULL) - (60*60*24);
	tm *hier = localtime(&yesterday);
	Date D;
	Date D1;
	Date D2;
	Date *tabDynamique1;
	int i;
	int nb_cases;
	//string semaine[] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"}; // sert à rien, alors
	// creation d'un tableau avec 3 cases initialisées
	Date ANNIVERSAIRE[4] = {Date(18, 1, 1988, "naissance_Adr_G"), Date(7, 1, 1983, "naissance_Tobin_Abasi"), Date(27, 4, 1989, "naissance_Matt_Garstka")};

	//affectation de la date d'hier à l'indice 4 du tableau
	ANNIVERSAIRE[3] = Date(hier->tm_mday, hier->tm_mon+1, hier->tm_year, "Hier");
	// affichage de lANNIVERSAIRE
	for (i = 0; i < 4; i++)
		cout << ANNIVERSAIRE[i] << endl;

	// le tableau dynamique:
	cout << "Nombre de dates à stocker : ";
    cin >> nb_cases;
    tabDynamique1 = new Date[nb_cases];
    // remplissage avec les jours de la semaine
    for(i = 0; i < nb_cases; i++)
    {
    	cin >> tabDynamique1[i];
    }

	// verification :
    for(i = 0; i < nb_cases; i++)
    {
    	cout << tabDynamique1[i] << endl;
    }

	/*cin >> D;
	cout << D << endl;*/

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
	
    delete[] tabDynamique1;
	return 0;
}