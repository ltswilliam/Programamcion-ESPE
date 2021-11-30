/*
Nombre: Llumitasig William	No. Lista: 20
Asignatura: Fund. De Programación	Período: Pregrado S-I MAY21 – SEP21
Fecha: 28-Jun-2021	NRC: 3585

Programa para visualizar los multiplos
 */

///Librerias
#include<stdio.h>
//Declarar, CTES, VAR GLOG, Funcion

#define PI 3.1416
int numero;

//Declarando la funcion
void generadordeMultiplos(int numero);
    

//Funcion pricipal
void main(){
    printf("\nPI: %f",PI);
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    generadordeMultiplos(numero);  //Llama la funcion
    
}

void generadordeMultiplos(int numero){
	int i, j=1;
	for(i=0; i<5; i++){
		printf("Multiplo %d : %d ",(i+1),j*numero);
    	j++;
	}
}

