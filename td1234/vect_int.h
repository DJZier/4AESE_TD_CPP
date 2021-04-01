#ifndef vect_int_H
#define vect_int_H

#include <iostream>
#include "vecteur.h"


using namespace std;

// Florian Convert 4AESE3

//td3

template <typename T> class vect_int : public vecteur <T> {

public :
	//constructeurs
	vect_int() : vecteur <T>(){};
	vect_int(int taille) : vecteur <T> (taille){};
	
	//op�rateur +=
	vect_int &operator +=(vect_int v);
	
	int get_Dim();
};

// +
template <typename T> vect_int<T> operator + (vect_int<T> &v1, vect_int<T> &v2);


#endif
