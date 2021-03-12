#include <iostream>
#include "td1.h"

using namespace std;



int main(){
	
    int DIM=5;
    //cout << "quelle taille de vecteur ?" << endl;
    //cin >> dim;
	//const int DIM(dim);
	//vecteur vect1(DIM);
	float tab[DIM];
	// test premier constructeur
	//affectation
	//vect1.get();
	// affichage
	//vect1.put();
	// test deuxieme constructeur
	// initialisation de tab
	for(int i=0;i<DIM;i++)
		tab[i]=i;

	vecteur vect2(DIM,tab);
	vect2.put();
	// test troisieme constucteur
	//vecteur vect3(vect2);
    //vect3.put();
    vecteur vect4(5);
    vect4 += vect2;
	vect4.put();
	return 0;
}
