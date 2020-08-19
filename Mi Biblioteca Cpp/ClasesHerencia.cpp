#include "ClasesHerencia.h"
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

/*
Clases
*/

/*
* Clase Animal padre
*/
class Animal {
private:
	string _nombre;
	string _tipo;
	int _edad;
	bool _esPeligroso;

public:
	Animal(string nombre, string tipo, int edad, bool esPeligroso) {
		_nombre = nombre;
		_tipo = tipo;
		_edad = edad;
		_esPeligroso = esPeligroso;
	}

	void getAnimalInfo() {
		cout << "nombre        :" << _nombre << endl;
		cout << "tipo          :" << _tipo << endl;
		cout << "edad          :" << _edad << endl;
		cout << "¿Es Peligroso?:" << (_esPeligroso ? "Si." : "No.") << endl << endl;
	}

	// set nombre
	void setNombre(string nombre) {
		_nombre = nombre;
	}
	// get nombre
	string getNombre() {
		return _nombre;
	}

	// set tipo
	void setTipo(string tipo) {
		_tipo = tipo;
	}
	// get tipo
	string getTipo() {
		return _tipo;
	}

	// set edad
	void setEdad(int edad) {
		_edad = edad;
	}
	// get edad
	int getEdad() {
		return _edad;
	}

	// set esPeligroso
	void setEsPeligroso(bool esPeligroso) {
		_esPeligroso = esPeligroso;
	}
	// get esPeligroso
	bool getEsPeligroso() {
		return _esPeligroso;
	}
};


/*
* Clase Perro hija derivada de la Clase Animal
*/
class Perro : public Animal {
	private:
		string _categoria;
		string _color;

	public:
		//Invoco la clase Padre
		Perro(string nombre, string tipo, int edad, bool esPeligroso, string categoria,string color) : Animal(nombre, tipo, edad, esPeligroso){
			_categoria = categoria;
			_color = color;
		}

		void getPerroInfo() {
			cout << "nombre        :" << &Animal::getNombre << endl;
			cout << "tipo          :" << &Animal::getTipo << endl;
			cout << "edad          :" << &Animal::getEdad << endl;
			cout << "¿Es Peligroso?:" << (&Animal::getEsPeligroso ? "Si." : "No.") << endl;
			cout << "categoría     :" << _categoria << endl;
			cout << "color         :" << _color << endl << endl;
		}
};



/*
* Principal
*/
void ClasesHerencia()
{
	setlocale(LC_ALL, "spanish");

	Animal perro("Boby", "canino", 3, false);
	Animal gato("Feo", "gatuno", 5, true);

	perro.getAnimalInfo();
	gato.getAnimalInfo();

	Perro peluche("peluche", "canino", 2, false, "bonito", "beige");
	Perro raton("ratón", "canico", 4, false, "regular", "negro");

	peluche.getAnimalInfo();
	raton.getAnimalInfo();

	peluche.getPerroInfo();
	raton.getPerroInfo();

	string z;
	getline(cin, z);
}
