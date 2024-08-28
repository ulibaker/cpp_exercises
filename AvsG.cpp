//AUTOR: ULISES DELGADO
//DATE: 24/05/23
#include <bits/stdc++.h>

using namespace std;
//PROTOTYPE
//intelligent agent (A) has to reach the treasure (T), the enemy (G) has to reach A before. There are 2 pits (P).
//A moves first and can move 2 times, and then G moves only 1 time. Both can move: up, down, left, and right, never diagonally, and never into a pit.
//A begins at the bottom-left corner, the rest (T, G, P1 and P2) should be random. 
//Each run should be diferent.

//DEFINICION DE VARIABLES

//POSICION DE LOS AGENTES
//AGI -> Agente Inteligente
//P1 -> Pozo 1
//P2 -> Pozo 2
//T -> Tesoro
//G -> Gumpy
int posX_AGI, posY_AGI;
int posX_P1,  posY_P1;
int posX_P2,  posY_P2;
int posX_T,   posY_T;
int posX_G,   posY_G;

//ARREGLOS PARA VERIFICAR LAS 8 POSICIONES ADYACENTES
int dx[8] = {0,0,1,-1,-1,1,-1,1};
int dy[8] = {1,-1,0,0,-1,+1,+1,-1};

bool vida = true;
bool visitado[10][10];
bool finalizado;
bool movimiento_gumpy;
bool movimiento_random;

int movimientos_agente;

//MATRIZ PARA REPRESENTAR EL TABLERO
char tablero[10][10] = {{'*','*','*','*','*','*','*'},
                       {'*','.','.','.','.','.','*'},
                       {'*','.','.','.','.','.','*'},
                       {'*','.','.','.','.','.','*'},
                       {'*','.','.','.','.','.','*'},
                       {'*','.','.','.','.','.','*'},
                       {'*','*','*','*','*','*','*'}};


//FUNCION QUE DEVUELVE SI EL MOVIMIENTO PROXIMO NO SE SALE DE LOS LIMITES DEL TABLERO
bool movimientos_permitidos(int x, int y){
    return (x>0 && x<6 && y>0 && y<6);
}

