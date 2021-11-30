/*				"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William					Lista: 20 
FECHA: 09/06/2021							PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Mostrar Notas 
DESCRIPCION: Demostrar las notas con estructuras de control secuencial simple
*/
//Librerias
#include <stdio.h>
//declara CTEs, VAR GLOB, FUNC
//CTEs

//funcion Principal
void main() {
	//declaracion de CTEs, VAR GLOB
	//Declaracion de variables
	float nota;
	//entrada de datos
	printf("Ingrese la nota: ");
	scanf("%f",&nota);
	printf("\n\tLa nota es: %.2f\n",nota);
	//Proceso
	if(nota>=18){
		//salida de datos
		printf("\nExcelente");
	}
	if(nota>=16 && nota<18){
		printf("\nMuy Bueno");
	}
	if(nota>=14 && nota<16){
		printf("\nBueno");
	}
}
