#include "vect_int.h"

// Florian Convert 4AESE3


vect_int  operator + (vect_int &v1, vect_int &v2){
	
	int taille;
	
	if (v1.get_Dim()<v2.get_Dim()){
		taille=v2.get_Dim();
	}
	else{
		taille=v1.get_Dim();
	}
	
	vect_int aux(taille);
	
	if(v1.get_Dim()==v2.get_Dim()) {
		for (int i; i<taille; i++){
			aux.set(i, v1[i]+v2[i]);
		}
	}
	else{
		if (v1.get_Dim()<v2.get_Dim()){
			for (int i; i<v1.get_Dim(); i++){
				aux.set(i, v1[i]+v2[i]);
			}
			for (int i=v1.get_Dim(); i<taille; i++){
				aux.set(i,v2[i]);
			}
		}
		else if (v1.get_Dim()>v2.get_Dim()){
			for (int i; i<v2.get_Dim(); i++){
				aux.set(i, v1[i]+v2[i]);
			}
			for (int i=v2.get_Dim(); i<taille; i++){
				aux.set(i,v1[i]);
			}
		}
	}
	return aux;
	
}



void vect_int :: operator += (vect_int v){
	int taille;
	
	if (this->dim < v.dim){
		taille=v.dim;
		for(int i; i<this->dim; i++){
			this->elements[i]=this->elements[i]+v.elements[i];
		}	
		for(int i=this->dim; i<taille; i++){
			this->elements[i]=v.elements[i];
		}
	}
	else if (this->dim > v.dim){
		taille=this->dim;
		for(int i; i<v.dim; i++){
			this->elements[i]=this->elements[i]+v.elements[i];
		}	
		for(int i=v.dim; i<taille; i++){
			this->elements[i]=this->elements[i];
		}
	}
	else{
		for(int i; i<dim; i++){
		this->elements[i]=this->elements[i]+v.elements[i];
		}
	}
}


