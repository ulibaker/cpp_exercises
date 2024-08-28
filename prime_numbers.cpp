//Instituto Tecnologico de Chihuahua II
//Departamento de Sistemas y Computacion
//Autor: Ulises Delgado
//Date: 25/11/22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>

using namespace std;

bool esprimo(int n) {
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


int main() {
    /*
    Get n.
    Print all prime numbers between 1 and n.
    Ask the user if want to execute the program again.
	*/
   	
   	
    int N = 0;
    cout << "INGRESE EL NUMERO MAXIMO A CALCULAR SI ES PRIMO: " << endl;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (esprimo(i))
            cout << i << " ";
    }
  
    return 0;
}

