#include "vecteur.h"

// L�a LAXAGUE 4 AE SE3

//---------------------------------------------------------
// TD1 : PROTECTION ET CONSTRUCTEURS
//---------------------------------------------------------

//d�claration des constructeurs
using namespace std;

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

//destructeur

vecteur::~vecteur(){
		delete[] elements;
}

//fonctions

vecteur::print_vecteur(){
		cout<<"Elements du vecteur : " <<endl;
		for(int i=0 ; i<dim ; i++){
			cout<< elements[i] << " ";
		}	
		cout<<endl;
}


vecteur::put(int place, float valeur){
		this->elements[place]=valeur;
}

//---------------------------------------------------------
// TD2 : SURCHARGE
//---------------------------------------------------------

float & vecteur :: operator[] (int indice){
	if (indice>this -> dim){
		cout<<"on a d�pass� la taille du vecteur"<<endl;
		exit(-1);
	}
	
	return this->elements[indice];
}

//on ne modifie pas, on affiche juste
float vecteur::operator[] (int indice)const{
	if (indice>this -> dim){
		cout<<"on a d�pass� la taille du vecteur"<<endl;
		exit(-1);
	}
	
	return this->elements[indice];
}

vecteur & vecteur :: operator = (vecteur v){
	this->dim=v.dim;
	delete this-> elements;
	this->elements=new float[this->dim];
	
	for (int i=0;i<dim;i++){
		this->elements[i]=v.elements[i];
	}
	
	return *this;
}

int vecteur::return_dim(){
	return this->dim;
}

float* vecteur::return_elements(){
	float* aux = new float[this->dim];
	for (int i; i<dim; i++){
		aux[i]=this->elements[i];
	}
	return aux;
}

vecteur & operator + (vecteur &vun, vecteur &vdeux){
	
	
	if(vun.return_dim() != vdeux.return_dim()){
		exit(-1);
	}
	
	vecteur aux(vun.return_dim());

	for (int i; i<vun.return_dim(); i++){
		aux.put(i,vun[i]+vdeux[i]);
	}
	return aux;
}

vecteur & vecteur:: operator +=(vecteur v){
	for(int i; i<dim; i++){
		this->elements[i]=this->elements[i]+v.elements[i];
	}
	
	return *this;
}



