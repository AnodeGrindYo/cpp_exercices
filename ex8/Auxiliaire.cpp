#include "Auxiliaire.h"


void Accueil(string user, int &compteur, int &nb_animaux, Animal *Zoo[])
{
	string continuer;
	char c;
	system("clear");
	LIGNE;
	Logo();
	cout<<YELLOW<<"\nAppuyez sur 'entree' pour continuer"<<endl;
	LIGNE;
	getline(cin, continuer);
	//Menu(user, compteur, nb_animaux, Zoo);

}

void Logo()
{
	cout<<WHITE<<"	        .-----------------._,,"<<endl;
	cout<<"                |    "<<RED<<"Zoo LDNR"<<WHITE<<"    "<<YELLOW<<"(_\")="<<endl;
	cout<<"                "<<WHITE<<"|"<<YELLOW<<"Avec des animaux"<<WHITE<<"  |"<<YELLOW<<"||"<<CYAN<<"                __"<<endl;
	cout<<"                "<<WHITE<<"|    "<<GREEN<<"dedans..."<<WHITE<<"     |"<<YELLOW<<"|#\\_____       "<<CYAN<<".-/  \\"<<endl;
	cout<<"         "<<BLUE<<"ssgg"<<WHITE<<"   |------------------|"<<YELLOW<<"\\# # # #\\    "<<CYAN<<".''  ..'----,_"<<endl;
	cout<<"    "<<BLUE<<"____SG ..]  "<<WHITE<<"|"<<PURPLE<<"       |/         "<<WHITE<<"|"<<YELLOW<<" \\##_#_#/\\ "<<CYAN<<"=:.'-\\         )\\"<<endl;
	cout<<BLUE<<" ,-( _   SS(_9)_"<<WHITE<<"|      "<<PURPLE<<"_(\")        "<<WHITE<<"|"<<YELLOW<<" |/|/\\|\\|   "<<CYAN<<"::   |  ,_   /  `"<<endl;
	cout<<BLUE<<"/ (_____;-.____;;    "<<PURPLE<<"o(_,\\\\        "<<WHITE<<"|"<<YELLOW<<" I I  I I    "<<CYAN<<"`   [|_/\\\\_]"<<endl;
	cout<<""<<endl;
}

void Menu(string user, int &compteur, int &nb_animaux, Animal *Zoo[])
{
	int choix;
	int i;
	string nom;
	string continuer;
	
	system("clear");
	Logo();

	// s'affiche si c'est la première fois que l'utilisateur est dans le menu
	if(compteur == 0)
	{
		User utilisateur;

		LIGNE;
		cout<<"\nBonjour, euh... quel est votre nom, deja?"<<endl;
		cin>>nom;
		utilisateur.setUsername(nom);
		cout<<"Oui, tu t'appelles "<<utilisateur.getUsername()<<", je me souviens, maintenant."<<endl;
		getline(cin, continuer);
		getline(cin, continuer);
		cout<<"Et bien "<<utilisateur.getUsername()<<", felicitations pour l'acquisition de ce zoo!"<<endl;
		cout<<"Il te faut maintenant acheter des animaux, sinon personne ne va venir visiter ce zoo...\n"<<endl;
		getline(cin, continuer);
		Choix_Animal(Zoo, nb_animaux);
	}
	else
	{
		do
		{
			LIGNE;
			LIGNE;
			cout<<"Menu principal"<<endl;
			LIGNE;
			cout<<"Nombre d'animaux dans le zoo : "<<nb_animaux<<endl;
			cout<<"1 - Visiter le zoo"<<endl;
			cout<<"2 - Ajouter un animal"<<endl;
			cout<<"0 - Quitter"<<endl;
			LIGNE;
			cin>>choix;
		} while (choix != 1 && choix != 2 && choix != 0);
		switch (choix)
		{
			case 0: 
			{
				for (i = 0; i < nb_animaux; i++)
					delete Zoo[i];
				/*cout<<"Appuyez sur 'entree' pour continuer ";
				getline(cin, continuer);
				getline(cin, continuer);*/
				exit(EXIT_SUCCESS);
			}
			case 1:
			{
				Visite(Zoo, nb_animaux);
				break;
			}
			case 2:
			{
				Choix_Animal(Zoo, nb_animaux);
				break;
			}
		}
	}
	compteur++;
	Menu(user, compteur, nb_animaux, Zoo);
}

