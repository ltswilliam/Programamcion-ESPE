/*
Nombre: Llumitasig William	No. Lista: 20
Asignatura: Fund. De Programación	Período: Pregrado S-I MAY21 – SEP21
Fecha: 19-Jul-2021	NRC: 3585
Programa Ordenamiento Burbuja
*/
///Librerias
#include<stdio.h>

//Prototipos de una funcion
void ingresarVector(int vector[10], int i);
void mostrarVector(int vector[10]);
void ordenamiento(int vector[10]);

//Programa principal
void main(){
	//Declarar variables
	int vector[10];
	int i=0, j;

	//Ingreso de Datos del vector
	ingresarVector(vector, i);
	
	//Salida de datos del vector
	printf("\n***  VECTOR  ***\n");
	mostrarVector(vector);
	

	//Algoritmo de ordenamiento burbuja
	ordenamiento(vector);

	//Salida de datos del vector Ordenado

	printf("\n\n***  VECTOR ORDENADO  ***\n");
	mostrarVector(vector);
}
//Funcion para ingresar datos a un vector
void ingresarVector(int vector[10], int i){
	for (i=0; i<10; i++){
		printf("\nIngrese dato (%d)\t",i+1);
		scanf("%d",&vector[i]);
	}
}
//Funcion para mostrar datos de un vector
void mostrarVector(int vector[10]){
	int i;
	for (i=0; i<10; i++){
		printf("%d ",vector[i]);
	}
}

//Funcion para ordenar datos numericos de un vector
void ordenamiento(int vector[10]){
	int i,j,auxiliar;
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			if(vector[i]<vector[j]){
				auxiliar=vector[i];
				vector[i]=vector[j];
				vector[j]=auxiliar;
			}
		}
	}	
}

