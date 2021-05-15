#include <iostream>
#include<string>
using namespace std;

class Rectangulo{

private:
	double base;
	double altura;
	
	public:	
	
	Rectangulo(double,double);
	void obtenerPerimetro();
	void obtenerArea();
};
    Rectangulo::Rectangulo(double _base, double _altura){
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
	int base, altura;
	int (op);
	do{
	
cout<<"1.que desea hacer"<<endl;
cout<<"2.calcular el area del rectangulo"<<endl;
cout<<"3.calcular el perimetro del rectangulo"<<endl;
cout<<"4.modifique la base"<<endl;
cout<<"5.modifique la altura"<<endl;
cout<<"6.seleccione una opcion: ";
cin>>op;
cout<<endl;

switch(op){
case 1:
break;	

case 2:
cout<<"ingrese la base del rectangulo";
cin>>base;
cout<<"ingrese la altura del rectangulo";
cin>>altura;
cout<<"el area del rectangulo es:"<<base * altura;
break;

case 3:
cout<<"ingrese la altura del rectangulo";
cin>>altura;
cout<<"ingrese la base del rectangulo";
cin>>base;
cout<<"el perimetro del rectangulo es:"<<2*base+2*altura;	
break;
case 4:
	cout<<"ingrese la nueva base del rectangulo";
	cin>>base;
	cout<<"ingrese la nueva altura";
	cin>>altura;
	cout<<"la nueva area del rectangulo es:"<<base*altura;
	cout<<"el nuevo perimetro del rectangulo es:"<<2*base+2*altura;
	break;
	case 5:
		system("cls");
		case 100:
			break;
   }

}while(op=8);
 
}

