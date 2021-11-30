/*			"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 27/05/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Suma de dos numeros
DESCRIPCION: Realizar la suma, resta, multiplicacion y division de
dos numeros que se ingresan por teclado con decimales
*/
//librerias
#include <stdio.h>

//funcion Principal
void main (){
	//delaracion de variables
	float numero1, numero2;
	float suma, resta, multiplicacion, division;
	//Ingreso de datos
	printf("Ingrese el numero 1: ");
	scanf("%f",&numero1);
	printf("Ingrese el numero 2: ");
	scanf("%f",&numero2);
	//proceso
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	//Salida de datos
	printf("Los valores son: %6.2f %.2f\n", numero1, numero2);
	printf("\nLa suma es: %6.2f",suma);
	printf("\nLa resta es: %6.2f",resta);
	printf("\nLa multiplicacion es: %6.2f",multiplicacion);
	printf("\nLa division es: %6.2f",division);
}

