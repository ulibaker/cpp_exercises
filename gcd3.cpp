#include <iostream>
#include <string>
//INSTITUTO TECNOLOGICO DE CHIHUAHUA II
//LENGUAJES DE INTERFAZ- C++
//MADE BY ULISES DELGADO
//25-11-22

using namespace std;

int mcd(int, int, int);


 int main() {
 	//PRACTICA 32
    /* GCD OF 3 NUM */

 int a, b, c, mayor, comun;

 cout << "Introduzca tres enteros: "<< endl;
 cin >> a >> b >> c;


 mayor = a;

 if ( b > mayor )

 {

 mayor = b;
 b = a;

 }

 if ( c > mayor )

 {

 mayor = c;
 a = mayor;

 }


 comun = mcd(mayor, b, c);

 cout <<"\nEl maximo comun divisor es: "
      <<comun << endl;

 return 0;

 }

 int mcd(int z, int u, int v)

 {
 int t, maximo;

 while (u > 0)

 {
 if (u < v)

 {
 t = u;
 u = v;
 v = t;

 if(0 == z%v)
 maximo = v;

 }

 u = u - v;

 }

 return maximo;

 }