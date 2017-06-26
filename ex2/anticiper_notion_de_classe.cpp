#include <iostream>
using namespace std;

struct fraction
{
	double numerateur;
	double denominateur;
};

void SaisieFraction(fraction *f)
{
	cout << "\n" << endl;

	cout << "Numerateur : " << endl;
	cin >> f->numerateur;
	cout << "Denominateur : " << endl;
	cin >> f->denominateur;
}

void AfficherFraction(fraction f)
{
	int max;

	cout << "\n" << endl;

	int nb_trait=2;
	cout << f.numerateur << endl;
	cout << "----" <<endl;
	cout << f.denominateur << endl;
}

void MultiplierFractions(fraction f1, fraction f2, fraction *result)
{
	cout << "\n" << endl;

	result->numerateur = f1.numerateur*f2.numerateur;
	result->denominateur = f1.denominateur*f2.denominateur;
	cout << f1.numerateur << " x " << f2.numerateur << "\t\t" << result->numerateur << endl;
	cout << "------  = \t----" << endl;
	cout << f1.denominateur << " x " << f2.denominateur << "\t\t" << result->denominateur << endl;
}

void MultiplierParEntier(fraction f, fraction *result)
{
	int entier;

	cout << "\n" << endl;

	cout << "Mutiplication de " << f.numerateur << "/" << f.denominateur << " par un entier" << endl;
	cout << "Entier : ";
	cin >> entier;
	result->numerateur = entier*f.numerateur;
	result->denominateur = f.denominateur;
	cout << f.numerateur << "\t\t" << result->numerateur << endl;
	cout << "------ x " << entier << " =   -----"<< endl;
	cout << f.denominateur << "\t\t" << result->denominateur  << endl;
}

fraction operator*(const fraction &F1, const fraction &F2)
{
    // codage par vous de la multiplication
    fraction result;

    result.numerateur = F1.numerateur * F2.numerateur;
    result.denominateur = F1.denominateur * F2.denominateur;
    // pensez à mettre le return
    return result;
}

int main(int argc, char  *argv[])
{
	/* code */
	fraction result;
	fraction F1;
	fraction F2;
	fraction F3;

	SaisieFraction(&F1);
	//AfficherFraction(F1);
	SaisieFraction(&F2);
	//AfficherFraction(F2);
	/*MultiplierFractions(F1, F2, &result);
	MultiplierParEntier(F1, &result);/*

	// question 3)
	/*cin >> F1;
	cin >> F2;
	cout << F1 << F2;
	F3 = F1 * F2;*/

	// question 4)
	F3 = F1 * F2;
	AfficherFraction(F3);
	return 0;
}