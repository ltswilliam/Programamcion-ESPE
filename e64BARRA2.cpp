/*			"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 11/08/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: 
DESCRIPCION:
*/
//librerias
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

//funcion principal
int main(){
	//variables locales
	int segundos=8;
	for(int i=1; i<=100; i++){
		Sleep(segundos);
		cout << "|"; 
	}
	cout << endl;
	return 0;
}
