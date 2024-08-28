//Instituto Tecnologico de Chihuahua II
//Departamento de Sistemas y Computacion
//Autor: Ulises Delgado
//Date: 25/11/22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>

using namespace std;



int main() {
    /*
	Make a simple calculator (console)
	*/
	   	
	bool s = true;
    while(s) {
    	float r = 0;
    	cout << "INGRESE EL PRIMER ENTERO: " << endl;
    	int a = 0;
    	cin >> a;
    	cout << "INGRESE EL SEGUNDO ENTERO: " << endl;
    	int b = 0;
    	cin >> b;
    	
    	cout << "1- SUMAR" << endl;
    	cout << "2- RESTAR" << endl;
    	cout << "3- MULTIPLICAR" << endl;
    	cout << "4- DIVIDIR" << endl;
    	
    	int op = 0;
    	while(op<1 || op>4) {
    		cin >> op;
    		if(op<1 || op>4) {
    			cout << "OPCION INVALIDA, INTENTE DE NUEVO: " << endl;
			}
		}
    	
    	switch(op){
    		case 1:
    			r = a+b;
    		break;
    		case 2:
    			r = a-b;
    		break;
    		case 3:
    			r = a*b;
    		break;
    		case 4:
    			r = a/b;
    		break;
    		default:
    			cout << "hola";
    		break;
		}
		
		cout << "RESULTADO = " << r << endl << endl; 
		cout << "DESEA CONTINUAR? (S/N)" << endl; 
		char c = 'a';
		cin >> c;
		if(c=='N' || c=='n') {
			s = false;
		}
		else {
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
			cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
		}
	}
	
    return 0;
}