/*			"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 27/05/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585

EJERCICIO: str
DESCRIPCION: 
https://parzibyte.me/blog/2020/11/29/ordenar-arreglo-cadenas-c/
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

void ordenarCadena(char texto2[TAM], int largo);

void main (){
	int i,largo;
	char texto2[TAM];
	char texto[TAM]=("La vida es hermosa");
	
	largo = strlen(texto);
	printf("El largo es: %d \n",largo);
	strcpy(texto2, texto);
	
	ordenarCadena(texto2,largo);
	
	for(i=0; i<largo; i++){
		printf("\n%d %c",i,texto2[i]);	
	}
	printf("\n");
	
}


void ordenarCadena(char texto2[TAM], int largo)
{
    // Útil para hacer intercambio de cadenas
    char temporal[TAM];
    int x, indiceActual;
    for (x = 0; x < largo; x++)
    {
        for (indiceActual = 0; indiceActual < largo - 1;
             indiceActual++)
        {
            int indiceSiguienteElemento = indiceActual + 1;
            // Si la cadena es mayor que la siguiente (alfabeticamente) entonces intercambiamos
            if (strcmp(texto2[indiceActual], texto2[indiceSiguienteElemento]) > 0)
            {
                // Movemos la cadena actual a la temporal
                memcpy(temporal, texto2[indiceActual], TAM);
                // Movemos al actual el siguiente elemento
                memcpy(texto2[indiceActual], texto2[indiceSiguienteElemento], TAM);
                // Y en el siguiente elemento, lo que había antes en el actual pero ahora está en temporal
                memcpy(texto2[indiceSiguienteElemento], temporal, TAM);
            }
        }
    }
    // No hay necesidad de devolver nada, pues modificamos al arreglo de manera interna
}
