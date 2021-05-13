//hacer un programa que obtenga la division entera y el resto utilizando restas sucesivas//

# include<iostream>

using namespace std;

void restaSucesiva(int dividendo, int divisor);
int main(){
	int dividendo, divisor;
	cout<<"ingrese el dividendo\n";
	cin>> dividendo;
	cout<<"ingrese el divisor\n";
	cin>> divisor;
	
	restaSucesiva(dividendo,divisor);
	return 0;
}

void restaSucesiva(int dividendo, int divisor){
int cociente;
while(dividendo >=divisor) {dividendo-=divisor;cociente++;}
cout<<"el resto es:"<<dividendo<<endl;
cout<<"el cociente es:"<<cociente<<endl;
}
