#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    FILE *arch;
    //Abre el fichero para lectura
    arch=fopen("archivo1.txt","rb");
    if (arch==NULL)
        exit(1);
    char c;
    fread(&c, sizeof(char), 1, arch);
    printf("caracter: %c\n",c);
    int v1;
    fread(&v1, sizeof(int), 1, arch);
    printf("entero: %i\n",v1);
    float v2;
    fread(&v2, sizeof(float), 1, arch);
    printf("float: %0.2f\n",v2);
    fclose(arch);
    getch();
    return 0;
}