void imprimir_tablero(){
    for(int i=0; i<=6; i++){
        for(int j=0; j<=6; j++){
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}
int escanea() { //ESTA FUNCION DETECTA SI GUMPY NOS PUEDE ALCANZAR EN SU SIGUENTE MOVIMIENTO
	cout << "AGI - ESCANEANDO:" << endl;
    if(tablero[posX_AGI-1][posY_AGI] == 'G') { // GUMPY ESTA ARRIBA
        return 1;
	} 
	else if(tablero[posX_AGI][posY_AGI+1] == 'G') { // GUMPY ESTA A LA DEREXA
        return 2;
	}
	else if(tablero[posX_AGI+1][posY_AGI] == 'G') { // GUMPY ESTA ABAJO
        return 3;
	}
	else if(tablero[posX_AGI][posY_AGI-1] == 'G') { // GUMPY ESTA A LA IZQUIERDA
        return 4;
	}
	else {
		return 0;
	}
}
/*void mueveG() {		
				srand(rand() ^ time(NULL));
				int moverand = 1 + rand()%(5-1); //LIBRE ALBEDRIO DE G
				cout << moverand << " RAND " << endl;
				if(moverand == 1) { // G SE DESPLAZA VOLUNTARIAMENTE PARA ARRIBA
					if(tablero[posX_G-1][posY_G] == '.' || tablero[posX_G-1][posY_G] == 'A') {
						tablero[posX_G][posY_G] = '.';
						tablero[posX_G-1][posY_G] = 'G';
						posX_G = posX_G-1;
						moverand = 0;
					}
					else {
						moverand++;
					}
				}
				if(moverand == 2) { // G SE DESPLAZA VOLUNTARIAMENTE PARA derexa
					if(tablero[posX_G][posY_G+1] == '.' || tablero[posX_G][posY_G+1] == 'A' ) { 					
						tablero[posX_G][posY_G] = '.';
						tablero[posX_G][posY_G+1] = 'G';
						posY_G = posY_G+1;
						moverand = 0;
					}
					else {
						moverand++;
					}
				}
				if(moverand == 3) { // G SE DESPLAZA VOLUNTARIAMENTE PARA ABAJO
					if(tablero[posX_G+1][posY_G] == '.' || tablero[posX_G+1][posY_G] == 'A' ) { 	
						tablero[posX_G][posY_G] = '.';
						tablero[posX_G+1][posY_G] = 'G';
						posX_G= posX_G+1;		
						moverand = 0;
					}
					else {
						moverand++;
					}
				}
				if(moverand == 4) { // G SE DESPLAZA VOLUNTARIAMENTE PARA izq
					if(tablero[posX_G][posY_G-1] == '.' || tablero[posX_G][posY_G-1] == 'A') { 
						tablero[posX_G][posY_G] = '.';
						tablero[posX_G][posY_G-1] = 'G';
						posY_G = posY_G-1;
						moverand = 0;
					}
					else {
						moverand=1;
					}
				}
				if(moverand == 1) { // G SE DESPLAZA VOLUNTARIAMENTE PARA ARRIBA
					if(tablero[posX_G-1][posY_G] == '.' || tablero[posX_G-1][posY_G] == 'A') {
						tablero[posX_G][posY_G] = '.';
						tablero[posX_G-1][posY_G] = 'G';
						posX_G = posX_G-1;
						moverand = 0;
					}
					else {
						moverand++;
					}
				}
				if(moverand == 2) { // G SE DESPLAZA VOLUNTARIAMENTE PARA derexa
					if(tablero[posX_G][posY_G+1] == '.' || tablero[posX_G][posY_G+1] == 'A' ) { 					
						tablero[posX_G][posY_G] = '.';
						tablero[posX_G][posY_G+1] = 'G';
						posY_G = posY_G+1;
						moverand = 0;
					}
					else {
						moverand++;
					}
				}
				if(moverand == 3) { // G SE DESPLAZA VOLUNTARIAMENTE PARA ABAJO
					if(tablero[posX_G+1][posY_G] == '.' || tablero[posX_G+1][posY_G] == 'A') { 	
						tablero[posX_G][posY_G] = '.';
						tablero[posX_G+1][posY_G] = 'G';
						posX_G = posX_G+1;	
						moverand = 0;	
					}
					else {
						moverand++;
					}
				}
				if(moverand == 4) { // G SE DESPLAZA VOLUNTARIAMENTE PARA izq
					if(tablero[posX_G][posY_G-1] == '.' || tablero[posX_G][posY_G-1] == 'A') { 
						tablero[posX_G][posY_G] = '.';
						tablero[posX_G][posY_G-1] = 'G';
						posY_G = posY_G-1;
						moverand = 0;
					}
					else {
					}
				}
}*/
void mueveAgi() {		
				srand(rand() ^ time(NULL));
				int moverand = 1 + rand()%(5-1); //LIBRE ALBEDRIO DE AGI
				cout << moverand << " RAND " << endl;
				if(moverand == 1) { // AGI SE DESPLAZA VOLUNTARIAMENTE PARA ARRIBA
					if(tablero[posX_AGI-1][posY_AGI] == '.' || tablero[posX_AGI-1][posY_AGI] == 'T') {
						tablero[posX_AGI][posY_AGI] = '.';
						tablero[posX_AGI-1][posY_AGI] = 'A';
						posX_AGI = posX_AGI-1;
						moverand = 0;
					}
					else {
						moverand++;
					}
				}
				if(moverand == 2) { // AGI SE DESPLAZA VOLUNTARIAMENTE PARA derexa
					if(tablero[posX_AGI][posY_AGI+1] == '.' || tablero[posX_AGI][posY_AGI+1] == 'T' ) { 					
						tablero[posX_AGI][posY_AGI] = '.';
						tablero[posX_AGI][posY_AGI+1] = 'A';
						posY_AGI = posY_AGI+1;
						moverand = 0;
					}
					else {
						moverand++;
					}
				}
				if(moverand == 3) { // AGI SE DESPLAZA VOLUNTARIAMENTE PARA ABAJO
					if(tablero[posX_AGI+1][posY_AGI] == '.' || tablero[posX_AGI+1][posY_AGI] == 'T' ) { 	
						tablero[posX_AGI][posY_AGI] = '.';
						tablero[posX_AGI+1][posY_AGI] = 'A';
						posX_AGI = posX_AGI+1;		
						moverand = 0;
					}
					else {
						moverand++;
					}
				}
				if(moverand == 4) { // AGI SE DESPLAZA VOLUNTARIAMENTE PARA izq
					if(tablero[posX_AGI][posY_AGI-1] == '.' || tablero[posX_AGI][posY_AGI-1] == 'T') { 
						tablero[posX_AGI][posY_AGI] = '.';
						tablero[posX_AGI][posY_AGI-1] = 'A';
						posY_AGI = posY_AGI-1;
						moverand = 0;
					}
					else {
						moverand=1;
					}
				}
				if(moverand == 1) { // AGI SE DESPLAZA VOLUNTARIAMENTE PARA ARRIBA
					if(tablero[posX_AGI-1][posY_AGI] == '.' || tablero[posX_AGI-1][posY_AGI] == 'T') {
						tablero[posX_AGI][posY_AGI] = '.';
						tablero[posX_AGI-1][posY_AGI] = 'A';
						posX_AGI = posX_AGI-1;
						moverand = 0;
					}
					else {
						moverand++;
					}
				}
				if(moverand == 2) { // AGI SE DESPLAZA VOLUNTARIAMENTE PARA derexa
					if(tablero[posX_AGI][posY_AGI+1] == '.' || tablero[posX_AGI][posY_AGI+1] == 'T' ) { 					
						tablero[posX_AGI][posY_AGI] = '.';
						tablero[posX_AGI][posY_AGI+1] = 'A';
						posY_AGI = posY_AGI+1;
						moverand = 0;
					}
					else {
						moverand++;
					}
				}
				if(moverand == 3) { // AGI SE DESPLAZA VOLUNTARIAMENTE PARA ABAJO
					if(tablero[posX_AGI+1][posY_AGI] == '.' || tablero[posX_AGI+1][posY_AGI] == 'T') { 	
						tablero[posX_AGI][posY_AGI] = '.';
						tablero[posX_AGI+1][posY_AGI] = 'A';
						posX_AGI = posX_AGI+1;	
						moverand = 0;	
					}
					else {
						moverand++;
					}
				}
				if(moverand == 4) { // AGI SE DESPLAZA VOLUNTARIAMENTE PARA izq
					if(tablero[posX_AGI][posY_AGI-1] == '.' || tablero[posX_AGI][posY_AGI-1] == 'T') { 
						tablero[posX_AGI][posY_AGI] = '.';
						tablero[posX_AGI][posY_AGI-1] = 'A';
						posY_AGI = posY_AGI-1;
						moverand = 0;
					}
					else {
						posX_AGI = posX_T;
						posY_AGI = posY_T;
						vida = false;
						cout << "AGI HA DESAPARECIDO (MIA)" << endl;
					}
				}
}
void correAgi(int movescape){
			cout << movescape << " ESCAPE " << endl;
			if(movescape == 1) {
				if(tablero[posX_AGI+1][posY_AGI] == '.' || tablero[posX_AGI+1][posY_AGI] == 'T') { //ESCAPE ABAJO AGI	
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI+1][posY_AGI] = 'A';
					posX_AGI = posX_AGI+1;
				}
				else if(tablero[posX_AGI][posY_AGI+1] == '.' || tablero[posX_AGI][posY_AGI+1] == 'T') { //ESCAPE A LA DEREXA
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI][posY_AGI+1] = 'A';
					posY_AGI = posY_AGI+1;
				}
				else if(tablero[posX_AGI][posY_AGI-1] == '.' || tablero[posX_AGI][posY_AGI-1] == 'T') { //ESCAPE A LA IZQ
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI][posY_AGI-1] = 'A';
					posY_AGI = posY_AGI-1;
				}
				else {
					tablero[posX_AGI][posY_AGI] = 'M'; //M DE MUERTO
					posX_AGI = posX_T;
					posY_AGI = posY_T;
					vida = false;
					cout << "AGI HA CAIDO EN COMBATE (KIA)" << endl;
				}
			}
			else if(movescape == 2) {
				if(tablero[posX_AGI+1][posY_AGI] == '.' || tablero[posX_AGI+1][posY_AGI] == 'T') { //ESCAPE ABAJO AGI
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI+1][posY_AGI] = 'A';
					posX_AGI = posX_AGI+1;
				}
				else if(tablero[posX_AGI-1][posY_AGI] == '.' || tablero[posX_AGI-1][posY_AGI] == 'T') { //ESCAPE ARRIBA
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI-1][posY_AGI] = 'A';
					posX_AGI = posX_AGI-1;
				}
				else if(tablero[posX_AGI][posY_AGI-1] == '.' || tablero[posX_AGI][posY_AGI-1] == 'T') { //ESCAPE A LA IZQ
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI][posY_AGI-1] = 'A';
					posY_AGI = posY_AGI-1;
				}
				else {
					tablero[posX_AGI][posY_AGI] = 'M'; //M DE MUERTO
					posX_AGI = posX_T;
					posY_AGI = posY_T;
					vida = false;
					cout << "AGI HA CAIDO EN COMBATE (KIA)" << endl;
				}
			}
			else if(movescape == 3) {
				if(tablero[posX_AGI][posY_AGI+1] == '.' || tablero[posX_AGI][posY_AGI+1] == 'T' ) { //ESCAPE A LA DEREXA
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI][posY_AGI+1] = 'A';
					posY_AGI = posY_AGI+1;
				}
				else if(tablero[posX_AGI-1][posY_AGI] == '.' || tablero[posX_AGI-1][posY_AGI] == 'T') { //ESCAPE ARRIBA
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI-1][posY_AGI] = 'A';
					posX_AGI = posX_AGI-1;
				}
				else if(tablero[posX_AGI][posY_AGI-1] == '.' || tablero[posX_AGI][posY_AGI-1] == 'T' ) { //ESCAPE A LA IZQ
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI][posY_AGI-1] = 'A';
					posY_AGI = posY_AGI-1;
				}
				else {
					tablero[posX_AGI][posY_AGI] = 'M'; //M DE MUERTO
					posX_AGI = posX_T;
					posY_AGI = posY_T;
					vida = false;
					cout << "AGI HA CAIDO EN COMBATE (KIA)" << endl;
				}
			}
			else if(movescape == 4) {
				if(tablero[posX_AGI+1][posY_AGI] == '.' || tablero[posX_AGI+1][posY_AGI] == 'T') { //ESCAPE ABAJO AGI
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI+1][posY_AGI] = 'A';
					posX_AGI = posX_AGI+1;
				}
				else if(tablero[posX_AGI][posY_AGI+1] == '.' || tablero[posX_AGI][posY_AGI+1] == 'T') { //ESCAPE A LA DEREXA
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI][posY_AGI+1] = 'A';
					posY_AGI = posY_AGI+1;
				}
				else if(tablero[posX_AGI-1][posY_AGI] == '.' || tablero[posX_AGI-1][posY_AGI] == 'T' ) { //ESCAPE ARRIBA
					tablero[posX_AGI][posY_AGI] = '.';
					tablero[posX_AGI-1][posY_AGI] = 'A';
					posX_AGI = posX_AGI-1;
				}
				else {
					tablero[posX_AGI][posY_AGI] = 'M'; //M DE MUERTO
					posX_AGI = posX_T;
					posY_AGI = posY_T;
					vida = false;
					cout << "AGI HA CAIDO EN COMBATE (KIA)" << endl;
				}
			}
}

