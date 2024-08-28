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

int factorial(int n){
    int r=1;
    if (n < 0)
        n=1;
    else {
        for(int i = 1; i <= n; ++i) {
            r *= i;
        }  
    }
    return r;    
}

int main() {
    /*Practica 30
    write a function that recives a positive int and returns the factorial
    */
    int x = 0;
    cout << "META UN NUMERO ENTERO POSITIVO PA CALCULAR SU FACTORIAL, DE VOLADA PLEBE: " << endl;
    cin >> x;
    cout << "AL PURO MILLON, EL FACTORIAL FUE: " << factorial(x) << endl << "FIERRO";
    
    return 0;
}