#include <stdio.h>
#include <conio.h>
#define DIM 3


void main(){
	int matriz[DIM][DIM], i, j;

	for (i=0; i<DIM; i++){
		for (j=0; j<DIM; j++){
			matriz[i][j]=1;
		}	
	}

	for (i=0; i<DIM; i++){
		for (j=0; j<DIM; j++){
			prinft("%d",matriz[i][j]);
		}	
		prinft("\n");
	}
}
