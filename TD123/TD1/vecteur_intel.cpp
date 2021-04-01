#include "vecteur_intel.h"

//---------------------------------------------------------
// TD3 : Heritage
//---------------------------------------------------------

using namespace std;

vecteur_intel  operator + (vecteur_intel &v1, vecteur_intel &v2){
	
	int taille;
	
	if (v1.return_dim()<v2.return_dim()){
		taille=v2.return_dim();
	}
	else{
		taille=v1.return_dim();
	}
	
	vecteur_intel aux(taille);
	
	if(v1.return_dim()==v2.return_dim()) {
		for (int i; i<taille; i++){
			aux.put(i, v1[i]+v2[i]);
		}
	}
	else{
		if (v1.return_dim()<v2.return_dim()){
			for (int i; i<v1.return_dim(); i++){
				aux.put(i, v1[i]+v2[i]);
			}
			for (int i=v1.return_dim(); i<taille; i++){
				aux.put(i,v2[i]);
			}
		}
		else if (v1.return_dim()>v2.return_dim()){
			for (int i; i<v2.return_dim(); i++){
				aux.put(i, v1[i]+v2[i]);
			}
			for (int i=v2.return_dim(); i<taille; i++){
				aux.put(i,v1[i]);
			}
		}
	}
	return aux;
}



vecteur_intel & vecteur_intel :: operator += (vecteur_intel v){
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


