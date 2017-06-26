#include <iostream>
#include <string>
using namespace std;
 
struct Rectangle
{
    int longueur;
    int largeur;
};
 
// somme d' entiers
int Somme(int i, int j)
{
    cout << "vous etes dans la somme de deux entiers : " << i << " et " << j << endl;
    cout << "resultat : " << i+j << endl;
    return (i + j);
}
 
// somme de flottants
double Somme(double i, double j)
{
    cout << "vous etes dans la somme de deux doubles : " << i << " et " << j << endl;
    cout << "resultat : " << i+j << endl;
    return (i + j);
}

// somme de chaines
string Somme(string chaine1, string chaine2)
{
    string concat;
    cout << "vous etes dans la somme de deux chaines : " << chaine1 << " et " << chaine2 << endl;
    concat = chaine1 + chaine2;
    cout << concat << endl;
    return concat;
}
 
// somme de structures
Rectangle Somme(Rectangle i, Rectangle j)
{
    // calcul de la somme k
    Rectangle res;
    res.longueur = i.longueur + i.largeur;
    res.largeur = j.largeur;
    return res;
}
 
int main()
{
    int res_entier = Somme(1, 2);
    double res_double = Somme(3.14, 3.14);
    cout << "somme entier " << res_entier << endl;
    cout << "somme double " << res_double << endl;
    Rectangle R1 = {10, 10};
    Rectangle R2 = {20, 20};
    Rectangle res_rectangle = Somme(R1, R2);
    cout << "resultat somme rectangle : largeur " << res_rectangle.largeur
         << " longueur " << res_rectangle.largeur << endl;
    string str = Somme("azerty", "uiop");
    //Somme(1, 3.14);
    Somme(4, "chaine");
}