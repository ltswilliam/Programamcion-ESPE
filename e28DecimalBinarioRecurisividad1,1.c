/*
Nombre: Llumitasig William	No. Lista: 20
Asignatura: Fund. De Programación	Período: Pregrado S-I MAY21 – SEP21
Fecha: 05-Jul-2021	NRC: 3585

Programa para convertir Celcius a Farenheit y Kelvin.
 */

///Librerias
#include <stdio.h>
int binario(int numero);	//Prototipo o declaracion de una funcion

main(){
	int numero;
	
	printf("Ingrese un N%cmero: ",163);
	scanf("%d",&numero);
	
	
	printf("\nN%cmero Decimal: %d",163,numero);
	printf("\nN%cmero Binario: ",163);
	
	printf("\nSuma:%d", binario(numero));
}

//Funcion permite imprimir el numerio binario de un numero
int binario(int numero){
	printf("ns = %d\t", numero%2); //falta el ultimo numero binario
	if (numero==1){
		return 1;
	}
	else{
		return (numero+binario(numero/2));
	}	
}
