/*			"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 02/06/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: raiz cuadrada
DESCRIPCION: Realizar un programa que permita ingresar un numero y sacar la raiz cuadrada
*/
//librerias
#include<stdio.h>
#include <math.h>

//funcion principal
main() {
	
	//Inicializar variables
	double numero, raizCuadrada;
	printf("Ingrese un numero:\n");
	scanf("%lf",&numero);

	//Proceso
	raizCuadrada = sqrt(numero);

	//Mostrar los datos
	printf("\nLa raiz es: %.2lf",raizCuadrada);
	return 0;
}
