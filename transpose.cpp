//INSTITUTO TECNOLOGICO DE CHIHUAHUA II
//LENGUAJES DE INTERFAZ- C++
//MADE BY ULISES DELGADO
//31-10-22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    //Practica 37
    /*
	Get a 3x3 matrix
    print the transpose.
	*/
    
    srand(time(0));
    
    //cout << "INGRESE LAS FILAS: " << endl;
    int f = 3;
    //cin >> f;   
    
    //cout << "INGRESE LAS COLUMNAS: " << endl;
    int c = 3;
    //cin >> c;   
    cout << "INGRESE LA MATRIZ NORMAL: " << endl;
    int a[f][c];
    int b[f][c];
    
    for(int i = 0; i<f; i++) {
        for(int j = 0; j<c; j++) {
            cin >> a[i][j];
            b[j][i]=a[i][j];
        }
    }
    cout << "MATRIZ TRASPUESTA: " << endl;
    for(int i = 0; i<f; i++) {
        for(int j = 0; j<c; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}