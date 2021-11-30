/*			"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 31/05/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Datos Circulo
DESCRIPCION: Realizar un programa que permita ingresar el radio y calcular el perimetro y area del circulo
*/
//librerias
#include<stdio.h>
#include <math.h>
#define PI 3.1416
//funcion principal
main() {
	
	//Inicializar variables
	float base, altura, area=0;
	printf("Ingrese la Base:\n");
	scanf("%f",&base);
	printf("Ingrese la Altura:\n");
	scanf("%f",&altura);

	//Proceso
	area = (base*altura)/2;

	//Mostrar los datos
	printf("\nLOS RESULTADOS SON:");
	printf("\nBase: %.2f",base);
	printf("\nAltura: %.3f",altura);	
	printf("\nArea : %.2f \n",area);
	return 0;
}
