/*			"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 02/06/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Par Impar
DESCRIPCION: Realizar un programa que permita ingresar numeros y decir si es par o impar
*/
//librerias
#include <stdio.h>

//declara CTEs, VAR GLOB, FUNC

//funcion principal
void main() {
	//delcaracion de variables
	int numero;
	//entrada de datos
	printf("Ingrese un n%cmero entero: ",163);
	scanf("%d",&numero);
	//salida de datos
	if(numero % 2 == 0){
		printf("\tES PAR");
	}else{
		printf("\tES IMPAR");
	}
}
