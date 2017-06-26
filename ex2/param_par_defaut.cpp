#include <iostream>
#include <cmath>
using namespace std;

struct cercle
{
	string nom;
	double rayon;
	double perimetre;
	double aire;
};

double Aire(string nomducercle = "Defaut_A", double rayon = 1)
{
	double aire = rayon*rayon*M_PI;
	cout << "\nFonction Aire\n-------------" << endl;
	cout << nomducercle << " a un rayon de " << rayon << " et une aire de " << aire << endl;
	cout << "-------------\n" << endl;
	return aire;
}

double Perimetre(string nomducercle = "Defaut_P", double rayon = 1)
{
	double perimetre = 2*rayon*M_PI;
	cout << "\nFonction Permimetre\n------------------" << endl;
	cout << nomducercle << " a un rayon de " << rayon << " et un perimetre de " << perimetre << endl;
	cout << "-------------\n" << endl;
	return perimetre;
}



int main(int argc, char *argv[])
{
	/* code */
	cercle patatoide;
	cout << "Nom du cercle : " << endl;
	cin >> patatoide.nom;
	cout << "Rayon : ";
	cin >> patatoide.rayon;
	patatoide.aire = Aire(patatoide.nom, patatoide.rayon);
	patatoide.perimetre = Perimetre(patatoide.nom, patatoide.rayon);
	cout << "\nTest des appels avec les parametres par defaut : " << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "Test de la fonction Aire :" << endl;
	Aire();
	cout << "Test de la fonction Perimetre" << endl;
	Perimetre();
	return 0;
}