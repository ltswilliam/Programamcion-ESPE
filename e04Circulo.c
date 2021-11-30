/*			"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 31/05/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Datos Circulo
DESCRIPCION: Realizar un programa que permita ingresar el radio y calcular
el perimetro y area del circulo
*/
//librerias
#include<stdio.h>
#include <math.h>
#define PI 3.1416
//funcion principal
main() {
	
	//Inicializar variables
	float radio, perimetro, area=0;
	printf("Ingrese Radio:\n");
	scanf("%f",&radio);

	//Proceso
	perimetro = 2*PI*radio;
	area = PI * pow(radio,2);

	//Mostrar los datos
	printf("\nLOS RESULTADOS SON:");
	printf("\nRadio: %.2f",radio);
	printf("\nPerimetro: %.3f",perimetro);
	printf("\nPI: %.3f",PI);	
	printf("\nArea : %.2f \n",area);
	return 0;
}

/*
el calculo de un 
el mayor de un numero
captura.............
*/
