#include <iostream>
using namespace std;

int main(){
    //Operadores de asignacion, de incremento y decremento
    // '=' => operador de asignacion
    // '++' => operador de incremento
    // '+=' => operador combinado de asignacion y suma
    // '--' => operador de decremento
    // '-=' => operador combinado de asignacion y resta
    // '*=' => operador combinado de asignacion y multiplicacion
    // '/=' => operador combinado de asignacion y divicion
    
    //operador de asignacion
    double manzanas = 0;
    cout << "Ingresa la cantidad de manzanas:";
    cin >> manzanas;
    cout << "La cantidad de manzanas ingresadas es "<<manzanas<<endl;
    
    manzanas = 10;
    cout << "La cantidad de manzanas asignada es "<<manzanas<<endl;
    
    manzanas++;// manzanas = manzanas + 1;
    manzanas += 1;// manzanas = manzanas + 1;

    cout << "La cantidad de manzanas incrementadas en 2 es "<<manzanas<<endl;
    
    manzanas--;// manzanas = manzanas - 1;
    manzanas-=1;// manzanas = manzanas - 1;

    cout << "La cantidad de manzanas decrementadas en 2 es "<<manzanas<<endl;
    manzanas *= 2; // manzanas = manzanas + 2;
    cout << "La cantidad de manzanas a. multi en 2 es "<<manzanas<<endl;
    manzanas /=2;
    cout << "La mitad de manzanas es "<<manzanas<<endl;
    return 0;
}

