//librerias
#include <stdlib.h>
#include <stdio.h>
#define MAX 3
int respuesta, ii;
//estrucutras de datos
struct persona {
int edad;
char nombre[20];
int matricula;
};
/*Se utiliza la clausura tipedef para definir Persona*/
typedef struct persona Persona;
/*Prototipo de funciones para cargar y desplegar datos*/
void cargar(int max, Persona *punt);
void desplegar(int max, Persona *punt);

int main (){
	/*Definicion del vector alumnos de tipo Persona*/
	Persona alumnos[MAX];
	/*Llamada a funciones*/
	cargar(MAX,alumnos);
	desplegar (MAX,alumnos);
	printf("\n\n\n");
	system("pause");
	return (0);
}
/*Primera función*/
void cargar(int max, Persona *punt){
	int ii;
	/*Ciclo para cargar datos*/
	for (ii=0; ii<max ; ii++){
		printf("Ingrese los datos para la %da persona.\n ", ii+1);
		printf("Ingrese la Edad: \t");
		scanf("%d", &(*(punt + ii)).edad);
		printf("\n Ingrese Nombre: \t");
		fflush(stdin);
		scanf("%s", &punt[ii].nombre);
		printf("\n Ingrese la Matricula: \t");
		scanf("%d", &punt[ii].matricula);
	}/*Fin del ciclo*/
}
void desplegar(int max, Persona *punt ){
	int ii;
	/*Ciclo para imprimir*/
	for (ii=0; ii<max ; ii++){
		printf("\n Datos de la %da persona: ", ii+1);
		printf("Edad %3d ", (*(punt + ii)).edad);
		printf(" Nombre %10s ", (*(punt + ii)).nombre);
		printf(" Matricula %5d\n", (*(punt + ii)).matricula);
	}/*Fin del ciclo*/
}

