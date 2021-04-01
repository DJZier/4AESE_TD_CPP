#include "vect_int.h"


//td3
template class vect_int<int>;
template class vect_int<float>;

template <typename T> int vect_int <T>::get_Dim() {
	return this->dim;
}

template <typename T> vect_int<T>  operator + (vect_int<T> &v1, vect_int<T> &v2){
	
	int taille;
	
	if (v1.get_Dim()<v2.get_Dim()){
		taille=v2.get_Dim();
	}
	else{
		taille=v1.get_Dim
		
		();
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



template <typename T> vect_int<T> & vect_int<T> :: operator += (vect_int<T> v){
	int taille;
	int i=0;
	
	if (this->dim < v.dim){
		taille=v.dim;
		for(i; i<this->dim; i++){
			this->elements[i]=this->elements[i]+v.elements[i];
		}	
		for(i=this->dim; i<taille; i++){
			this->elements[i]=v.elements[i];
		}
	}
	else if (this->dim > v.dim){
		taille=this->dim;
		for(i; i<v.dim; i++){
			this->elements[i]=this->elements[i]+v.elements[i];
		}	
		for(i=v.dim; i<taille; i++){
			this->elements[i]=this->elements[i];
		}
	}
	else{
		for(i; i<v.dim; i++){
		this->elements[i]=this->elements[i]+v.elements[i];
		}
	}
	return *this;
}


