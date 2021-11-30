//nembrete
//pr mayor

//Librerias
#include <iostream>
using namespace std;

//decla CTES, VAR, GLOB, FUNC
//FUnciones
int main (){
	float numero1, numero2, mayor;
	cout << "Ingrese los valores de los numeros: ";
	cin >> numero1;
	cin >> numero2;
	//proceso
	if (numero1 > numero2){
		mayor=numero1;
	}else{
		mayor=numero2;
	}
	//mostrar datos
	cout << "Valores del numero 1: " << numero1 << "\nValores del numero 2: " << numero2;
	cout << "\nEl mayor es: " << mayor;
	
	return 0;
}

