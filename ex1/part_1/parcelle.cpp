#include <iostream>
#include <cstring>

using namespace std;

#define STR_MAX 26

struct terrain
{
	char proprietaire[STR_MAX];
	int longueur;
	int largeur;
	double prix;
};

void SaisirParcelle(terrain *nomTerrain);
void AfficherParcelle(terrain nomTerrain);
void CopierParcelle(terrain source, terrain *destination);
 
int main()
{
    terrain terr_Test;
    terrain testCopie;
    SaisirParcelle(&terr_Test);// rien n'a changé par rapport au C
    AfficherParcelle(terr_Test);
    CopierParcelle(terr_Test, &testCopie);
    AfficherParcelle(testCopie);

}

void SaisirParcelle(terrain *nomTerrain)
{
	cout << "Nom du proprietaire : " << endl;
	cin >> nomTerrain->proprietaire;
	cout << "Longueur : " << endl;
	cin >> nomTerrain->longueur; // pas besoin de & par cque l'on est plus avec scanf !
	cout << "Largeur : " << endl;
	cin >> nomTerrain->largeur;
	cout << "Prix : " << endl;
	cin >> nomTerrain->prix;
}

void AfficherParcelle(terrain nomTerrain)
{
	cout << "\nNom du proprietaire : " << nomTerrain.proprietaire << endl;
	cout << "\nLongueur : " << nomTerrain.longueur << "m" << endl;
	cout << "\nLargeur : " << nomTerrain.largeur << "m" << endl;
	cout << "\nPrix : " << nomTerrain.prix << "€" << endl;
}

void CopierParcelle(terrain source, terrain *destination)
{
	//*destination = source; // copie champ par champ est meilleures à ause du tableau de char
	strcpy(destination->proprietaire, source.proprietaire);
	destination->longueur = source.longueur;
	destination->largeur = source.largeur;
	destination->prix = source.prix;
}
