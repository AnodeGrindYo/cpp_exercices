#include "Animal.h"
#include "Felin.h"
#include "Chat.h"
#include "Tigre.h"
#include "AdesAiles.h"
#include "Autruche.h"
#include "Canard.h"


using namespace std;

main()
{

	cout << endl<<"********  Animal ***************"<<endl ;
	Animal Dinosaure ("Pterodactyle") ;
	cout << endl;
	Dinosaure.Manger();
	Dinosaure.QuiSuisJe();
	cout << endl<<"*********** Felin ************"<<endl ;
	Felin F("Felin") ;
	cout << endl;
	F.Manger();
	F.QuiSuisJe();
	cout << endl<<"********** Chat *************"<<endl ;
	Chat C("Garfield",007) ;
	cout << endl;
	C.Manger();
	C.QuiSuisJe();
	cout << endl<<"***********************"<<endl ;
	C.Felin::Manger();
	cout << endl<<"***********************"<<endl ;
	cout << endl;
	cout << endl<<"********** Tigre ************"<<endl;
	Tigre T2("Tigrou", 006);
	T2.Manger();
	T2.QuiSuisJe();
	cout << endl<<"***********************"<<endl ;
	T2.Felin::Manger();
	cout << endl<<"***********************"<<endl ;
	cout << endl;
	cout << endl<<"********** Autruche *************"<<endl ;
	cout << endl;
	Autruche A(3);
	A.Manger();
	A.QuiSuisJe();
	A.AgeHumain();
	cout << endl<<"***********************"<<endl ;
	cout << endl;
	cout << endl<<"********** Canard *************"<<endl ;
	Canard Donald ("Donald");
	cout << endl;
	Donald.Cancane();
	Donald.AfficherCouleur();
	Donald.Modifier();
	Donald.AfficherCouleur();
	Donald.QuiSuisJe();
	cout << endl<<"***********************"<<endl ;
	cout << endl;
	AdesAiles piaf;
	piaf.QuiSuisJe();




	Animal *TRIO[3];
	TRIO[0]= new Chat;
	TRIO[1]=new Animal("zebre");
	TRIO[2]=new Felin("tigre");

	TRIO[2]->Manger();
	delete TRIO[0];
	delete TRIO[2];
	delete TRIO[1];

}