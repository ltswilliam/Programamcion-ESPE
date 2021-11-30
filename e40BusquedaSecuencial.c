/*
Nombre: Llumitasig William	No. Lista: 20
Asignatura: Fund. De Programación	Período: Pregrado S-I MAY21 – SEP21
Fecha: 21-Jul-2021	NRC: 3585
Programa Busqueda secuencial
*/
///Librerias
#include<stdio.h>

//Declaracion de constantes
#define DIM 5

void ingresarVector(int vector[DIM]);
void mostrarVector(int vector[DIM]);
void busquedaSecuencial(int vector[DIM]);

//Programa principal
void main(){
	
	//Declarar variables
	int vector[10];
	int i=0, numero, contador=0;

	//Ingreso de Datos del vector
	ingresarVector(vector);
	
	//Salida de datos del vector
	mostrarVector(vector);
	
	//Busqueda de Variable
	busquedaSecuencial(vector);
}

void ingresarVector(int vector[DIM]){
	int i;
	for (i=0; i<DIM; i++){
		printf("\nIngrese dato [%d]\t",i+1);
		scanf("%d",&vector[i]);
	}
}

void mostrarVector(int vector[DIM]){
	int i;
	printf("\n***  VECTOR  ***\n");
	for (i=0; i<DIM; i++){
		printf("%d ",vector[i]);
	}
}

void busquedaSecuencial(int vector[DIM]){
	int i, numero, contador=0;
	printf("\n\nIngrese un numero a buscar: ");
	scanf("%d", &numero);
	
	for(i=0; i<DIM; i++){
		if(vector[i] == numero){
			printf("\nEncontre %d en la posicion [%d]",vector[i],i);
			contador += 1;
			//break;	
		}
	}
	if(contador>=1){
		printf("\nVeces encontrados: %d", contador);
	}
	else{
		printf("\nNo Encontro el numero");
	}
}
