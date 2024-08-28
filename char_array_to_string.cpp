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
    /*Practica 33
    Fill a string with 2 char array
    */
    
    char name[]= "uli";
    char lastname[]= " delgado";
    
    string full = name;
    full = full+' ';
    full = full+lastname;
    
    cout << full;
    
    return 0;
}