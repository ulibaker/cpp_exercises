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



int main() {
    /*
    Print the full ASCII table.
	*/
	   	
    cout << "TABLA ASCII COMPLETA" << endl << endl;
    for (char c{' '}; c <= '~'; c++) {
        cout << c << ((c+1) % 32 ? ' ' : '\n');
    }
  
    return 0;
}
