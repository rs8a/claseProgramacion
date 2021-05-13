//programa que permita al usuario calcular el area de  figuras geometricas//
#include <iostream>
#include <string>
using namespace std;
void figurasGeometricas(void);
void areadelCirculo(void);
void areadelCuadrado(void);
void areadelRectangulo(void);
void areadelTriangulo(void);

int main(){
	int op;
	
	cout<<"1. ingrese el area de un circulo\n";
	cout<<"2. ingrese el area de un cuadrado\n";
    cout<<"3. ingrese el area de un rectangulo\n";
	cout<<"4. ingrese el area de un triangulo\n";

	
	cout<<"elija una opcion\n";
	cin>> op;
	
	int radio,lado,base,altura;
	switch(op)
	{
		void figurasGeometricas();
		case 1:
		cout<<"ingrese el radio del circulo\n";
		cin>>radio;
		cout<<"el area del circulo es:"<<3.1416*radio*radio;
		break;
		
		case 2:
		cout<<"ingrese el lado de un cuadrado\n";
		cin>> lado;
		cout<<"el area de un cuadrado es:"<<lado*lado;
			break;
			
		case 3:
		cout<<"ingrese la base de un rectangulo\n";
		cin>> base;
		cout<<"ingrese la altura de un rectangulo\n";
		cin>> altura;
		cout<<"el area de un rectangulo es:"<<base*altura;
		break;
		
		case 4:
		cout<<"ingrese la base de un triangulo\n";
		cin>> base;
		cout<<"ingrese la altura de un triangulo\n";
		cin>> altura;
		cout<<"el area de un triangulo es:"<<base*altura/2;
			
	}
	
	return 0;
}
	

















