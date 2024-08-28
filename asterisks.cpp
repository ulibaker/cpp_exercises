#include <iostream>
#include <string>
//INSTITUTO TECNOLOGICO DE CHIHUAHUA II
//LENGUAJES DE INTERFAZ- C++
//MADE BY UILSES DELGADO
//19-11-22


using namespace std;

struct plebe{
        char nombre[30];
        int edad;
    }
plebe1 = {"JUAN",33},
plebe2 = {"ROYCE",67},
plebe3;

int main() {
    /*
	Get a number (n), and print n asterisks (*).
	*/
    
    cout << "INDIQUE EL NUMERO DE ASTERISCOS: " << endl;
    int n = 0;
    cin >> n;
    
    for(int i=0; i<n; i++) {
    	cout << '*';
	}
    
    return 0;
}