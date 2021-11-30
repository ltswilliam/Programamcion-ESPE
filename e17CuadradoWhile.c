/*				"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William					Lista: 20 
FECHA: 10/06/2021							PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: cuadrado while
DESCRIPCION: realizar un cuadrado con el ciclo repetitivo While
*/
//Librerias
#include <stdio.h>
//funcion prncipal
void main(){
	//variable local
	int i,j;
	j=0;
	//proceso
	while (j<8){
		i=0;
		while(i<8){
			//salida de datos
			printf("\t*");
			i++;
		}
		printf("\n");
		j++;
	}
}
