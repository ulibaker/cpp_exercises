//Instituto Tecnológico de Chihuahua II
//Departamento de Sistemas y Computación
//Autor: Ulises Delgado
//date: 24/10/22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>

using namespace std;

int maximo_comun_divisor(int a, int b) {
    int temporal;
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

int main() {
    /*Practica 27
    In a building there are 6 floors with 4 doors each one: (A, B, C, and D).
    Get the inhabitants of each door.
    
    Print the most populated door.
    */
    /*int a[6];
    for(int i = 0; i<6; i++) {
        a[i]=0;    
    }*/
    
    int m=0;
    int pi=0;
    int pu=0;
    int e[6][4];
    for(int i = 0; i<6; i++) {
        for(int j = 0; j<4; j++) {
            cout << "INGRESE EL NUMERO DE HABITANTES DE LA PUERTA " << j+1 << ", PISO " << i+1 << ":" << endl;
            cin >> e[i][j];
            if(e[i][j]>m) {
                m=e[i][j];    
                pi=i+1;
                pu=j+1;
            }
        }   
    }
    
    cout << "LA PUERTA MAS POBLADA ES LA " << pi << "-" << pu << ", CON " << m << " PERSONAS."; 
        
    return 0;
}