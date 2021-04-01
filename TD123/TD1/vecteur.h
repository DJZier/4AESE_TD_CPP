#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>



using namespace std;

// L�a LAXAGUE 4 AE SE3

//TD 1 : PROTECTION ET CONSTRUCTEURS

// 1.1 La classe vecteur


class vecteur {

protected :
	int dim;
	float* elements;
	
public :
	
	//constructeur : donne des valeurs aux attributs de l'objet courant
	vecteur();
	vecteur(int taille);

	print_vecteur();	
	
	put(int place, float valeur);
	//this : attribution de l'objet en cours
	
	// destructeur appel� par le compilateur
	~vecteur();
	
	//TD2 : SURCHARGE 
	
	//nouvelle d�finition de l'op�rateur []
	float &operator[] (int indice);
	float operator[] (int indice) const;
	
	//op�rateur d'affectation =
	vecteur &operator = (vecteur v);
	
	int return_dim();
	float* return_elements();
	
	//op�rateur arithm�tique 
	// +=
	vecteur &operator += (vecteur v);
	
};

//op�rateur arithm�tique 
// +
vecteur &operator + (vecteur &vun, vecteur &v2);

#endif //TD vecteur.h

