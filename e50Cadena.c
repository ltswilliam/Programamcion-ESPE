//Librerias
#include<stdio.h>
#include<string.h>

//Funcion principal
void main(){
	//declaracion de variables
	char cadena[80];
	char nombre[80];
	char apellido[30];
	int i;
	
	//gets permite Leer una cadena de caracteres
	printf("Lea el nombre: ");
	gets(cadena);
	
	//puts permite mostrar los caacteres ingresdos
	puts(cadena);
	
	//tamanio de caracteres en entero
	int tamanio=strlen(cadena);
	
	printf("\nEl tamanio de la cadena es: %d",tamanio);
	printf("\nEl caracter ASCII de ' %c ' es: %d\n",cadena[tamanio-1],cadena[tamanio-1]);
	
	cadena[tamanio]='O';
	puts(cadena);
	
	//unir cadenas de caracteres
	strcat(cadena," se agrego esto XD");
	
	// obtener un caracter
	char caracter= getchar();
	//imprimir caracter
	putchar(caracter);
	
	printf("\nAlreves: ");
	
	//imprime caracteres alreves
	for(i=tamanio-1; i>=0; i--){
		printf(" %c",cadena[i]);
	}
	printf("\n\n");
	
	//imprime caraacteres hasta encontrar un espacio
	for(i=0; i<tamanio; i++){
		if(cadena[i]==' '){
			break;
		}
		nombre[i]=cadena[i];
	}
	printf("\nHasta un espacio: ");
	puts(nombre);
}

