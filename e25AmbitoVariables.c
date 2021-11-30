/*
Nombre: Llumitasig William	No. Lista: 20
Asignatura: Fund. De Programación	Período: Pregrado S-I MAY21 – SEP21
Fecha: 30-Jun-2021	NRC: 3585

Programa para convertir Celcius a Farenheit y Kelvin.
 */

///Librerias
#include<stdio.h>
//Declarar, CTES, VAR GLOG, Funciones o prototipos

double gradosCentigrados=0;  //Variable Global

//Declarando la funcion
void convertirFarenheit ();
float convertirKelvin (double farenheit);


//Funcion pricipal
void main(){
	
	//Ingresar Datos
    printf("Ingrese temperatura en grados Centigrados: ");
    scanf("%lf", &gradosCentigrados);
    printf("Los grados centigrados son: %3.2f",gradosCentigrados);
    
	convertirFarenheit();	//Llamado a la funcion

}

void convertirFarenheit (){
	//variable local
	float farenheit;
	float gradosKelvin=0;
	farenheit = (float)((gradosCentigrados*9/5)+32); //casting
	printf("\nLos grados farenheit son: %.2f",farenheit);
	
	//Proceso calculo grados kelvin
	gradosKelvin = convertirKelvin(farenheit);
	printf("\nLos grados kelvin son: %.2f",gradosKelvin);
}

float convertirKelvin (float farenheit){
	float gradosKelvin=0;
	gradosKelvin = ((farenheit-32)*5/9)+273.15;
	return gradosKelvin;
}

