
/*
Nombre: Llumitasig William	No. Lista: 20
Asignatura: Fund. De Programación	Período: Pregrado S-I MAY21 – SEP21
Fecha: 19-Jul-2021	NRC: 3585

Programa: Programa para ingresar Notas
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Programa principal
void main(){
	//Declaracion de variables
	char vectorNombre[10];
	char cedula[10];
	int i;
	
	//Ingresando el Nombre
	printf("Ingresar Combre: ");
	fflush(stdin);
	gets(vectorNombre);
	
	//Ingresando el Cedula
	printf("Ingresar Cedula: ");
	fflush(stdin);
	gets(cedula);

	//Mostrando el nombre
	printf("\nNombre: ");
	puts(vectorNombre);
	printf("Cedula: ");
	puts(cedula);

}
