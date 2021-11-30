/*				"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William					Lista: 20 
FECHA: 07/06/2021							PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Circulo
DESCRIPCION: 
*/
//librerias
#include<stdio.h>
#include <math.h>
#define PI 3.1416
//funcion principal
main() {
	
	//Inicializar variables
	float radio, perimetro, area=0;
	printf("Ingrese Radio: ");
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
}
