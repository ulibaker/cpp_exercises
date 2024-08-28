//Instituto Tecnológico de Chihuahua II
//Departamento de Sistemas y Computación
//Autor: Ulises Delgado
//date: 24/10/22

#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>

using namespace std;

int main() {
    //Practica 31
    /*
    GET A 2X2 MATRIX AND COPY IT INTO A NEW ONE
	*/
    
    int a[2][2];
    int b[2][2];
    
    for(int i = 0; i<2; i++) {
        for(int j = 0; j<2; j++) {
            cout << "INGRESE EL ELEMENTO [" << i+1 << "][" << j+1 << "]:" << endl;
            cin >> a[i][j];
            b[i][j]=a[i][j];
        }
    }
    cout << endl;
    for(int i = 0; i<2; i++) {
        for(int j = 0; j<2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}