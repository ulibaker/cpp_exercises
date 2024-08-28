//INSTITUTO TECNOLOGICO DE CHIHUAHUA II
//LENGUAJES DE INTERFAZ- C++
//MADE BY ULISES DELGADO
//24-10-22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    //Practica 32
    /*
	GET THE NUMBER OF ROWS AND COLUMNS OF A MATRIX.
	FILL THE MATRIX WITH RANDOM NUMBERS.
	PASS ALL THE NUMBERS TO A NEW MATRIX AND PRINT IT.
	*/
    
    srand(time(0));
    
    cout << "INGRESE LAS FILAS: " << endl;
    int f = 0;
    cin >> f;   
    
    cout << "INGRESE LAS COLUMNAS: " << endl;
    int c = 0;
    cin >> c;   
    
    int a[f][c];
    int b[f][c];
    
    for(int i = 0; i<f; i++) {
        for(int j = 0; j<c; j++) {
            a[i][j]= rand() % 10 + 1;
            b[i][j]=a[i][j];
        }
    }
    cout << endl;
    for(int i = 0; i<f; i++) {
        for(int j = 0; j<c; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}