//////////// FUNCION QUE EMPIEZA EL PROCESO DEL JUEGO ************************************************************************
void empieza_juego(){
	//META
	imprimir_tablero();
	while(posX_AGI != posX_T || posY_AGI != posY_T){
		int me = escanea();
		if(me == 0) { // SI NO DETECTA A GUMPY TIENE Q MOVERSE. 1ER MOV
			mueveAgi();
			imprimir_tablero();
			me = escanea();
			if(posX_AGI != posX_T || posY_AGI != posY_T) { //COMPROBAMOS NO ESTAR YA EN EL TESORO
				if(me == 0) { // SI NO LO VUELVE A DETECTAR SE VUELVE A MOVER. 2do MOV
				mueveAgi();
				imprimir_tablero();
				}
				else { //SI SI LO DETECTA CORRE. 2DO MOV
					correAgi(me); 
					imprimir_tablero();
				}
			}
		}
		else { //SI SI LO DETECTA CORRE. 1ER MOV
			if(posX_AGI != posX_T || posY_AGI != posY_T) { //COMPROBAMOS NO ESTAR YA EN EL TESORO
				correAgi(me); 
				imprimir_tablero();
			}
		}
		//mueveG();
	}
	if(vida) {
		cout << "AGI LO LOGRO" << endl;	
		tablero[posX_AGI][posY_AGI] = '.';
		tablero[posX_T][posY_T] = 'A';
		imprimir_tablero();
	}
}

