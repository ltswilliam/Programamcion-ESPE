/*				"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William					Lista: 20 
FECHA: 14/06/2021							PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Cuadrado for
DESCRIPCION: realizar un cuadrado con el ciclo repetitivo for
*/
//Librerias
#include <stdio.h>
//funcion Principal
void main(){
	//Declaracion de variables locales
	int i,j,m,n;
	//entrada de datos
	printf("Escriba la dimension de la Matriz: \nFilas = ");
	scanf("%d",&m);
	printf("columnas = ");
	scanf("%d",&n);
	//salida de datos
	for(i=0; i<m; i=i+1){
		for(j=0; j<n; j=j+1){
			printf("\t*");
		}
		printf("\n");
	}
}
