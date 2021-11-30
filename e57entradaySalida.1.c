/*CARRERA DE INGENIERA EN TECNOLOGIAS DE LA INFROMACION Y COMUNICACION
Estudiante: william llumitasig				No. Lista:20
Asignatura: Fundamentos de Programación		Período:Pregado S-I MAY21-SEP21
Fecha: 23-08-2021
EJERCICIO
Programa de archivos de texto que permita leer archivos
TA3 
 */
 
//Libreria
#include <stdio.h>
#include <string.h>

//funcion principal
void main (){
	//definicion de variable Local
	FILE * puntero;
	char frase[100];
		
	//rt, permite leeer el archivo
	puntero = fopen("datos.txt","rt");
	//permite recuperar y mostrar informacion del archivo
	for(; ; ){
		if(!feof(puntero)){
			break;
		}else{
			fgets(frase,100,puntero);
			fflush(stdin);
			puts(frase);
		}
	}
	//cierra el archivo
	fclose(puntero);
}
