#include <iostream>
using namespace std;

inline long cuboDe(int numero);

int main(){
 int numero;
 long resultado = 0;
 cout<<"ingresa un numero: "; cin>>numero;
 resultado = cuboDe(numero);
 cout<<"El resultado es: "<<resultado<<endl;
 return 0;
}

inline long cuboDe(int numero){ return numero * numero * numero; }

