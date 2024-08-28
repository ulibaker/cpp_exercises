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
    /*Practica 25
    Get the grades of the test of 40 students
    1. Print all,
    2. Print the mean, 
    3. Print the smaller, 
    4. Print the largest.
    */
    int op =0;
    int may =0;
    int men =10;
    float med =0;
    
    int cal[40];
    for(int i=0; i<40; i++) {
        cout << "Ingrese la califa (0-10) del alumno numero " << i+1 << ":" << endl;
        cin >> cal[i];
        med = med + cal[i];
        if(cal[i]>may) {
            may = cal[i];    
        }
        if(cal[i]<men) {
            men = cal[i];    
        }
    }
    med = med/40;
    
    cout << "INGRESE UNA OPCION: " << endl;
    cout << "1. Listar notas" << endl;
    cout << "2. Calcular la media" << endl;
    cout << "3. Calcular el menor" << endl;
    cout << "4. Calcular el mayor" << endl;
    cin >> op;
    switch(op) {
        case 1:
            for(int i = 0; i<40; i++) {
                cout << cal[i] << endl;    
            }
        break;
        case 2:
            cout << "MEDIA: " << med << endl;
        break;
        case 3:
            cout << "MENOR: " << men << endl;
        break;
        case 4:
            cout << "MAYOR: " << may << endl;
        break;
        default:
            cout << "OPCION NO EXISTENTE";
        break;
    }
        
    return 0;
}