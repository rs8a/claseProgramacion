#include <iostream>
using namespace std;

int main(){
	bool comp = false;
	int v = 100;
	short a = 1;
	long x = 1000000;

	v = 100 + 10; //suma
	v = 100 - 10; //resta
	v = 100 * 10; //multiplica
	v = 100 / 10; //divide
	v = 100 % 11;  //divir y da como resultado el residuo de la divicion eje: 100/11 = 9 y el residuo es 1
	
	v++; //incrementa en uno;
	++v; //incrementa en uno;
	
	v--; //decrementa en uno;
	--v; //decrementa en uno;
	
//	cout<<"el valor de a "<<a<<endl;
//	cout<<"el valor de a++ "<<a++<<endl;
//	cout<<"el valor de a "<<a<<endl;
//	cout<<"el valor de ++a "<<++a<<endl;
//	cout<<"el valor de a "<<a<<endl;
	
	
	v+=2; //v = v+2;
	v-=2; //v = v-2;
	v*=2; //v = v*2;
	v/=2; //v = v/2;
	
	comp = v > 1;
	comp = v >= 1;
	comp = v < 1;
	comp = v <= 1;
	comp = v != 1; 
	comp = v == 1;
	
	
	int count = 0;
	//while
	cout<<"Ciclo while"<<endl;
	while(count < 10){
		cout<<"count es igual a:"<<count++<<endl;
		//bloque de instrucciones	
	}
	cout<<endl;
	
	//do while
	cout<<"Ciclo do while"<<endl;
	do {
		cout<<"count es igual a:"<<count--<<endl;
		//bloque de instrucciones
	}while(count > 0);
	cout<<endl;
	
	cout<<"Ciclo for"<<endl;
	//for
	for(int i=0; i<10; i++){
		cout<<"valor de i es:"<<i<<endl;
		//bloque de instrucciones
	}
	
	system("cls");
	cout<<"If Else"<<endl;
	int condi = 100;
	//if else
	if(condi == 0){
		cout<<"Hola mundo";
		//bloque de instrucciones
	}
	else if(condi < 10){
		cout<<"Hola Tierra";
		//otro bloque de instrucciones
	}
	else if(condi < 100){
		cout<<"Hola planeta";
		//otro bloque de instrucciones
	}
	else{
		cout<<"Ninguna es correcta";
		//bloque de instrucciones si ningun if es verdadero
	}
	cout<<endl;
	
	
	
	
	cout<<"Switch case"<<endl;
	//switch case
	char opcion = 'd';
	do{
		cout<<"ingrese l para limpiar la pantalla"<<endl;
		cout<<"Ingrese una opcion desde el A a la Z (q para salir):";
		cin>>opcion;
		switch (opcion){
			case 'a':
			case 'A':
				cout<<"Caso 0";
				//linea de instrucciones
				break;
			case 'b':
			case 'B':
				cout<<"Caso 1";
				//linea de instrucciones
				break;
			case 'c':
			case 'C':
				cout<<"Caso 2";
				//liena de instrucciones
				break;
			case 'l':
				system("cls");
				break;
			default:
				cout<<"Caso por defecto";
				//linea de instrucciones
				break;
		}
		cout<<endl;
	}while(opcion != 'q');
	
	
	
	
	
	
	
	
	
	
	
}
