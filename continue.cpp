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
    /*Practica 29
    ASK THE USER IF WANT TO CONTINUE OR NOT
    */

    char x ='a';
    while(x!='N' && x!='n') {
        cout << "DO YOU WANT TO CONTINUE? YES(Y) OR NO(N): " << endl;
        cin >> x;
    }
    cout << "THANKS.";
    return 0;
}