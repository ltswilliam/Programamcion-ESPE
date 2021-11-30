/*			"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 11/08/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: GOTO
DESCRIPCION: (60,32)
*/
//librerias
///librerias
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define MAX 100
//funcion goto
void gotoxy(int,int); 
void centrarTexto(const char *texto, int y);
//funcion principal
int main(){
	char mensaje[MAX];
	int posicionY;
	printf("Ingrese el texto que dese centrar: ");
	gets(mensaje);
	printf("Ingrese posicion vertical: ");
	scanf("%d",&posicionY);
	
    centrarTexto(mensaje,posicionY);
    //printf("x");
	return EXIT_SUCCESS;
}
//Funcion manipulador GOTOXY
void gotoxy(int x, int y){
	HANDLE Manipulador;
	COORD Coordenadas;
	Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
	Coordenadas.X=x;
	Coordenadas.Y=y;
	SetConsoleCursorPosition(Manipulador,Coordenadas);
}
//Funcion para centrar texto
void centrarTexto(const char *texto, int y){
	int sizeTexto = strlen(texto);
	gotoxy(60-(sizeTexto/2),y);
	printf("%s",texto);
}

