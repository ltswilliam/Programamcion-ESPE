//Tema: Librerias
//LIBRERIAS
#include "libreria.h"

void main() {
	float num1 = 5,num2 = 3, suma=0, resta=0;
	suma=sumaDosNumeros(num1,num2);
	resta=restaDosNumeros(num1,num2);
	printf("Suma: %.2f",suma);
	printf("\nResta: %.2f",resta);
}
