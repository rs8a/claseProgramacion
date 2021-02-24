#include <iostream>
using namespace std;




int main(){
	int x = 2;
	int numeroFrutas = 0;
	int numeroDeManzanas = 0;
	int numeroDePeras =0; 
	//cout<<"el valor de x es: "<<x<<endl;
	x += 3; //++ incrementador en 1;
	//cout<<"el valor de x es: "<<x<<endl;
	x--; //--decrementador en 1;
	//cout<<"el valor de x es: "<<x<<endl;
	x = 15; // operadoir de asignacion;
	//cout<<"el valor de x es: "<<x<<endl;
	
	//Condicionales
	//15 > 4     true
	//3 < 6      true
	//15 >= 15   true
	//13 <= 14   true
	
	//13 != 12  true
	
	//14 == 14  true
	
	
	// if 			Si
	// else if		sino si
	// else			sino
	
	/*if(15<4){
		cout<<"si 15 es mayor que 4";
	}
	else if(15 == 14){
		cout<<"si 15 es igual a 14";
	}
	else if(15 == 13){
		cout<<"si 15 es igual a 14";
	}
	
	else if(15 == 12){
		cout<<"si 15 es igual a 14";
	}
	else{
		cout<< "15 no tiene comparacion";
	}
	cout<<"Ingrese un numero frutas: ";
	cin>>numeroFrutas;
	
	cout<<"Ingrese el numero de manzanas: ";
	cin>>numeroDeManzanas;
	
	cout<<"Ingrese el numero de peras: ";
	cin>>numeroDePeras;
	
	
	
	if(numeroFrutas > 10){
		cout<<"Tu numero de frutas es mayor a 10";
	}
	else if(numeroFrutas > 5){
		cout<<"Tu nuemro de frutas es mayor a 5 pero menor o igual a 10";
	}
	else{
		cout<<"tu numero de frutas es menor que 5";
	}
	cout<<endl;
	if(numeroFrutas > (numeroDeManzanas + numeroDePeras)){
		cout<<"Tienes otras frutas aparte de manzanas y peras";
	}
	else if(numeroFrutas == (numeroDeManzanas + numeroDePeras)){
		cout <<"Tus frutas coinciden con el numero de manzanas y peras que tenes";
	}
	else{
		cout<<"Esta mintiendo";
	}*/
	
	
	// switch seleccion de opciones
	
	/*cout<<"=== Menu ==="<<endl;
	cout<<"1. Di hola mundo"<<endl;
	cout<<"2. Di adios mundo"<<endl;
	cout<<"3. Di claro"<<endl;
	cout<<"4. Di si claro"<<endl;
	cin>>x;
	
	
	
	// ejemplo de seleccion simple con operador IF
	if(x == 1){
		cout<<"Hola mundo"<<endl;	
	}
	else if(x == 2){
		cout<<"adios mundo"<<endl;
	}
	else if(x >= 3){
		cout<<"claro"<<endl;
	}
	else{
		cout<<"esa opcion no existe"<<endl;
	}
	 
	switch(x){
		case 1:
			cout<<"Hola mundo"<<endl;
			break;
		case 2:
			cout<<"adios mundo"<<endl;
			break;
		case 4:
			cout<<"Si ";
		case 3:
			cout<<"claro"<<endl;
			break;
		default:
			cout<<"esa opcion no existe"<<endl;
			break;
	}*/
	/*x = 9; 
	cout<<"el valor de x al inicio es: "<<x<<endl;
	
	while(x < 10){
		//bloque de codigo;
		cout<<"x vale: "<<x<<endl;
		x++;
	}
	
	cout<<"el valor de x al inicio del do while es: "<<x<<endl;
	
	do {
		cout<<"en ciclo do x vale: "<<x<<endl;
		x++;
	}while(x < 10);
	
	
	for(int i = 10; i > 0; i--){
		cout<<"el valor de i es: "<<i<<endl;
	}*/
	
	int array[3] = {10,43,23};
	
	for(int i=0; i < 3; i++){
		cout<<"el valor del arreglo en su memoria: "<<i<<" es de : "<<array[i]<<endl;
	}
	for(int i=0; i < 3; i++){
		cout<<"Ingrease "<<i<<" valor: ";
		cin>>array[i];
	}
	 for(int i=0; i < 3; i++){
		cout<<"el valor del arreglo en su memoria: "<<i<<" es de : "<<array[i]<<endl;
	}
	
	
	
	return 0;
}
