#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>



using namespace std;

// Léa LAXAGUE 4 AE SE3

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
	
	// destructeur appelé par le compilateur
	~vecteur();
	
	//TD2 : SURCHARGE 
	
	//nouvelle définition de l'opérateur []
	float &operator[] (int indice);
	float operator[] (int indice) const;
	
	//opérateur d'affectation =
	vecteur &operator = (vecteur v);
	
	int return_dim();
	float* return_elements();
	
	//opérateur arithmétique 
	// +=
	vecteur &operator += (vecteur v);
	
};

//opérateur arithmétique 
// +
vecteur &operator + (vecteur &vun, vecteur &v2);

#endif //TD vecteur.h

