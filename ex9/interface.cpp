#include "interface.h"

void boat()
{
	cout<<WHITE<<"                   ~"<<MAGENTA<<";"<<endl;
	cout<<WHITE<<"                  ,/"<<RED<<"|"<<WHITE<<"\\,"<<endl;
	cout<<WHITE<<"                ,/' "<<RED<<"|"<<WHITE<<"\\ \\,"<<endl;
	cout<<WHITE<<"              ,/'   "<<RED<<"|"<<WHITE<<" |  \\"<<endl;
	cout<<WHITE<<"            ,/'     "<<RED<<"|"<<WHITE<<" |   |"<<endl;
	cout<<WHITE<<"          ,/'  "<<MAGENTA<<"LDNR "<<RED<<"|"<<WHITE<<"/    |"<<endl;
	cout<<WHITE<<"        ,/__________"<<RED<<"|"<<WHITE<<"-----' ,"<<endl;
	cout<<RED<<"       ___.....-----''-----/"<<endl;
	cout<<RED<<"       \\                  /"<<endl;
	cout<<CYAN<<"   ~~-~^~^~`~^~`~^^~^~-^~^~^~-~^~^"<<endl;
	cout<<"     ~-^~^-`~^~-^~^`^~^-^~^`^~^-~^"<<DEFCOLOR<<endl;
}

void menu(vector <Equipage> &tabEquip)
{
	static int compt=0;
	int choix;
	string continuer;
	
	system("clear");
	boat();
	LIGNE
	if (compt == 0)
	{
		cout<<RED<<"Bienvenue au "<<MAGENTA<<"Vent Des Glops"<<RED<<", sponsorise par "<<MAGENTA<<"LDNR"<<endl;
		cout<<RED<<"Pour commencer, vous devez saisir la premiere equipe"<<endl;
		tabEquip.at(0).param();
	}
	else
	{
		cout<<GREEN<<"1 - Afficher tous les equipages"<<endl;
		cout<<"2 - Ajouter un equipage"<<endl;
		cin>>choix;
		/*try			// <==== GENERATEUR DE PROBLEMES
		{
			cin>>choix;
			throw(choix);
		}
		catch(double d)
		{
			menu(tabEquip);
		}
		catch(string s)
		{
			menu(tabEquip);
		}*/
		if(choix < 1 || choix > 2)
		{
			menu(tabEquip);
		}
		else
		{
			switch(choix)
			{
				case 1:
				{
					afficher(tabEquip);
					break;
				}
				case 2:
				{
					ajouter(tabEquip);
					break;
				}
				default:
				{
					system("bash FindThem.sh");
					exit(-1);
				}
			}
		}

	}

	compt++;
	menu(tabEquip);
}

void afficher(const vector <Equipage> &tabEquip)
{
	int i;
	string retour;

	system("clear");
	boat();
	LIGNE
	cout<<YELLOW;
	for (i = 0; i < tabEquip.size(); i++)
	{
		LIGNE
		cout<<tabEquip.at(i)<<endl;
		LIGNE
	}
	cout<<MAGENTA<<"appuyez sur entree pour revenir au menu precedent ";
	getline(cin, retour);
	getline(cin, retour);
}

void ajouter(vector <Equipage> &tabEquip)
{
	string retour;
	tabEquip.push_back(Equipage("Nouveau", (0.0, 0.0)));
	tabEquip.at(tabEquip.size()-1).param();
	cout<<MAGENTA<<"appuyez sur entree pour revenir au menu precedent ";
	getline(cin, retour);
}