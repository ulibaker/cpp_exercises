//AUTOR: ULISES DELGADO
//DATE: 25/11/22

#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h> 
#include <cstdlib>
#include <time.h>
#include <conio.h>

using namespace std;

int main() {
	//GET A RANDOM NUMBER
	
	srand(rand() ^ time(NULL));
	int G = 1 + rand()%(5-1);
	cout << G << endl;
	
	getch();
	cout<<"\nFinalizado.";
	return 0;
}
