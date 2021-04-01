#include "vecteur.h"
//#include "vect_int.h"



// Florian Convert 4AESE3

//Veuillez m'excuser j'ai eu un problème avec mon ordinateur je n'ai pu rendre les tds plus tôt.
//Vous trouverez donc dans ce fichier les td1,2,3 et 4 
//Merci de m'avoir accordé un temps supplémentaire


int main() {


	//td1------------------------------------------------------------------------------------

	//constructeurs
	vecteur<int> v1();
	vecteur <int> v2(10); 
	vecteur <int> v3(v2); //recopie
	
	/*
	//affiche les elements de v2
	cout << "V2 : " << endl;
	v2.print_Vect();
	cout << "V3 : " << endl;
	v3.print_Vect();
	
	//set
	v2.set(4, 13);
	v2.print_Vect();
	
	
	* /
	
	//td2-----------------------------------------------------------------------------------
	
	float a=v2[4];
	//cout<<"La valeur de a est : "<< a << endl;
	
	v2[4]=10;
	v2.print_Vect();
	
	vecteur <int> v4(3);
	vecteur <int> v5(3);
	v5.set(2,15);
	v4.print_Vect();
	v5.print_Vect();
	
	v5=v4;
	v5.print_Vect();
	
	vecteur <int> v6(3);
	v6=v4+v5;
	v6.print_Vect();
	
	vecteur <int> v7(3);
	cout<<"Vecteur V7 : "<< endl;
	v7.print_Vect();
	cout<<"V7 += V6 : " <<endl;
	v7+=v6;
	v7.print_Vect();
	*/
	
	//td3-------------------------------------------------------------------------------------
	
	/*
	vect_int v4(4), v5(2), v6(2);
	cout<<"Vecteur V4 : "<< endl;
	v4.print_Vect();
	cout<<"Vecteur V5 : "<< endl;
	v5.print_Vect();
	
	v6=v5+v4;
	cout<<"Vecteur V6 : "<< endl;
	v6.print_Vect();
	

	vect_int <int> v7(4);
	vect_int <int> v8(2);
	cout<<"Vecteur V7 : "<< endl;
	v7.print_Vect();
	cout<<"Vecteur V8 : "<< endl;
	v8.print_Vect();
	v7+=v8;
	cout<<"Vecteur V7+=v8: "<< endl;
	v7.print_Vect();*/

	//td4------------------------------------------------------------------------------------

	//4.1 VECTEUR GENERIQUE
	vecteur<float> v4;
	vecteur<float> v5(5);
	v5.set(0, 0.1);
	v5.set(1, 0.2);
	v5.set(2, 0.3);
	vecteur<float> v6(5);
	vecteur<float> v7(5);
	v6 = v5;
	v7 = v6 + v5;
	cout << "Les vecteurs FLOAT : " << endl;
	cout << "V5 : ";
	v5.print_Vect();
	cout << "V6 : ";
	v6.print_Vect();
	cout << "V7 : ";
	v7.print_Vect(); 
	v7 += v6;
	cout << "V7+=V6 : ";
	v7.print_Vect();

	cout << endl;
	cout << "Les vecteurs CHAR :" << endl;
	vecteur<char> v8(4);
	v8.set(0, 97);
	v8.set(1, 98);
	v8.set(2, 99);
	v8.set(3, 100);
	v8.print_Vect(); 
	vecteur<char> v9(4);
	vecteur<char> v10(4);
	v9 = v8;
	v10 = v9 + v8;
	v9.print_Vect();
	cout << "V9 : ";
	v10.print_Vect();
	v10 += v9;
	cout << "V10+=V9 : ";
	v10.print_Vect();

}
