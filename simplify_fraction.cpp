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
    /*Practica 24
    Get a fraction and simplify it.
    */
    
    cout << "INGRESE DOS NUMEROS: " << endl;
    int f = 0;
    cin >> f;   
    int g = 0;
    cin >> g;
    
    int m = 0;
    if(f>g) {
        m=f;
    }
    else {
        m=g;    
    }
    cout << "FRACCION REDUCIDA: " << endl;
    for(int i = 1; i<m; i++) {
        if(f%i==0 && g%i==0) {
            //cout << i << " ";  
            f=f/i;
            g=g/i;
            i=1;
        }
    }
    cout << f << "/" << g;
        
    return 0;
}