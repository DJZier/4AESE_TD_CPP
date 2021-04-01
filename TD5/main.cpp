
#include "vecteur.h"
#include "vect_int.h"


// Florian Convert 4AESE3


int main() {

	try {
		vecteur v1(3);
		vecteur v2(4);
		vecteur v3(4);
		//------------------------------------------
		v3.print_vect();
		v3 = multiplication(5.0, v2);
		v3.print_vect();
		//------------------------------------------
		matrice mat1;
		matrice mat2;
		//------------------------------------------
		mat1.tab[0] = new vecteur(5);
		mat2.tab[0] = new vect_int(3);
		//------------------------------------------
		for (int i = 1; i < 10; i++) {
			mat1.tab[i] = mat1.tab[0];
		}
		//------------------------------------------
		for (int i = 1; i < 10; i++) {
			mat2.tab[i] = mat2.tab[0];
		}
		//------------------------------------------
		cout << "mat1 : " << endl;
		mat1.print();
		cout << "mat2 : " << endl;
		mat2.print();
	}

	catch (int erreur){
		if (erreur == 1) {
			cout << "ERREUR : taille du tableau trop grande." << endl;
			exit (- 1);
		}
		if (erreur == 2) {
			cout<< "ERREUR : taille du tableau trop grande." << endl;
			exit(-1);
		}
		if (erreur == 3) {
			cout << "ERREUR : Les deux vecteurs n'ont pas la meme taille : " << endl;
			exit(-1);
		}
		if (erreur == 4) {
			cout << "ERREUR : Les deux vecteurs n'ont pas la meme taille : " << endl;
			exit(-1);
		}
		if (erreur == 5) {
			cout << "ERREUR : Les deux vecteurs n'ont pas la meme taille : " << endl;
			exit(-1);
		}

	}
	
}
