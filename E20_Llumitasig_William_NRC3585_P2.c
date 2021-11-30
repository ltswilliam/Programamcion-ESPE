
/*
Nombre: Llumitasig William	No. Lista: 20
Asignatura: Fund. De Programación	Período: Pregrado S-I MAY21 – SEP21
Fecha: 16-Jul-2021	NRC: 3585

Programa: Realizar un programa que permita ingresar el nombre de una persona a un vector denominado.
Vector nombre cuyo tamaño sea 30 caracteres; adicionalmente el programa pedirá la edad, la cedula,
(tener en cuenta la cedula son 10 caracteres ), finalmente se debe mostrar los datos ingresados con
una de las opciones el menú  que permita realizarlo, manejar funciones para el programa que están
desarrollando, no utilizar variables globales.
 */
///Librerias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ingresarDatos(char vectorNombre[30], int *edad, char cedula[10]);
void mostrarDatos(char vectorNombre[30], int *edad, char cedula[10]);

//Programa principal
void main(){
	
	//Variables locales
	char vectorNombre[30];
	int edad=0;
	char cedula[10];
	char opcion;
	do{
		//Menu
		system("cls");
		system("color 3");
		printf("MENU PRINCIPAL");
        printf( "\n A. Ingresar Datos.");
        printf( "\n B. Mostrar Datos.");
        printf( "\n C. Salir.");
        printf("\n\nSeleccione la opci%cn: ",162);
		fflush(stdin);
		
        scanf("%c",&opcion );
		
		switch(opcion){
			case 'A':	
				ingresarDatos(vectorNombre,edad,cedula);
				break;
			case 'B':	
				mostrarDatos(vectorNombre,edad,cedula);
				break;
			case 'C':	
				printf("\nSaliendo..."); 
				break;	
			default:
				printf("\nOpcion mal Ingresada..."); 		
		}
		getch();
	}while(opcion!='C' || opcion!='c');
	
}

//Funcion que permita ingresar Datos
void ingresarDatos(char vectorNombre[30], int *edad, char cedula[10]){
	*edad=0;
	printf("\nINGRESO DE DATOS: ");
	printf("\nIngrese nombre: ");
	fflush(stdin);
	gets(vectorNombre);
	printf("\nIngrese la edad: ");
	scanf("%d",*edad);
	printf("\nIngrese la Cedula: ");
	fflush(stdin);
	gets(cedula);
}

//Funcion que permita mostrar Datos
void mostrarDatos(char vectorNombre[30], int *edad, char cedula[10]){
	printf("\nMOSTRAR DE DATOS: ");
	printf("\nNombre: \t%s",vectorNombre);
	printf("\nCedula: \t%s",cedula);
	printf("\nEdad: \t%d",*edad);
}
    

