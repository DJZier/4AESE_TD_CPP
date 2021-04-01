#ifndef vect_int_H
#define vect_int_H

#include <iostream>
#include "vecteur.h"

using namespace std;

// Florian Convert 4AESE3


class vect_int : public vecteur {
	
private : 

public :
	//constructeurs
	vect_int() : vecteur(){};
	vect_int(int taille) : vecteur(taille){};
	
	//opérateurs +=
	void operator +=(vect_int v);
	
};

// +
vect_int operator + (vect_int &v1, vect_int &v2);


#endif
