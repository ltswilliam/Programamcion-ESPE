/*			"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 02/06/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Mayor
DESCRIPCION: Realizar un programa que permita saber el numero mayor
*/
//librerias
//pr mayor

//Librerias
#include <stdio.h>

//decla CTES, VAR, GLOB, FUNC
//FUnciones
void main (){
	//definicion de variables locales
	float numero1, numero2, mayor;
	//ingreso de datos
	printf("Ingrese los valores de los numeros: ");
	scanf("%f", &numero1);
	scanf("%f", &numero2);
	//proceso
	if (numero1 > numero2){
		mayor=numero1;
	}else{
		mayor=numero2;
	}
	//salida de datos
	printf("\n\nValores del numero 1: %.2f, numero 2: %.2f\n\n",numero1, numero2);
	printf("\nEl mayor es: %.2f",mayor);
}
