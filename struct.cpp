#include <iostream>
#include <string>
//INSTITUTO TECNOLOGICO DE CHIHUAHUA II
//LENGUAJES DE INTERFAZ - C++
//AUTOR: ULISES DELGADO
//DATE: 01/12/22

//STRUCT DECLARATION
using namespace std;

struct plebe{
        char nombre[30];
        int edad;
    }
plebe1 = {"JUAN",33},
plebe2 = {"ROYCE",67},
plebe3;

int main() {
    //PRACTICA 1 y 2 DE LA UNIDAD 4.
    //DECLARAR ESTRUCTURAS
    
    cout << "EL NOMBRE DE LA PRIMERA PERSONA ES: " << plebe1.nombre << endl << "Y SU EDAD ES: " << plebe1.edad << endl;
    cout << "EL NOMBRE DE LA SEGUNDA PERSONA ES: " << plebe2.nombre << endl << "Y SU EDAD ES: " << plebe2.edad << endl;
    
    cout << "DIME EL NOMBRE DE LA TERCER PERSONA: " << endl;
    cin >> plebe3.nombre;
    cout << "DIME LA EDAD DE LA TERCER PERSONA: " << endl;
    cin >> plebe3.edad;
    
    cout << "EL NOMBRE DE LA TERCERA PERSONA ES: " << plebe3.nombre << endl << "Y SU EDAD ES: " << plebe3.edad << endl;
    
    return 0;
}
