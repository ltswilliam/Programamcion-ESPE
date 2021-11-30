/*			"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 19/05/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Suma de dos numeros
DESCRIPCION: Realizar la suma de dos numeros que se ingresan por teclado
*/
//librerias
#include <stdio.h>

//declara CTEs, VAR GLOB, FUNC

//funcion principal
void main() {
	//variables locales
	int numero1;
	int numero2;
	int suma;
	//ingreso de datos
	printf("Ingrese el primer n%cumero entero: ",163);
	scanf("%d",&numero1);
	printf("Ingrese el segundo n%cumero entero: ",163);
	scanf("%d",&numero2);
	//realiza la operacion suma
	suma=numero1+numero2;
	//salida de datos, Impime el resultado de la suma
	printf("\nLa suma es: %d",suma);
}
