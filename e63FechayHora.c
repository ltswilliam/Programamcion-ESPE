//Programa para saludar
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
void mostrarSaludo(int horas);
void mostrarMes(int meses);

//Funcion principal
void main() {
	time_t tiempo = time(0);  //var. tiempo tipo nombre
	struct tm *tlocal = localtime(&tiempo);	//var. local tipo tm
	char output[128];
	char hora[10], mes[13];
	
	//Aig. a la estructura
	strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
	strftime(hora,10,"%H",tlocal);
	strftime(mes,10,"%m",tlocal);
	//imprime fecha y hora.
	printf("Fecha: %s\n",output);
	printf("Hora: %s\n",hora);
	
	int horas, minutos, meses;
	horas = atoi(hora);
	meses = atoi(mes);
	//horas = 15;
	printf("Hora: %d\n",horas);
	
	mostrarSaludo(horas);
	
	mostrarMes(meses);
	//printf("mes: %s\n",mes(messi));
	
}
void mostrarSaludo(int horas){
	if (horas < 12){
		printf("\nBuenos dias!\n");
	} else {
		if (horas < 18){
			printf("\nBuenas tardes!\n");
		} else {
			printf("\nBuenas noches!\n");
		}
	}
	horas = 20;
	//Manejo del operador ternario
	printf((horas < 12)? "\nBuenos dias" :(horas < 18)? "\nBuenas tardes":"\nBuenas noches");
}
void MostrarMes(int meses){
	switch(meses){
		case 1:	
			printf("enero");
			break;
		case 2:	
			printf("febrero");
			break;
		case 3:	
			printf("marzo");
			break;	
		case 4:	
			printf("abril");
			break;
		case 5:	
			printf("mayo");
			break;	
		case 6:	
			printf("junio");
			break;	
		case 7:	
			printf("julio");
			break;	
		case 8:	
			printf("agosto");
			break;	
		case 9:	
			printf("septiembre");
			break;			
	}
}
