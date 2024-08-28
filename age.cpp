//AUTOR: Ulises Delgado
//DATE: 25/11/22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>
#include <conio.h>


using namespace std;

struct Corredor{
	char nombre[20];
	int edad;
	char sexo; 
	char club[30];
}

c1, c2, c3, c4, c5;

int main(){
	// CLASSIFY PEOPLE ACCORDING TO THEIR AGE 
	// PRACTICA 3 UNIDAD 4
	cout<<"Escribe el nombre de la persona "<<": ";
	cin.getline(c1.nombre,20,'\n');
	cout<<"Digite su edad: ";
	cin>>c1.edad;
	cout<<"Digite su Sexo (M/F): ";
	cin>>c1.sexo;
	if(c1.edad < 18){
		strcpy(c1.club,"LITTLE BABY");
	} else if(c1.edad <= 40 || c1.edad >= 18){
		strcpy(c1.club,"OLD");
	} else {
		strcpy(c1.club,"VERY OLD");
	}

	cout<<"Categoria: "<<c1.club<<"\n";

	getch();
	cout<<"\nFinalizado.";
	return 0;
}
