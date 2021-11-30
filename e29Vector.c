/*
Nombre: Llumitasig William	No. Lista: 20
Asignatura: Fund. De Programación	Período: Pregrado S-I MAY21 – SEP21
Fecha: 05-Jul-2021	NRC: 3585

Programa para convertir Celcius a Farenheit y Kelvin.
 */
///Librerias
#include <stdio.h>

//Programa principal
void main(){
	//Declarar variables
	int vector[5]={0,0,0,0,0};
	int i, suma=0;
	
	//Ingreso Vector
	for (i=0; i<5; i++){
		printf("Ingrese el dato %d: ",(i+1));
		scanf("%d", &vector[i]);
	}
	
	//Proceso Vector Suma
	for (i=0; i<5; i++){
		suma=suma+vector[i];
	}
	
	//Proceso Vector menor
	int menor = vector[0];
	for (i=0; i<5; i++){
		if(vector[i]<menor){
			menor=vector[i];	
		}
	}
	printf("\nEl menor es: %d",menor);
	
	//Mostrar Vector
	printf("\nVector es: %d");
	for (i=0; i<5; i++){
		printf("%d ",vector[i]);
	}
	printf("\nLa suma es: %d",suma);
}