//FUNCION QUE LIMPIA EL TABLERO PARA PODER REINICIAR EL JUEGO
void limpiar_tablero(){
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            tablero[i][j] = '.';
        }
    }
}

//FUNCION QUE INICIALIZA EL JUEGO, GENERANDO LAS POSICIONES DE MANERA ALEATORIA
void generar_posiciones(){
    //ASIGNANDO LA POSICION DEL AGENTE INTELIGENTE
    posX_AGI = 5;
	posY_AGI = 1;
    tablero[posX_AGI][posY_AGI] = 'A';

    //ASIGNANDO LA POSICION DEL TESORO
    srand(rand() ^ time(NULL));
    posX_T = 2 + rand()%(6-2);
    posY_T = 2 + rand()%(6-2);
    tablero[posX_T][posY_T] = 'T';

    //ASIGNANDO LA POSICION DEL POZO #1
    while(1){
    	srand(rand() ^ time(NULL));
        posX_P1 = 2 + rand()%(6-2);
        posY_P1 = 2 + rand()%(6-2);
        if(posX_T == posX_P1 && posY_T == posY_P1){
            posX_P1 = 2 + rand()%(6-2);
            posY_P1 = 2 + rand()%(6-2);
        }else{
	        tablero[posX_P1][posY_P1] = 'P';
	        break;
        }
    }

    //ASINGNANDO LA POSICION DEL POZO #2
    while(1){
    	srand(rand() ^ time(NULL));
        posX_P2 = 2 + rand()%(6-2);
        posY_P2 = 2 + rand()%(6-2);
        if(posX_P2 == posX_T && posY_P2 == posY_T ||
           posX_P2 == posX_P1 && posY_P2 == posY_P1){
                posX_P2 = 2 + rand()%(6-2);
                posY_P2 = 2 + rand()%(6-2);
            }else{
	           	tablero[posX_P2][posY_P2] = 'P';
	            break;
            }
    }

    //ASIGNNADO LA POSICION DEL GUMPY
    while(1){
    	srand(rand() ^ time(NULL));
        posX_G = 2 + rand()%(6-2);
        posY_G = 2 + rand()%(6-2);
        if(posX_G == posX_T && posY_G == posY_T ||
           posX_G == posX_P1 && posY_G == posY_P1 ||
           posX_G == posX_P2 && posY_G == posY_P2){
                posX_G = 2 + rand()%(6-2);
                posY_G = 2 + rand()%(6-2);
           }else{
           tablero[posX_G][posY_G] = 'G';
           break;
           }
    }
}

//FUNCION QUE INICIALIZA TODO EL PROCESO PARA EL JUEGO
void comenzar_partida(){
    //LIMPIAMOS EL TABLERO
    limpiar_tablero();
    //GENERAMOS LAS POSICIONES
    generar_posiciones();
    //VISUALIZAMOS EL TABLERO
    imprimir_tablero();
    //EMPIEZA EL JUEGO
    empieza_juego();

}

//CLASE PRINCIPAL
int main(){

    comenzar_partida();

}