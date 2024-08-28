//INSTITUTO TECNOLOGICO DE CHIHUAHUA II
//LENGUAJES DE INTERFAZ- C++
//MADE BY ULISES DELGADO
//26-11-22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>

using namespace std;



int main() {
    /*
    Get the radius of a sphere and calculate its volume.
	*/
   	
   	cout << "CUAL ES EL RADIO DE LA ESFERA? " << endl;
   	int r = 0;
   	cin >> r;
   	
   	float v = (4*(3.14*(r*r*r)))/3;
   	cout << "EL VOLUMEN ES: " << v;
}
