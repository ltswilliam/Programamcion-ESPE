/*				"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William					Lista: 20 
FECHA: 09/06/2021							PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585

EJERCICIO: Mostrar Notas con if y else 
DESCRIPCION: Demostrar las notas con estructuras de control secuencial compuesta
*/
//Librerias
#include <stdio.h>

//declara CTEs, VAR GLOB, FUNC
//CTEs

//funcion Principal
void main() {
	//declaracion de CTEs, VAR GLOB
	float nota;
	//ingreso de datos
	printf("Ingrese la nota: ");
	scanf("%f",&nota);
	printf("\n\tLa nota es: %.2f",nota);
	//Procesos
	if(nota>=0 && nota <=20){
		printf("\n\nEvaluar");
		
		if(nota<14){
		printf("\nMejorar");
		}
		if(nota>=14 && nota<16){
		printf("\nBueno");
		}
		if(nota>=16 && nota<18){
		printf("\nMuy Bueno");
		}
		if(nota>=18){
			printf("\nExcelente");
		}
	}
	else{
		//salida de datos
		printf("\nLa nota esta fuera del rango");
	}
	printf("\n\n");
	
}
