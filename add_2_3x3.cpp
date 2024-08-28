//Instituto Tecnológico de Chihuahua II
//Departamento de Sistemas y Computación
//Autor: Ulises Delgado
//Date: 31/10/22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    //Practica 38
    /*
	Add the 2 elements of each position of 2 3x3 matrices and store the results in a new 3x3 matrix.
	Print the new matrix.
	*/
    
    srand(time(0));
    
    int f=3,c=3;
    
    int a[f][c];
    int b[f][c];
    
    for(int i = 0; i<f; i++) {
        for(int j = 0; j<c; j++) {
            cout << "INGRESE EL ELEMENTO " << i+1 << "-" << j+1 << " DE LA PRIMERA MATRIZ: " << endl;
            cin >> a[i][j];
            cout << "INGRESE EL ELEMENTO " << i+1 << "-" << j+1 << " DE LA SEGUNDA MATRIZ: " << endl;
            cin >> b[i][j];
        }
    }
    
    for(int i = 0; i<f; i++) {
        for(int j = 0; j<c; j++) {
            cout << a[i][j]+b[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}