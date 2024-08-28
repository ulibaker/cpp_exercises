//INSTITUTO TECNOLOGICO DE CHIHUAHUA II
//LENGUAJES DE INTERFAZ- C++
//MADE BY ULISES DELGADO
//26-10-22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
    /*Practica 35
    GET A STRING AND PRINT IT ONLY IF THE LENGTH IS > 10
    */
    
    string x;
    cout << "INGRESE LA CADENA: " << endl;
    cin >> x;
    if(x.length()>10) {
        cout << x;    
    }
    
    return 0;
}