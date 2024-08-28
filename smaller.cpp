//AUTOR: ULISES DELGADO
//DATE: 01/12/22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>

using namespace std;



int main() {
	// FIRST QUESTION, TEST 4TH UNIT: 
	/*
	GET IN 10 N AND FIND THE SMALLER
	*/
	
	int m;
	int a[10];
	
	for(int i = 0; i<10; i++) {
		cout << "INGRESE EL NUMERO " << i+1 << ":" << endl;
		cin >> a[i];
		if(a[i]<m) {
			m = a[i];
		}
	}
	
	cout << "EL NUMERO MENOR HA SIDO: " << m <<endl;
	return 0;
}