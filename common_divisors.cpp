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

int main() {
    /*Practica 22
    Get all common divisors of two numbers */
    
    srand(time(0));
    
    cout << "INGRESE DOS NUMEROS: " << endl;
    int f = 0;
    cin >> f;   
    int g = 0;
    cin >> g;
    
    int m = 0;
    if(f<g) {
        m=f;
    }
    else {
        m=g;    
    }
    cout << "DIVISORES: " << endl;
    for(int i = 1; i<=m; i++) {
        if(f%i==0 && g%i==0) {
            cout << i << " ";    
        }
    }
    cout << m;
        
    return 0;
}