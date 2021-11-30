//Tema: Prgrama que permite calcular la raiz de un numero

//LIBRERIAS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//Ejemplo aprender a programamar
void main(){
	//Declaracion de variables
	float numero;
	float raizCuadratica;
	///Proceso para obtener y generar un numero aleatorio
	srand(time(NULL));
	numero= rand()%10+100;
	printf("\nN%cmero: %.2f",163,numero);
	
	//Raiz Cuadrada del numero aleatorio
	raizCuadratica=sqrt(numero);
	printf("\nRaiz: %.2f",raizCuadratica);
	printf("\nPotencia: %f",pow(raizCuadratica, 2));
}

