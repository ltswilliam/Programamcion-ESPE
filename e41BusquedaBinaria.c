/* 
*ejemplo8_3.c 
*/ 
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 
#define TAM 100 

void imprimeCB(int *CB);
void ordenaCB(int *CB);

//FUNCION PRINCIPAL
void main() { 

	//Declaracion de las variables locales
	int CB[TAM]; 
	int ini=0,fin=TAM-1,mitad,dato,i; 
	srand((unsigned int)time(NULL));
	
	//Permite ingresar numeros aleatorios al vector
	for(i = 0; i < TAM; i++){
		CB[i] = (int)(rand() % 100); 	
	} 
	imprimeCB(CB); //Llama la Funcion
	
	ordenaCB(CB);  //Lama la funcion ordenar
	imprimeCB(CB); //muestrar ordenada
	//casting
	/*printf("\nIngrese numero a buscar");
	scanf("%d",&dato);*/
	dato = (int)(rand() % 100); 
	CB[i] = dato; 
	printf("Dato a buscar %d\n",dato); 
	mitad=(ini+fin)/2; 
	while ((ini<=fin)&&(CB[mitad]!=dato)) 
	{ 
		if (dato < CB[mitad]){
			fin=mitad-1; 	
		}
		else{
			ini=mitad+1;
		} 
		mitad=(ini+fin)/2;	
	} 
	if(dato==CB[mitad]){
		printf("Posicion %d\n", mitad);
	}  
	else{
		printf("Elemento no esta en el array"); 
	}
	getch(); 
} 

//Permite mostrar el vector
void imprimeCB(int *CB) { 
	int i; 
	for(i = 0; i < TAM-1; i++) { 
		printf( "%d, ", CB[i]); 
	} 
	printf( "%d\n", CB[i]); 
} 
void ordenaCB(int *CB) {
	int i, j, auxiliar,intercambio;
	for(i = 0; i < TAM; i++){ 
		intercambio = 0; 
		for(j = 0; j < TAM-1-i; j++){ 
			if(CB[j] > CB[j+1]) { 
				auxiliar = CB[j+1]; 
				CB[j+1] = CB[j]; 
				CB[j] = auxiliar; 
				intercambio =1; 
	 		} 
		} 
		if (intercambio==0){ 
			printf( "\nPara en la iteración %d\n",i); 
			break; 
		} 
	} 
}
