#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>



using namespace std;

// Florian Convert 4AESE3

//td1


// td4

template <typename T> class vecteur {

protected :
	int dim;
	T* elements;
	//td4


	template <typename Y> friend ostream& operator << (ostream& os, vecteur<Y>& v);

	template <typename Y> friend istream& operator >> (istream& is, vecteur<Y>& v);
	
public :
	
	//constructeur : donne des valeurs aux attributs de l'objet courant
	vecteur();

	vecteur(int taille);
	vecteur(const vecteur & aux);


	void print_Vect();	
	
	void set(int place, T valeur);
	//this : attribution de l'objet en cours
	
	// destructeur appelé par le compilateur
	~vecteur();
	
	//td2 operator overloading----------------------------------------------------
	
	//opérateur []
	T &operator[] (int indice);
	T operator[] (int indice) const;

	
	//opérateur =
	vecteur &operator = (vecteur v);


	
	int get_Dim();
	T* get_Elem();
	
	//opérateur +=
	vecteur &operator += (vecteur v);
	
	
};

//opérateur +
template <typename T> vecteur<T> operator + (vecteur<T> &vun, vecteur<T> &vdeux);

template <typename Y> ostream& operator << (ostream& os, vecteur<Y>& v);

template <typename Y> istream& operator >> (istream& is, vecteur<Y>& v);

#endif

