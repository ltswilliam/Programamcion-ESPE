//Librerias
#include<stdio.h>

//ESTRUCTURA
struct fecha{
	int dia;
	int mes;
	int anio;
};


//Funcion Principal
void main(){
	//Variable tipo fecha
	struct fecha variableFecha;
	variableFecha.dia=5;
	printf("Ingrese el dia: ");
	scanf("%d",&variableFecha.dia);
	printf("\nEl dia es: %d",variableFecha.dia);
}
