/*				"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William					Lista: 20 
FECHA: 10/06/2021							PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Dia de la semana
DESCRIPCION: ingresar un numero de dia para imprimir un mensaje de dia que corresponde
*/
//Librerias
#include <stdio.h>

//FUNCION PRINCIPAL
void main(){
	//Declaracion de variables
	int dia;
	//Ingreso de datos
	printf("Ingrese el numero de la semana...");
	scanf("%d",&dia);
	printf("El dia es: %d",dia);
	//salida de datos
	switch(dia){
		case 1:
			printf("\nLunes..."); 
			break;
		case 2:
			printf("\nMartes..."); 
			break;
		case 3:
			printf("\nMiercoles..."); 
			break;
		case 4:
			printf("\nJueves..."); 
			break;		
		case 5:
			printf("\nViernes..."); 
			break;	
		case 6:
			printf("\nSabado..."); 
			break;
		case 7:
			printf("\nDomingo..."); 
			break;
		default:
			printf("\nMal ingresado el numero..."); 			
	}
	
}
