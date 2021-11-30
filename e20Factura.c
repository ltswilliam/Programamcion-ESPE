/*
"UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE"
PERIODO:Pregrado S-I MAY21-SEP21
NOMBRE: Llumitasig William
NRC: 3585
FECHA: 16/06/2021

EJERCICIO: FACTURA
DESCRIPCION: 
Realizar un programa que permita emitir una factura para lo cual se pedira el:
Nombre del cliente y la Cedula.
Segun el detalle del producto y la cantidad que lleve de cuerdo al precio unitario
se calculara el importe o valor del producto.
Cabe señalar que si el usuario lleva mas de 5 productos, tendra un descuento del 10%
y si el valor total de la factura sobrepasa los 1000 tendra un descuento del 10%
Al final la factura mostrara el total y el descuento y el IVA y el total que el cliente debe pagar
	*/
//Librerias
#include <stdio.h>

//FUNCION PRINCIPAL
void main(){
	
	//Declaracion de variables
	char Nombre[30]; 
	char Cedula[8];
	char Producto[30];
	float Precio[10], Descuento[10], PrecioTotal[10];
	int Cantidad[10];
	float IVA;
	int i;
	char Otro;
	
	//Inicializacion de variables
	Descuento[1]=0;
	IVA=0.12;
	i=0;
	
	//Ingreso de Datos
	printf("Por favor, ingrese los datos que pide el programa:\n\n");
	do{
			Otro='n';
			
			
		printf("Digite 'S' para ingesar otro producto: ");
		scanf("%c",&Otro);
	}while(Otro =='s' || Otro =='S');
	
/*	printf("%d",i);
	
	printf("Nombre: ");
	gets(Nombre);
	printf("Cedula: ");
	gets(Cedula);
	
	printf("Caracteristicas del Producto: ");
	gets(Producto);
	printf("Precio Unitario: ");
	scanf("%f", &Precio);
	printf("Cantidad: ");
	scanf("%d", &Cantidad);
	
	PrecioTotal=Precio*(float)Cantidad;
	
	if(Cantidad>=5 || PrecioTotal>=1000){
		Descuento=PrecioTotal*0.1;
		PrecioTotal=PrecioTotal-Descuento;
	}
	
	//Desplegue de datos
	printf("\n_________________________________________________________");
	printf("\n\n                 MEGA IMPORTADORA ABC"                  );
	printf("\n                        FACTURA                          ");	
	printf("\n\nNombre: %s \tCedula: %s",&Nombre, &Cedula);
	//printf("\n Producto: %s  Cantidad: %d  Precio Unit: %f  Total: %f",&Producto, &Cantidad, &Precio, &PrecioDescuento);
	printf("\n\nProducto: %s", Producto);
	printf("\n\tCantidad: %d", Cantidad);
	printf("\tPrecio: %c%.2f",36,Precio);
	printf("\tTotal: %c%.2f",36,(PrecioTotal+Descuento));
	
	printf("\n\n\tDescuento del 10%c es: %c%.2f",37,36,Descuento);
	printf("\n\tSubTotal sin IVA: %c%.2f",36,PrecioTotal);
	printf("\n\tEl 12%c es: : %c%.2f",37,36,(PrecioTotal*0.12));
	printf("\n\tValor Total: %c%.2f",36,(PrecioTotal*1.12));
	printf("\n\n\t\tGracias por su compra");
	printf("\n\n_________________________________________________________");
*/}
