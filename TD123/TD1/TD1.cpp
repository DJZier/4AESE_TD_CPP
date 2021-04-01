
#include "vecteur.h"
#include "vecteur_intel.h"


// L�a LAXAGUE 4 AE SE3
using namespace std;


int main() {

	//TD 1 : PROTECTION ET CONSTRUCTEURS

	// appels constructeurs
	vecteur v1(); //vide
	vecteur v2(10); //vecteur de 3 �l�ments
	vecteur v3(v2); //recopie
	

	//affiche les �lements de v2
	v2.print_vecteur();
	v3.print_vecteur();
	
	//put
	v2.put(4, 13);
	v2.print_vecteur();
	
	
	//TD2 : SURCHARGE
	
	/*
	float a=v2[4];
	cout<<"La valeur de a est : "<< a <<endl;
	
	v2[4]=10;
	v2.print_vecteur();
	
	vecteur v4(3);
	vecteur v5(3);
	v5.put(2,15);
	v4.print_vecteur();
	v5.print_vecteur();
	
	v5=v4;
	v5.print_vecteur();
	
	vecteur v6(3);
	v6=v4+v5;
	v6.print_vecteur();
	
	vecteur v7(3);
	cout<<"Vecteur V7 : "<< endl;
	v7.print_vecteur();
	cout<<"V7 += V6 : " <<endl;
	v7+=v6;
	v7.print_vecteur();
	*/
	
	//TD3 : HERITAGE
	
	/*
	vecteur_intel v4(4), v5(2), v6(2);
	cout<<"Vecteur V4 : "<< endl;
	v4.print_vecteur();
	cout<<"Vecteur V5 : "<< endl;
	v5.print_vecteur();
	
	v6=v5+v4;
	cout<<"Vecteur V6 : "<< endl;
	v6.print_vecteur();
	*/
	
	
	
	vecteur_intel v7(4), v8(2);
	cout<<"Vecteur V7 : "<< endl;
	v7.print_vecteur();
	cout<<"Vecteur V8 : "<< endl;
	v8.print_vecteur();
	v7+=v8;
	cout<<"Vecteur V7+=v8: "<< endl;
	v7.print_vecteur();
	
}
