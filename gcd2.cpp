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
    /*Practica 23
    Obtain the GCD of two numbers.
    */
    
    srand(time(0));
    
    cout << "INGRESE DOS NUMEROS: " << endl;
    int f = 0;
    cin >> f;   
    int g = 0;
    cin >> g;
    
    int x = maximo_comun_divisor(f,g);
    cout << "maximo comun divisor: " << x;
    return 0;
}