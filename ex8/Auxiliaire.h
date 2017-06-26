#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
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
#include "User.h"
#include "Griffon.h"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"
#define DEFAULT_COLOR "\033[0m"
#define LIGNE cout<<"---------------------------------------------------------------------"<<endl

using namespace std;

#ifndef AUXILIAIRE_H
#define AUXILIAIRE_H

void Accueil(string nom, int &compteur, int &nb_animaux, Animal *Zoo[]);
void Logo();
//Suppresion();
void Visite(Animal *Zoo[], int &nb_animaux);
void Menu(string nom, int &compteur, int &nb_animaux, Animal *Zoo[]);
/*MenuAnimal();*/
void Choix_Animal(Animal *Zoo[], int &nb_animaux);
string Nommer();


#endif