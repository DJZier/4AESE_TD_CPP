#ifndef TD1_H
#define TD1_H
#include <iostream>
using namespace std;

class vecteur {

	public:
		// constructeurs
		vecteur(int dim_vect=0);
		vecteur (int dim_vect,float* tab);
		vecteur (const vecteur & autre);

		// destructeur
        	virtual ~vecteur();

		// fonction d'affichage
		void put() const; //méthode constante car elle ne modifie les attributs de l'objet
        void put_value(int indice, float value);
		// fonction de saisie des elements du vecteur
		void get();
        float get_value(int indice) const;
        int getDim() const;

        //surchage d'opérateur
        float operator[](int indice) const;
        void operator=(const vecteur& other) ;

	private:
		// tableau de stockage des elements
		float *elements;
		// dimension du vecteur
		int dim;
};

vecteur::vecteur(int dim_vect): dim (dim_vect)
{
    // allocation des elements
    elements=new float[dim_vect];
}

vecteur::vecteur(int dim_vect,float* tab): dim(dim_vect)
{
    // compteur interne
    int i;
    // allocation des elements
    elements=new float[dim];
    // copie des elements
    for (i=0; i<dim; i++)
        elements[i]=tab[i];
    // possibilite d optimiser la copie avec un memcpy
}

// constucteur de recopie
vecteur::vecteur (const vecteur & autre): dim(autre.dim)
{
    // compteur interne
    int i;
    // allocation des elements
    elements=new float[dim];
    // copie du vecteur
    for (i=0; i<dim; i++)
        elements[i]=autre.elements[i];
}

//Destructeur
vecteur::~vecteur()
{
    if(dim>0)
        delete [] elements;

}
//fonction qui retourne la dimension
int vecteur::getDim() const{
    return dim;
}


// fonction d'affichage
void vecteur::put() const
{
    int i; // compteur interne
    // affichage
    cout << "(" ;
    for(i=0; i<dim; i++)
        cout << elements[i] << ' ';
    cout << ")\n";
}

void vecteur::put_value(int indice, float value){
    elements[indice] = value;
}

// fonction de saisie des elements du vecteur
void vecteur::get()
{
    int i; // compteur interne
    // saisie
    for(i=0; i<dim; i++)
    {
        cout << "taper le " << i+1 << " iËme element: ";
        cin >> elements[i];
    }
}

float vecteur::get_value(int indice)const{
    return elements[indice];
}

float vecteur::operator[](int indice) const{
    if (indice > getDim() || indice<0){
        cout << "l'indice doit être compris entre 0 et Dim" << endl;
        exit(-1);
    }
    return elements[indice];
}

void vecteur::operator=(const vecteur& other) {
    if (getDim()!= other.getDim()){
        cout << "on ne peut pas affecter 2 vecteurs de taille différente" << endl;
        exit(-1);
    }
    for (int i=0; i< getDim();i++){
        elements[i] = other.get_value(i);
    }
}


 vecteur operator+(const vecteur& left,const vecteur& right) {
    vecteur nouveau(left.getDim());
    if (left.getDim() != right.getDim()){
        cout << "on ne peut pas additionner 2 vecteurs de taille différente" << endl;
        exit(-1);
    }
    for (int i=0; i< (left.getDim()); i++){
        nouveau.put_value(i, left[i] + right[i]) ;
    }
    return nouveau;
}
 void operator+=(vecteur& left,const vecteur& right) {
    if (left.getDim() != right.getDim()){
        cout << "on ne peut pas additionner 2 vecteurs de taille différente" << endl;
        exit(-1);
    }
    for (int i=0; i< (left.getDim()); i++){
        left.put_value(i, left[i] + right[i]) ;
    }
}

#endif