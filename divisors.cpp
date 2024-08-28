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
    /*Practica 21
    get all divisors of a number.*/
    
    srand(time(0));
    
    cout << "INGRESE UN NUMERO: " << endl;
    int f = 0;
    cin >> f;   
    
    
    for(int i = 1; i<f/2; i++) {
        if(f%i==0) {
            cout << i << " ";    
        }
    }
    cout << f;
        
    return 0;
}