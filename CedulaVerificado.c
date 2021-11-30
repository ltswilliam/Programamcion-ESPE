//BY: WILLIAM
#include <stdio.h>
#include <string.h>

int main(){
	int arreglo[10];
	int digito;
	int sumaDigitos=0;
	int numeroRestar=0;
	int elementoFinal=0;
	int i;
	printf("Ingresa el numero de cedula: \n\n");
	
	for(i=0;i<10;i++){
		printf("Ingresa digito (%d): \n",i+1);
		scanf("%d",&digito);
		arreglo[i]=digito;
	}
	
	for(i=0;i<9;i++){
		if(i==0){
			arreglo[i]=arreglo[i]*2;
			if(arreglo[i]>=10){
				arreglo[i]=arreglo[i]-9;
			}
		}
		if( (i%2==0) && (i != 0) ){
			arreglo[i]=arreglo[i]*2;
			if(arreglo[i]>=10){
				arreglo[i]=arreglo[i]-9;
			}
		}
		if( (i%2 != 0) && (i!=0) ){
			arreglo[i]=arreglo[i]*1;
			if(arreglo[i]>=10){
				arreglo[i]=arreglo[i]-9;
			}	
		}
	}
	
	printf("\nEl numero de cedula multiplicado es: \n");
	for(i=0
	;i<10;i++){
		printf(" %d",arreglo[i]);
	}
	
	for(i=0;i<9;i++){
		sumaDigitos=sumaDigitos+arreglo[i];
	}
	printf("\nSuma de los 9 primeros digitos multiplicados por 2 y 1 de la cedula: %d",sumaDigitos);
	
	if(sumaDigitos >=20 && sumaDigitos<=29){
		numeroRestar=30-sumaDigitos;
	}
	if(sumaDigitos >=10 && sumaDigitos<=19){
		numeroRestar=20-sumaDigitos;
	}
	if(sumaDigitos >=30 && sumaDigitos<=39){
		numeroRestar=40-sumaDigitos;
	}
	
	printf("\n Comprobacion:\n");
	elementoFinal=arreglo[9];
	if(numeroRestar == elementoFinal){
		printf("Tu cedula es correcta\n");
	}
	if(numeroRestar != elementoFinal){
		printf("Tu cedula es incorrecta\n");
	}	
}
