/*
Nombre: Llumitasig William	No. Lista: 20
Asignatura: Fund. De Programación	Período: Pregrado S-I MAY21 – SEP21
Fecha: 05-Jul-2021	NRC: 3585
Programa pa
 */
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Constante Global
#define DIM 3
#define FILA 3
#define COL 3

//Programa principal
void main(){
	//Declarar variables locales
	int matrizA[FILA][COL]={1,2,3,4,5,6,1,1,1};
	int matrizB[FILA][COL]={1,1,1,1,1,1,2,3,4};
	int respuestaAB[FILA][COL]={0,0,0,0,0,0,0,0,0};
	int i, j, k;
	
	//Elementos de la matiz aleatorios
	srand(time(NULL));
	for (i=0; i<FILA; i++){
		for (j=0; j<COL; j++){
			matrizA[i][j] = rand()%11+20;
			matrizB[i][j] = rand()%11+20;
		}	
	}
	
	//Mostrar matriz A
	printf("\n***  MATRIZ \"A\"  ***\n");
	for (i=0; i<FILA; i++){
		for (j=0; j<COL; j++){
			printf("%d\t",matrizA[i][j]);
		}	
		printf("\n");
	}
	
	//Mostrar matriz A
	printf("\n***  MATRIZ \"B\"  ***\n");
	for (i=0; i<FILA; i++){
		for (j=0; j<COL; j++){
			printf("%d\t",matrizB[i][j]);
		}	
		printf("\n");
	}
	
	//Suma de matrices A y B
	for (i=0; i<FILA; i++){
		for (j=0; j<COL; j++){
			respuestaAB[i][j]=matrizA[i][j]+matrizB[i][j];
		}	
	}
	
	//Mostrar resultado de la Suma de matrices
	printf("\n\n***  RESPUESTA SUMA MATRIZ \"A Y B\"  ***\n");
	for (i=0; i<FILA; i++){
		for (j=0; j<COL; j++){
			printf("%d\t",respuestaAB[i][j]);
		}	
		printf("\n");
	}
}
/*	
//CONCLUSION:
El programa es bueno para practicar el ciclo repetitivo for anidado, matrices de dos dimensiones
el como funciona y la secuencia logica que sigue un codigo para ejecutarse luego de compilar
si surge un problema de definicion o mal sintasis no se ejecutara de buena manera y marcara un error. 
*/

