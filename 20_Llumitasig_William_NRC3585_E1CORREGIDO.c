/*EXAMEN PARCIAL 1
Nombre: Llumitasig William
Lista: 20
*/
#include <stdio.h>
#define fila 5

//FUNCION PRINCIPAL
int main(){
	char opcion;
	int i, j, numero, tabla, multiplo, limite;
	do{
		system("cls");
		system("color B");
		printf("**********   MENU PRINCIPAL   **********");
		printf("\nA.- Tabla de Dos Columnas");
		printf("\nB.- Tabla de Tres Columnas");
		printf("\nC.- Generador de multiplos");
		printf("\nD.- Salir");
		printf("\n\nSeleccione la opci%cn: ",162);
		fflush(stdin);
		scanf("%c",&opcion);
		
		switch(opcion){
			case 'A':	
			
				printf("***   Tabla de Dos columnas   ***");
				printf("\nIngrese el valor tope de las tablas a generar: ");
				scanf("%d",&tabla);
				
				for(i=1; i<=tabla; i++){
					if(tabla==i){
						printf("\n\nTabla del %d",i);
						for(j=1; j<=fila; j++){
						printf("\n%d * %d = %d",i,j,(i*j));	
					}
					}else{
						printf("\n\nTabla del %d\tTabla del %d",i,i+1);
						for(j=1; j<=fila; j++){
							printf("\n%d * %d = %d\t%d * %d = %d",i,j,(i*j),i+1,j,(i+1)*j);
						}
					}	
				}
				break;
			case 'B':	
				printf("***   Tabla de Tres columnas   ***");
				printf("\nIngrese el valor tope de las tablas a generar: ");
				scanf("%d",&tabla);
				
				for(i=1; i<=tabla; i++){
					if(tabla==i){
						printf("\n\nTabla del %d",i);
						for(j=1; j<=fila; j++){
							printf("\n%d * %d = %d",i,j,(i*j));
						}
					}else{
						if(tabla-1==i){
							printf("\n\nTabla del %d\tTabla del %d",i,i+1);
							for(j=1; j<=fila; j++){
								printf("\n%d * %d = %d\t%d * %d = %d",i,j,(i*j),i+1,j,(i+1)*j);
							}
						}else{
							printf("\n\nTabla del %d\tTabla del %d\tTabla del %d",i,i+1,i+2);
							for(j=1; j<=fila; j++){
								printf("\n%d * %d = %d\t%d * %d = %d\t%d * %d = %d",i,j,(i*j),i+1,j,(i+1)*j,i+2,j,(i+2)*j);
							}
						}	
					}	
				}
				break;
			case 'C':
				printf("\n\nGenerador de multiplos\n");
				
				int numero, limite, multiplo;
				printf("Ingrese el limite de los multiplos: ");
				scanf("%d",&limite);
				printf("Ingrese el numero para generar de los multiplos: ");
				scanf("%d",&numero);
				multiplo=numero;
				
				printf("\nMultiplo del %d \n",numero);
				while(multiplo<=limite){
					printf("%d, ",multiplo);
					multiplo=numero+multiplo;
				} 
				break;
			case 'D':	
				printf("\nSaliendo..."); 
				break;	
			default:
				printf("\nMal ingresada la opci%cn...",162); 		
		}
		getch();
	}while(opcion!='D');
	
}
