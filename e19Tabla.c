/*				"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William					Lista: 20 
FECHA: 14/06/2021							PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: Tabla
DESCRIPCION: ingresar el numero y limite para la tabla
*/
//Librerias
#include<stdio.h>
//Funcion Principal
void main() {
	//variable local
	int i, numero, limite;
	//ingreso de datos
	printf("Ingrese el numero de la tabla: ");
	scanf("%d",&numero);
	//ingrese el limite
	printf("Ingrese el limite: ");
	scanf("%d",&limite);

	printf("\n\n**TABLA DEL %d\n",numero);
	//Proceso
	for (i=0;i<limite;i+=1){
		//Salida de datos
		printf("%d * %d = %d\n",numero,i,(numero*i));
	}
	/*
	while(i<5){
		printf("5 * %d = %d\n",i,(5*i));
		i++;
	}
	*/

}

