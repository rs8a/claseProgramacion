/*Escriba un programa utilizando clases para poder manejar rectangulos, la clase debe tener los atributos "base" y "altura" y los metodos "obtenerArea", 
"obtenerPerimetro".
 Tambien debe de tener su contructor el cual debe pedir los parametros para asignar los valores a los atributos.
El programa debe de pedirle al usuario que ingrese los valores del rectangulo y ademas crear un menu donde tenga las opciones para poder mostrar 
la base y la altura o modificar los atributos del rectangulo ya creado*/

#include <iostream>
#include <string>
using namespace std;

class Rectangulo{
private:
	double base;//atributos
	double altura;

public:
	Rectangulo(double,double);//constructor

void obtenerPerimetro();
void obtenerArea();
};
Rectangulo::Rectangulo(double _base,double _altura){
	base = _base;
	altura = _altura;
}

void Rectangulo::obtenerArea(){
	double _area;
	_area = base*altura;
	cout<<"el area del rectangulo es de:"<<_area<<endl;
}
      
void Rectangulo::obtenerPerimetro(){
	double _perimetro;
	
	_perimetro = (2*base) + (2*altura);
	cout<<"el perimetro del rectangulo es de:"<<_perimetro<<endl;
}


int main(){
	int base,altura;
	int op =0;
    do{
    	while (1==1){
		
    cout<<"1.Que deseas hacer\n";
    cout<<"\n";
	cout<<"2.calcular el area del rectangulo\n";
	cout<<"3.calcular el perimetro del rectangulo\n";
	cout<<"4. modificar base y altura\n";
	cout<<"5.elige una opcion\n";
	cout<<"100.salir\n";
	cin>>op;
	cout<<endl;
	
		switch(op){
			 case 1:
			break;
	case 2:
		cout<<"ingrese la base del rectangulo\n";
		cin>>base;
		cout<<"ingrese la altura del rectangulo\n";
		cin>>altura;
		cout<<"el area  del rectangulo es:"<<base * altura<<"\n";
            break;
 			case 3:
		cout<<"ingrese la altura del rectangulo\n";
		cin>>altura;
		cout<<"ingrese la base del rectangulo\n";
		cin>>base;
		cout<<"el perimetro del rectangulo es:"<<2*base+2*altura<<"\n";
		break;
				case 4:
		cout<<"ingrese la nueva base del rectangulo\n";
		cin>>base;
		cout<<"ingrese la nueva altura del rectangulo\n";
		cin>>altura;
		cout<<"la nueva area del rectangulo es:"<<base * altura;
		cout<<"el nuevo perimetro del rectangulo es:"<<2*base+ 2*altura<<"\n";
		break;
			case 100:
				system("cls");
				break;
			}
		}
		
}while(1== 1);
}



