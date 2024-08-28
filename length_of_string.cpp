//INSTITUTO TECNOLOGICO DE CHIHUAHUA II
//LENGUAJES DE INTERFAZ- C++
//MADE BY ULISES DELGADO
//27-10-22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    /*Practica 36
    Get a string and print its length.
    */
    
    string x;
    cout << "INGRESE LA CADENA: " << endl;
    cin >> x;
    int l = x.length();
    cout << "LA CADENA TIENE " << l << " CARACTERES";
    return 0;
}