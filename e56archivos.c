/*CARRERA DE INGENIERA EN TECNOLOGIAS DE LA INFROMACION Y COMUNICACION
Estudiante: william llumitasig				No. Lista:20
Asignatura: Fundamentos de Programación		Período:Pregado S-I MAY21-SEP21
Fecha: 23-08-2021
EJERCICIO
Programa de archivos de texto que permita crear
TA3 
 */
 
//Libreria
#include <stdio.h>
#include <string.h>

//funcion principal
void main (){
	//definicion de variable Local
	char frase[100]="Hola mundo", fin[]="fin";
	//Declaro una variable tipo archivo
	FILE* puntero;
	
	//W, sobrescribir o crear el archivo si no esta creado
	puntero = fopen("datos.txt","w");

	while (strcmp(frase,fin)!=0){
		printf("\nEscriba un texto: ");
		fflush(stdin);
		gets(frase);
		//Guarda o imprime dentro del archivo
		fprintf(puntero,"%s\n",frase);
	};
	
	//cierra el archivo
	fclose(puntero);
}

