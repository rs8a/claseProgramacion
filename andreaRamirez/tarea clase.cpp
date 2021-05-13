
#include<iostream> 
#include<string>
using namespace std;

class Cuenta{
	public: 
		string titular;
		int cantidad;
};

class Serie{
	public:
		string titulo;
		int numeroDeTemporada;
		string genero;
		string creador;
};

int main(){
	Cuenta miCuenta;
	miCuenta.titular = "Andrea Ramirez";
	miCuenta.cantidad = 6;
	
	Serie miSerie;
	miSerie.titulo = "Grey's Anatomy";
	miSerie.numeroDeTemporada = 16;
	miSerie.genero = "Drama medico";
	miSerie.creador = "Shonda Rhimes";
}
