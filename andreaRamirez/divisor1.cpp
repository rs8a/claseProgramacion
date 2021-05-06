#include <iostream>
#include <string>
using namespace std;

void division_sucesiva(int dividendo, int divisor);

int main()
{
    int dividendo, divisor;
    
    cout << "Ingrese el dividendo: "; 
	cin>>dividendo;
    cout << "Ingrese el divisor: ";
	 cin>>divisor;
    division_sucesiva(dividendo,divisor);

return 0;
}

void division_sucesiva(int dividendo, int divisor){
	int cociente;
    while(dividendo >= divisor) {
	dividendo -= divisor; 
	cociente++; }
    cout<<"El resto es: "<<dividendo<<endl;
    cout<<"El cociente es: "<<cociente<<endl;
}



