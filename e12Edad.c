/*				"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William					Lista: 20 
FECHA: 10/06/2021							PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: edades
DESCRIPCION: ingresar una edad y decir si es mayoo o menor
*/
//Libreria
#include <stdio.h>
//declara CTEs, VAR GLOB, FUNC
//CTEs
//funcion Principal
void main() {
	//declaracion de CTEs, VAR GLOB
	int edad;
	//Ingreso de datos
	printf("Ingrese la edad: ");
	scanf("%d",&edad);
	printf("\n\tLa Edad es: %d",edad);
	//salida de datos
	if(edad>=0 && edad <=110){
		if(edad<12){
			printf("\nEs Ni%o",164);
		}else{
			if(edad<=18){
				printf("\nEs un joven");
			}
			else{
				if(edad<60){
					printf("\nEs un adulto");
				}
				else{
					printf("\nMayor");
				}
			}
		}
	}
	else{
		printf("\nLa edad esta fuera del rango");
	}
	printf("\n\n");
	
}
