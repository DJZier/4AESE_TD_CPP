#include "vecteur.h"

// Florian Convert 4AESE3

//constructeurs

vecteur::vecteur(){
		dim=0 ; 
		elements= NULL;
}

vecteur::vecteur(int taille){
		dim=taille;
		elements= new float[dim]; // alloue dim espaces m�moire de type float
		for (int i=0 ; i<dim ; i++){
			elements[i]=float(i);	
		};
}

vecteur::vecteur(const vecteur& aux) {
	dim = aux.dim;
	elements = new float[dim];
	for (int i = 0; i < dim; i++) {
		elements[i] = aux.elements[i];
	}
}
//destructeur

vecteur::~vecteur(){
		delete[] elements;
}

//fonctions

void vecteur:: print_vect(){
		cout<<"Elements du vecteur : " <<endl;
		for(int i=0 ; i<dim ; i++){
			cout<< elements[i] << " ";
		}	
		cout<<endl;
}


void vecteur::set(int place, float valeur){
		this->elements[place]=valeur;
}

//---------------------------------------------------------
// TD2 : SURCHARGE
//---------------------------------------------------------

float & vecteur :: operator[] (int indice){
	if (indice>this -> dim){
		throw 1;
	}
	
	return this->elements[indice];
}

//on ne modifie pas, on affiche juste
float vecteur::operator[] (int indice)const{
	if (indice>this -> dim){
        throw 2;
	}
	
	return this->elements[indice];
}

vecteur & vecteur :: operator = (vecteur v){
	
	if (v.dim > this->dim) {
		throw 3;
	}

	for (int i=0;i<dim;i++){
		this->elements[i]=v.elements[i];
	}
	
	return *this;
}

int vecteur::get_Dim(){
	return this->dim;
}

float* vecteur::return_elements(){
	float* aux = new float[this->dim];
	for (int i=0; i<dim; i++){
		aux[i]=this->elements[i];
	}
	return aux;
}

vecteur & operator + (vecteur &v1, vecteur &v2){
	
	
	if(v1.get_Dim() != v2.get_Dim()){
		throw 4;
	}
	
	vecteur aux(v1.get_Dim());

	for (int i=0; i<v1.get_Dim(); i++){
		aux.set(i,v1[i]+v2[i]);
	}
	return aux;
}

vecteur & vecteur:: operator +=(vecteur v){

	if (this->dim != v.get_Dim()) {
		throw 5;
	}
	for(int i=0; i<dim; i++){
		this->elements[i]=this->elements[i]+v.elements[i];
	}
	
	return *this;
}

//---------------------------------------------------------
// TD5 : SURCHARGE
//---------------------------------------------------------


vecteur multiplication(float f, vecteur& v) {
	vecteur aux(v.dim);
	for (int i = 0; i < v.dim; i++) {
		aux[i] = v[i] * f;
	}
	return aux;
}

void matrice::print() {
		int i;
		for (i = 0; i < 10; i++) {
			cout << " Vecteur [" << i << "] : ";
			tab[i]->print_vect();
		}
		cout << endl;
}
