#include "Clases.h"
#include <iostream>
#include <string>

using namespace std;

class Carro {
private:
	string nombre;
	string color;
	double precio;
	bool estaMalogrado;

public:
	// Constructor
	Carro(string vnombre, string vcolor, double vprecio) {
		nombre = vnombre;
		color = vcolor;
		precio = vprecio;
		estaMalogrado = false;
	}

	// set Nombre
	void setNombre(string vnombre) {
		nombre = vnombre;
	}
	// get Nombre
	string getNombre()
	{
		return nombre;
	}

	// set Color
	void setColor(string vcolor) {
		color = vcolor;
	}
	// get Color
	string getColor()
	{
		return color;
	}

	// set Precio
	void setPrecio(double vprecio) {
		precio = vprecio;
	}
	// get Precio
	double getPrecio()
	{
		return precio;
	}

	// set estaMalogrado
	void setEstaMalogrado(bool vestaMalogrado) {
		estaMalogrado = vestaMalogrado;
	}
	// get estaMalogrado
	bool getEstaMalogrado() {
		return estaMalogrado;
	}

	//Método - Función de la clase
	void getInfo() {
		cout << "Nombre: " << nombre << endl;
		cout << "Color: " << color << endl;
		cout << "Precio: $" << precio << endl << endl;
	}

	void carroInfo() {
		if (estaMalogrado) {
			cout << "¡El carro " << nombre << " está malogrado!" << endl;
		}
		else {
			cout << "¡El carro " << nombre << " está bien!" << endl;
		}
	}

	void carroCambiaEstado() {
		estaMalogrado = !estaMalogrado;
	}
};

void Clases()
{
	// Creo la clase.
	Carro ford("Ford", "red", 50000);
	Carro volvo("Volvo", "black", 70000);

	// Veo la inormación ingresada.
	ford.getInfo();
	volvo.getInfo();

	// Cambio el estado del carro de que este bien a malogrado
	ford.carroCambiaEstado();
	ford.carroInfo();

	volvo.carroInfo();

	string z;
	getline(cin, z);
}
