/* 
*ejemplo8_3.c 
*/ 
#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 
#define TAM 10

void generarVector(int *CB);
void imprimeCB(int *CB);
void ordenaCB(int *CB);
void busquedaBinaria(int *CB);

//FUNCION PRINCIPAL
void main() { 

	//Declaracion de las variables locales
	int CB[TAM]; 
	int i; 
	
	//Generar un Vector
	generarVector(CB);
	
	printf("\n\nVECTOR EN DESORDEN\n\n"); 
	imprimeCB(CB); //Llama la Funcion
	
	//Llama la funcion ordenar
	ordenaCB(CB);  
	
	printf("\n\nVECTOR ORDENADO\n\n");
	imprimeCB(CB); //muestrar ordenada
	//casting
	
	printf("\n\nBUSQUEDA\n\n");
	busquedaBinaria(CB);
	
	getch(); 
} 

//Permite ingresar el vector
void generarVector(int *CB){
	int i;
	//srand((unsigned int)time(NULL));
	//Permite ingresar numeros aleatorios al vector
	for(i = 0; i < TAM; i++){
		CB[i] = (int)(rand() % 10); 	
	} 
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
		/*if (intercambio==0){ 
			printf( "\nPara en la iteración %d\n",i); 
			break; 
		} */
	} 
}

void busquedaBinaria(int *CB){
	int i, ini=0,fin=TAM-1,mitad,dato;
	//srand((unsigned int)time(NULL));
	
	dato = (int)(rand() % 100); 
	/*printf("\nIngrese Dato a buscar: ");
	scanf("%d",&dato);*/
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
}
