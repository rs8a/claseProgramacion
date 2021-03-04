#include <iostream>
#include <cstdlib>
using namespace std;

long potencia(int base, int exponente);
long potenciaRecursiva(int base, int exponente);
long cubo(int base);
void presentar(double x);
int sumaDeNumeros();
int sizeOfArray(char cadena[1000]);
int main (){
	/*int base= 0;
	int exponente = 0;
	long resultado =0;
	
	cout<<"Ingrese la base: ";
	cin>>base;
	cout<<"Ingrese el eponente: ";
	cin>>exponente;
	resultado = potenciaRecursiva(base, exponente);
	presentar(resultado);
	
	cout<<"Ingrese un numero: ";
	cin>>base;
	presentar(cubo(base));
	cout<<"El valor de la suma de los numeros de 1 a 100 es: ";
	presentar(sumaDeNumeros());
	
	//Escriba un programa que permita leer una serie de numeros enteros terminando con 0 y contar la cantidad de numeros pares introducidos.
	int datos[1000] = {};
	int valorIngresado = 0;
	int contador = 0;
	int cantidadPares = 0;
	do{
		cout<<"Ingrese el valor (0 para termianr): ";
		cin>>valorIngresado;
		if(valorIngresado !=0){
			datos[contador] = valorIngresado;
			contador++;
		}
	}while(valorIngresado != 0);
	
	for(int i = 0; i < contador; i++){
		if(datos[i] % 2 == 0){
			cantidadPares++;
		}
	}
	
	presentar(cantidadPares);
	*/
	
	char cadena[1000] = {};
	cout<<"Ingrese un nombre: ";
	cin>>cadena;
	cout<<"Tu nombre es: "<<cadena<<endl;
	
	int len = sizeOfArray(cadena);
	for(int i = len-1; i >= 0; i--){
		cout<<cadena[i];
	}
	cout<<endl;
	system("pause");
	system("cls");
	
	cout<<endl<<sizeOfArray(cadena);
	return 0;
}

int sizeOfArray(char cadena[1000]){
	int count = 0;
	int compa = cadena[count];
	while(compa !=0){
		count++;
		compa = cadena[count];
	}
	
	return count;
}

int sumaDeNumeros(){
	int resultado = 0;
	for (int i = 0; i <= 100; i++){
		resultado+=i;
	}
	return resultado;
}

long cubo(int base){
	return potenciaRecursiva(base, 3);
}

long potenciaRecursiva(int base, int exponente){
	return exponente == 1 ? base : base * potenciaRecursiva(base, exponente-1);
}


long potencia(int base, int exponente){
 	long result = base;
	for (int i = 1; i < exponente; i++){
		result *= base;
	}
	return result;
}

void presentar(double x){
	cout<<"El valor es: "<<x<<endl;
}



