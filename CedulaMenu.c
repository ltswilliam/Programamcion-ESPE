/*			"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
NOMBRE: Llumitasig William				Lista: 20 
FECHA: 02/08/2021						PERIODO:Pregrado S-I MAY21-SEP21
NRC: 3585
EJERCICIO: CEDULA
DESCRIPCION: realizar un menu de opciones que permita ingresar o mostrar datos de una persona.
los datos a ingresar son: cedula, nombre, edad, estatura.
se debe verificar si la cedula es correcta caso contrario no avanzara el programa hasta que digite el correcto.
y se desplegara los datos de: cedula, nombre, edad, estatura, provincia.
*/
//Librerias
#include<stdio.h>
#include<string.h>
//DEclaracion de metodos
void ingresarDatos(char cedula[10],char nombrePersona[30], int *edadPersona, float *estaturaPersona, int *provincia);
void mostrarDatos(char cedula[10],char nombrePersona[30], int *edadPersona, float *estaturaPersona, int *provincia);
void provinciaC(int *provincia);
//Funcion principal
void main(){
	//declaracion de variables
	char cedula[10], nombre[30];
	int opcion;
	int edad, provincia;
	float estatura=100;
	
	//MENU DE OPCIONES
	do{
		printf("MENU DE OPCIONES\n");
		printf("1. Ingresar datos\n");
		printf("2. Mostrar datos\n");
		printf("Opcion: ");
		fflush(stdin);
		scanf("%d",&opcion);
		switch(opcion){
			case 1:
				//llamar a la funcion para ingresar datos
				printf("\nIngreso de Datos\n");
				ingresarDatos(cedula,nombre,&edad,&estatura,&provincia);
				printf("\n");
				break;
			case 2:
				//llamar a la funcion para mostrar datos
				printf("\nDatos Ingresados\n");
				mostrarDatos(cedula,nombre,&edad,&estatura,&provincia);
				printf("\n");
				break;
			case 3:
				printf("\nSaliendo..."); 
				break;
			default:
				printf("\nMal ingresada la opcion"); 
		}
	getch();
	}while(opcion!=3);
}
//Ingreso de Datos
void ingresarDatos(char cedula[10],char nombrePersona[30],int *edadPersona, float *estaturaPersona, int *provincia){
	int i, j, sw;
	char digito[2];

	//verificar cedula correcta
	do{
		printf("Ingrese la cedula: ");
		fflush(stdin);
		gets(cedula);	
 		sw=0;		
		//verificar que el caracter ingresado sea numerico
		for(i=0; i<10; i++){
			//BY:william
			//printf("%c",cedula[i]);
			if(cedula[i] < 48 || cedula[i] > 57){	//si es menor a 48 o si es mayor a 57 (del 48 al 57 comprenden los numeros en codigo ACII)
				sw=1;								//Switch toma el valor de 1 si no es un numero
			}
		}
		*provincia = atoi(strncpy(digito,&cedula[0],2));
		//printf("Provincia: %d \n",*provincia);
		// VERIFICAR LA PROVINCIA
		if(*provincia < 1 || *provincia > 24){
			sw=1;
		}
		if(sw==1){
			// imprimimos en consola si sw=1 de aviso de que la cedula esta incorrecta
        	printf("\nEsta cedula no esta correcta\n\n");
		}
		
		//¡FALTA VALIDAR EL CODIGO VERIFICADOR!
		
	//si el tamaño de la cedula no es igual a 10 o si no es un numero(sw=1), vuelve a repetir el ciclo
	}while(strlen(cedula) != 10 || sw == 1);	
	
	printf("Ingrese el nombre: ");
	gets(nombrePersona);
	printf("Ingrese la edad: ");
	scanf("%d",edadPersona);
	printf("Ingrese la estatura: ");
	scanf("%f",estaturaPersona);
	printf("\n");
	
}
//Mostrar Datos
void mostrarDatos(char cedula[10],char nombrePersona[30], int *edadPersona, float *estaturaPersona, int *provincia){
	printf("\n\nLos datos Ingresados son: ");
	printf("\nCedula: ");
	puts(cedula);
	printf("Provincia: ");
	provinciaC(provincia);
	printf("Nombre: ");
	puts(nombrePersona);
	printf("Edad: %d",*edadPersona);
	printf("\nEstatura: %.2f \n",*estaturaPersona);	
}

void provinciaC(int *provincia){
	switch(*provincia){	
		case 5:
			printf("Cotopaxi\n"); 
			break;	
		case 6:
			printf("Chimborazo\n"); 
			break;
		case 17:
			printf("Pichincha\n"); 
			break;
		//COMPLETAR CODIGO DE PROVINCIA QUE FALTA
		default:
			printf("\n %s",provincia);
	};

}
