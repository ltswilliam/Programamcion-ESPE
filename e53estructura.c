/*CARRERA DE INGENIERA EN TECNOLOGIAS DE LA INFROMACION Y COMUNICACION
Estudiantes Kenia Alvarado                      No. Lista:04
Asignatura: Fundamentos de Programación     Período:Pregado S-I MAY21-SEP21
Fecha:23-07-21
 */
 //Libreria
#include <stdio.h>


struct deportiva{
    int edad;
    char nombre[10];
    float sueldo;
}kenia;

//funcion principal
void main (){
    printf ("\nIngrese su edad ");
    scanf("%i",&kenia.edad);

    fflush(stdin);
    printf ("\nIngrese su nombre ");
    gets(kenia.nombre);

    printf ("\nIngrese su sueldo ");
    scanf("%f",&kenia.sueldo);

    printf("\nSu nombre es: %s",kenia.nombre);
    printf("\nSu edad es: %d",kenia.edad);
    printf("\nSu sueldo es: %.2f  ",kenia.sueldo);

}
