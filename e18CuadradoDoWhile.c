/*				"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William					Lista: 20 
FECHA: 14/06/2021							PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Dia de la semana
DESCRIPCION: ingresar un numero de dia para imprimir un mensaje de dia que corresponde
*/
//Librerias
#include <stdio.h>
//funcion principal
void main(){
	//variable local
	int i,j;
	j=0;
	do{
		i=0;
		do{
			//Salida de datos
			printf("\t*");
			i++;
		}while(i<8);
		printf("\n");
		j++;
	}while (j<8);
}
