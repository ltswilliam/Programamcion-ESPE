/*
"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
PERIODO:Pregrado S-I MAY21-SEP21
NOMBRE: Llumitasig William
NRC: 3585
FECHA: 09/06/2021

EJERCICIO: Mostrar Notas con if y else compuesta
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
	//Ingreso de datos
	printf("Ingrese la nota: ");
	scanf("%f",&nota);
	printf("\n\tLa nota es: %.2f",nota);
	//salida de datos
	if(nota>=0 && nota <=20){
		printf("\n\nEvaluar");
		if(nota<14){
			printf("\nMejorar");
		}else{
			if(nota<16){
				printf("\nBueno");
			}
			else{
				if(nota<18){
					printf("\nMuy Bueno");
				}
				else{
					printf("\nExcelente");
				}
			}
		}
	}
	else{
		printf("\nLa nota esta fuera del rango");
	}
	printf("\n\n");
	
}
