/*
Nombre: Llumitasig William	No. Lista: 20
Asignatura: Fund. De Programación	Período: Pregrado S-I MAY21 – SEP21
Fecha: 31-May-2021	NRC: 3585
 */

///Librerias
#include<stdio.h>
//Declarar, CTES, VAR GLOG, Funcion

int numero1=0, numero2=0, resta;

//Declarando la funcion suma
void leerNumeros();
void ProcesoSuma(int num1, int num2);
int ProcesoResta(int numero1, int numero2);
void mostrarResta(int resta);

//Funcion pricipal
void main(){
    //Declarar variables locales
    int resta=0;
    
    //Leer numeros
    leerNumeros();

    //Proceso
    ProcesoSuma(numero1, numero2);  //Envio los argumentos
    resta = ProcesoResta(numero1, numero2);
    
    //Mostrar Suma
    mostrarResta(resta);
}

void leerNumeros(){
	printf("Ingrese un numero 1: ");
    scanf("%d", &numero1);
    printf("\nIngrese un numero 2: ");
    scanf("%d", &numero2);
}

void ProcesoSuma(int num1, int num2){
	//Cuerpo de la funcion
	int resultado=0;
	resultado = num1 + num2;
	printf("Resultado suma: %d\n",resultado);
}

int ProcesoResta(int numero1, int numero2){
	//Cuerpo de la funcion
	int resta = numero1 - numero2;
	return resta;
}

void mostrarResta(int resta){
	printf("Resultado resta: %d\n", resta);
}
