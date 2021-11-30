/*
Nombre: Llumitasig William	No. Lista: 20
Asignatura: Fund. De Programación	Período: Pregrado S-I MAY21 – SEP21
Fecha: 05-Jul-2021	NRC: 3585

Programa pa
 */
///Librerias
#include <stdio.h>
#include <string.h>
void ingresarVector(int vector[5]);
void mostrarVector(int vector[5]);

//Programa principal
void main(){
	//Declarar variables
	int vector[5]={0,0,0,0,0};
	int i, suma=0;
	
	//ingresar Vector
	ingresarVector(vector);
	//Proceso Vector Suma
	
	//Mostrar Vector
	mostrarVector(vector);

	//Proceso Vector mayor
	int mayor = vector[0];
	for (i=0; i<5; i++){
		if(vector[i]>mayor){
			
			mayor=vector[i];	
		}
	}
	printf("\nEl mayor es: %d",mayor);	
}
//Funcion que perminte ingresar datos a un vector
void ingresarVector(int vector[5]){
	//Ingreso Vector
	int i;
	for (i=0; i<5; i++){
		printf("Ingrese el dato %d: ",(i+1));
		scanf("%d", &vector[i]);
	}
}

//Funcion que perminte mostrar datos a un vector
void mostrarVector(int vector[5]){
	//mostrar Vector
	int i;
	printf("\nVector es: ");
	for (i=0; i<5; i++){
		printf("%d, ",vector[i]);
	}
}
