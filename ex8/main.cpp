#include "Animal.h"
#include "Felin.h"
#include "Chat.h"
#include "Tigre.h"
#include "AdesAiles.h"
#include "Autruche.h"
#include "Canard.h"
#include "Lion.h"
#include "Paracanthurus.h"
#include "Axolotl.h"
#include "Auxiliaire.h"


using namespace std;

main()
{
	string user;
	int compteur = 0;
	int nb_animaux = 0;
	Animal *Zoo[50];

	Accueil(user, compteur, nb_animaux, Zoo); // pas ok
	Menu(user, compteur, nb_animaux, Zoo);
	// test
	/*Zoo[0] = new Axolotl("bidule");
	Zoo[1] = new Tigre("tigrou");
	nb_animaux=2;
	Zoo[0]->Menu_animal();*/
	//Visite(Zoo, nb_animaux); // ok
}