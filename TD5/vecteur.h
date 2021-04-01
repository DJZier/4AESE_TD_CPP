#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>



using namespace std;

// Florian Convert 4AESE3

//td1


class vecteur {

protected :
	int dim;
	float* elements;
	
public :
	
	//constructeurs
	vecteur();
	vecteur(int taille);
	vecteur(const vecteur& aux); 

	void print_vect();	
	
	void set(int place, float valeur);
	
	
	// destructeur
	~vecteur();
	
	//td2
	
	//opérateur []
	float &operator[] (int indice);
	float operator[] (int indice) const;
	
	//opérateur =
	vecteur &operator = (vecteur v);
	
	int get_Dim();
	float* return_elements();
	
	//opérateur +=
	vecteur &operator += (vecteur v);


	// td5
	friend vecteur multiplication(float f, vecteur& v);
	
};

//opérateur +
vecteur &operator + (vecteur &v1, vecteur &v2);


//opérateur *
vecteur multiplication(float f, vecteur& v);

//------------------------------------------------------------

class matrice {

public : 
	vecteur* tab[10];
	void print();

};

#endif

