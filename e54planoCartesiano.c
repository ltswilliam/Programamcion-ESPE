/*CARRERA DE INGENIERA EN TECNOLOGIAS DE LA INFROMACION Y COMUNICACION
Estudiante: william llumitasig				No. Lista:20
Asignatura: Fundamentos de Programación		Período:Pregado S-I MAY21-SEP21
Fecha:16-08-2021
 */
 //Libreria
#include <stdio.h>


typedef struct punto{
    float coordenadaX;
    float coordenadaY;
} Punto;
//definicion de variable Global

//funcion principal
void main (){
	//definicion de variable Local
	
	Punto
	punto1, punto2={1,2}, punto3;	//Variables individuales
	Punto puntos[3];				//vector
	punto1.coordenadaX=5;
    printf ("\nIngrese la abscisa: ");
    scanf("%f",&punto1.coordenadaY);
    //mostrar
    printf ("\n\nEl valor ordenado es: %.2f, %.2f", punto1.coordenadaX, punto1.coordenadaY);
    printf ("\n\nEl valor ordenado es: %.2f, %.2f", punto2.coordenadaX, punto2.coordenadaY);

}
