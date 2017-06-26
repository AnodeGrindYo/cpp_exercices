#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


#ifndef ANIMAL_H
#define ANIMAL_H

class Animal // n'a pas de parents. enfants: Felin et AdesAiles
{
	private :
		string nom ;
		bool comestible;

	public :
		// constructeur
		Animal(string nom= "animal");
  		// destructeur
		virtual ~Animal();
		// getters
		string getNom() const;
		bool getComestible() const;
		// setters
		void setComestible(bool value);
		void setNom(string nom);
		// surcharge d'operateur
		//nom_classe & operator=(const nom_classe &r);
		Animal & operator=(const Animal &A);

		virtual void Manger() const =0;

		virtual void Identifier() const =0;

		virtual void Cri() const =0;

		void Dormir() const; // je n'y connais pas grand chose en bio, mais à prioris, ils dorment tous pareil

		virtual void QuiSuisJe() const;

		virtual void Menu_animal() const =0;

		virtual int Estunmamifere() const =0; // si j'ai bien compris, retourne 1 si c'est un mamifère, 0 sinon ? ou alors il s'agit du degré de mamiféritude, parce que ça prend en compte l'évolution, les mutations, le chimérisme, que sais-je?
};


#endif