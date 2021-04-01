#include "vecteur.h"

// Florian Convert 4AESE3

//td1----------------------------------------------------

//constructeurs

template class vecteur<int>;
template class vecteur<float>;
template class vecteur<char>; 


template <typename T> vecteur<T>::vecteur(){
		dim=0 ; 
		elements= NULL;
}

template <typename T> vecteur<T>::vecteur(int taille){
		dim=taille;
		elements= new T[dim];
		for (int i=0 ; i<dim ; i++){
			elements[i]=T(i);	
		};
}

// constructeur de recopie
template <typename T> vecteur<T>::vecteur (const vecteur<T> & aux) {
	dim = aux.dim;
	elements = new T[dim];
	for (int i = 0; i < dim; i++) {
		elements[i] = aux.elements[i]; 
	}
}

//destructeur

template <typename T> vecteur<T>::~vecteur(){
		delete[] elements;
}

//fonctions

template <typename T> void vecteur<T>::print_Vect(){

		cout<<"Elements du vecteur : " ;
		for(int i=0 ; i<dim ; i++){
			cout<< elements[i] << " ";
		}	
		cout<<endl;
}


template <typename T> void vecteur<T>::set(int place, T valeur){
		this->elements[place]=valeur;
}

//td2---------------------------------------------------------

template <typename T> T & vecteur<T> :: operator[] (int indice){
	try
	{
		if (indice>this -> dim){
		throw string("on a dépassé la taille du vecteur");
		
	}
	
	return this->elements[indice];
	}
	catch(string const& error)
	{
		cerr << error << endl;
		exit(-1);
	}
	
	
}


template <typename T> T vecteur<T> ::operator[] (int indice)const{
	if (indice>this -> dim){
		cout<<"on a dépassé la taille du vecteur"<<endl;
		exit(-1);
	}
	
	return this->elements[indice];
}

template <typename T> vecteur<T> & vecteur<T> :: operator = (vecteur v){
	this->dim=v.dim;
	delete this-> elements;
	this->elements=new T[this->dim];
	
	for (int i=0;i<dim;i++){
		this->elements[i]=v.elements[i];
	}
	
	return *this;
}

template <typename T> int vecteur<T>::get_Dim(){
	return this->dim;
}

template <typename T> T* vecteur<T>::get_Elem(){
	T* aux = new T[this->dim];
	for (int i=0; i<dim; i++){
		aux[i]=this->elements[i];
	}
	return aux;
}

template <typename T> vecteur<T>  operator + (vecteur<T> &vun, vecteur<T> &vdeux){
	
	
	if(vun.get_Dim() != vdeux.get_Dim()){
		exit(-1);
	}
	
	vecteur <T> aux(vun.get_Dim());

	for (int i=0; i<vun.get_Dim(); i++){
		aux.set(i,vun[i]+vdeux[i]);
	}
	return aux;
}

template <typename T> vecteur<T> & vecteur<T>:: operator +=(vecteur v){
	for(int i=0; i<dim; i++){
		this->elements[i]=this->elements[i]+v.elements[i];
	}
	
	return *this;
}

//td4---------------------------------------------------------------------

template vecteur<int> operator + (vecteur<int>& vun, vecteur<int>& vdeux);
template vecteur<float> operator + (vecteur<float>& vun, vecteur<float>& vdeux);
template vecteur<char> operator + (vecteur<char>& vun, vecteur<char>& vdeux);

//4.2 ENTREE/SORTIE

template <typename Y> ostream& operator << (ostream& os, vecteur<Y>& v) {
	int i = 0;
	os << " [ ";
	for (i; i < v.get_Dim; i++) {
		os << v[i] << " ";
	}
	os << " ] ";
	return os;
};

template <typename Y> istream& operator >> (istream& is, vecteur<Y>& v) {
	int i = 0;
	for (i; i < v.get_Dim; i++) {
		is >> v[i]; 
	}
	return is;
};

/*
template ostream& operator << (ostream& os, vecteur<int>& v);
template ostream& operator << (ostream& os, vecteur<float>& v);
template ostream& operator << (ostream& os, vecteur<char>& v);

template istream& operator >> (istream& is, vecteur<int>& v);
template istream& operator >> (istream& is, vecteur<float>& v);
template istream& operator >> (istream& is, vecteur<char>& v);
*/