void Choix_Animal(Animal *Zoo[], int &nb_animaux)
{
	int choix;
	string animalName;
	string test; // pour stopper l'affichage avec un getline()

	system("clear");
	LIGNE;
	LIGNE;
	cout<<"Quel animal voulez-vous acheter ?"<<endl;
	LIGNE;
	do
	{
		cout<<"1 - Aquatiques"<<endl;
		cout<<"2 - Avec des ailes"<<endl;
		cout<<"3 - Felins"<<endl;
		cout<<"4 - Hybrides mythologiques"<<endl;
		cout<<"0 - retour au menu precedent"<<endl;
		LIGNE;
		cin>>choix;
	} while (choix != 1 && choix != 2 && choix != 3 && choix != 4 && choix != 0);
	
	switch(choix)
	{
		case 0: return;
		case 1: // POISSONS ET TRUCS QUI VIVENT DANS L'EAU
		{
			do
			{
				system("clear");
				LIGNE;
				LIGNE;
				cout<<"Animaux Aquatiques"<<endl;
				LIGNE;
				cout<<"1 - Axolotl"<<endl;
				cout<<"2 - Paracanthurus"<<endl;
				cin>>choix;
			} while (choix != 1 && choix != 2);
			switch(choix)
			{
				case 1:
				{
					cout<<"Felicitations, vous venez de faire l'acquisition d'un nouvel axolotl"<<endl;
					animalName = Nommer();
					Zoo[nb_animaux] = new Axolotl(animalName);
					//cout<<nb_animaux<<endl; // affichage de test
					nb_animaux++; 
					//cout<<nb_animaux<<endl; // idem
					cout<<"Appuyez sur 'entree' pour continuer ";
					getline(cin, test);
					getline(cin, test);
					break;
				}
				case 2 :
				{
					cout<<"Felicitations, vous venez de faire l'acquisition d'un nouveau poisson-chirurgien"<<endl;
					animalName = Nommer();
					Zoo[nb_animaux] = new Paracanthurus(animalName);
					nb_animaux++;
					cout<<"Appuyez sur 'entree' pour continuer ";
					getline(cin, test);
					getline(cin, test);
					break;
				}
				default :
				{
					cout<<"ERROR in Choix_Animal : wtf error - 1"<<endl;
					break;
				}
			}
			break;
		}
		case 2 : // PIAFS
		{
			do
			{
				system("clear");
				LIGNE;
				LIGNE;
				cout<<"Volatiles"<<endl;
				LIGNE;
				cout<<"1 - Canard"<<endl;
				cout<<"2 - Autruche"<<endl;
				LIGNE;
				cin>>choix;
			} while (choix != 1 && choix != 2);
			switch(choix)
			{
				case 1:
				{
					cout<<"Felicitations, vous venez de faire l'acquisition d'un nouveau canard"<<endl;
					animalName = Nommer();
					Zoo[nb_animaux] = new Canard(animalName);
					nb_animaux++;
					cout<<"Appuyez sur 'entree' pour continuer ";
					getline(cin, test);
					getline(cin, test);
					break;
				}
				case 2 :
				{
					cout<<"Felicitations, vous venez de faire l'acquisition d'une nouvelle autruche"<<endl;
					animalName = Nommer();
					Zoo[nb_animaux] = new Autruche(animalName);
					nb_animaux++;
					cout<<"Appuyez sur 'entree' pour continuer ";
					getline(cin, test);
					getline(cin, test);
					break;
				}
				default :
				{
					cout<<"ERROR in Choix_Animal : wtf error - 2"<<endl;
					break;
				}
			}
			break;
		}
		case 3 : // CHATONS MIGNONS
		{
			do
			{
				system("clear");
				LIGNE;
				LIGNE;
				cout<<"Felins"<<endl;
				LIGNE;
				cout<<"1 - Chat"<<endl;
				cout<<"2 - Lion"<<endl;
				cout<<"3 - Tigre"<<endl;
				LIGNE;
				cin>>choix;
			} while (choix != 1 && choix != 2 && choix != 3);
			switch(choix)
			{
				case 1:
				{
					cout<<"Felicitations, vous venez de faire l'acquisition d'un nouveau chat"<<endl;
					animalName = Nommer();
					Zoo[nb_animaux] = new Chat(animalName);
					nb_animaux++;
					cout<<"Appuyez sur 'entree' pour continuer ";
					getline(cin, test);
					getline(cin, test);
					break;
				}
				case 2 :
				{
					cout<<"Felicitations, vous venez de faire l'acquisition d'un nouveau lion"<<endl;
					animalName = Nommer();
					Zoo[nb_animaux] = new Lion(animalName);
					nb_animaux++;
					cout<<"Appuyez sur 'entree' pour continuer ";
					getline(cin, test);
					getline(cin, test);
					break;
				}
				case 3 :
				{
					cout<<"Felicitations, vous venez de faire l'acquisition d'un nouveau tigre"<<endl;
					animalName = Nommer();
					Zoo[nb_animaux] = new Tigre(animalName);
					nb_animaux++;
					cout<<"Appuyez sur 'entree' pour continuer ";
					getline(cin, test);
					getline(cin, test);
					break;
				}
				default :
				{
					cout<<"ERROR in Choix_Animal : wtf error - 3"<<endl;
					break;
				}
			}
			break;
		}
		case 4: // ANIMAUX MYTHOLOGIQUES
		{
			do
			{
				system("clear");
				LIGNE;
				LIGNE;
				cout<<"Mythologiques"<<endl;
				LIGNE;
				cout<<"1 - Griffon"<<endl;
				LIGNE;
				cin>>choix;
			} while (choix != 1);
			cout<<"Felicitations, vous venez de faire l'acquisition d'un nouveau griffon"<<endl;
			animalName = Nommer();
			Zoo[nb_animaux] = new Griffon(animalName);
			nb_animaux++;
			cout<<"Appuyez sur 'entree' pour continuer ";
			getline(cin, test);
			getline(cin, test);

		}
		break;
	}
	Choix_Animal(Zoo, nb_animaux);
}

void Visite(Animal *Zoo[], int &nb_animaux)
{
	int i;
	int choix;
	system("clear");
	LIGNE;
	LIGNE;
	do
	{
		cout<<"Visite"<<endl;;
		for(i = 0; i < nb_animaux; i++)
		{
			cout<<setw(2)<<i+1<<" - ";
			Zoo[i]->Identifier();
		}
		cout<<"choix : ";
		cin>>choix;
	} while (choix < 1 || choix > nb_animaux+1);
	Zoo[choix-1]->Menu_animal();
}

string Nommer()
{
	string nom;
	cout<<"Choisissez un nom : ";
	cin>>nom;
	return nom;
}
