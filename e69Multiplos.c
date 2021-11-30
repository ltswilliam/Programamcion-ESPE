/*				"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 06/08/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Multiplos de 22
DESCRIPCION: Realizar un programa que permita mostrar los primeros 100 multiplos
del numero 22 utilizando funciones
*/
//Librerias
#include <stdio.h>
//declara CTEs, VAR GLOB, FUNC
//constante
#define MULTIPLO 22
//Variable global
//Prototipo de la función
void mostrarMultiplos();
// función principal
void main(){
	//variables locales
	//ingreso de datos
	mostrarMultiplos();
	//realiza la operacion
}
//funcion que permite ingresar radio
void mostrarMultiplos(){
	int i, j;
	printf("\nMostrar multiplos de: %d\n",MULTIPLO);
	for(i=1; i<=100; i++){
		j=0;
		for(j=0; j<7; j++){
			printf("%d\t",i*MULTIPLO);
			i=i+1;
		}
		printf("\n");
	}
}
