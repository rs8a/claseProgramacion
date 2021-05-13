//hcer un programa que calcule el cubo de un numero//

#include <iostream>
#include<math.h>
using namespace std;

void funcionCubo(float n1,float n2)
{
	cin>>n1;
	n2=pow(n1,3);
	cout<<"el cubo del numero"<<n1<<" es: "<<n2<<endl;
	
}
int main()
{
	float n1,n2;
	cout<<"ingrese un numero: "<<endl;
	
	funcionCubo(n1,n2);
	return 0;
}
