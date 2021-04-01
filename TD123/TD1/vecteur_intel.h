#ifndef VECTEUR_INTEL_H
#define VECTEUR_INTEL_H

#include <iostream>
#include "vecteur.h"


using namespace std;

// Léa LAXAGUE 4 AE SE3

//---------------------------------------------------------
// TD3 : Heritage
//---------------------------------------------------------


class vecteur_intel : public vecteur {
	
private : 

public :
	//constructeurs
	vecteur_intel() : vecteur(){};
	vecteur_intel(int taille) : vecteur(taille){};
	
	//opérateurs 
	// +=
	vecteur_intel &operator +=(vecteur_intel v);
	
};

// +
vecteur_intel operator + (vecteur_intel &v1, vecteur_intel &v2);


#endif
