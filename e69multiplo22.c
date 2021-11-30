//librerias
#include <stdio.h>
//declara CTEs, VAR GLOB, FUNC
//constante
#define MULTIPLO 22
//Variable global
//Prototipo de la función
void mostrarMultiplos();
// función principal
void main(){
	//variables locales
	//ingreso de datos
	mostrarMultiplos();
	//realiza la operacion
}
//funcion que permite ingresar radio
void mostrarMultiplos(){
	int i;
	printf("\nMostrar multiplos de: %d\n",MULTIPLO);
	for(i=1; i<100; i++){
		printf("%d, ",i*MULTIPLO);
	}
}
