#include "PunterosFunciones.h"

#include <iostream>

using namespace std;

void PersonaCumpleanos(int edad);
void PersonaCumpleanosPuntero(int *edad);

void PunterosFunciones()
{
	// Punteros con funciones
	int edad = 50;
	// Antes de la función
	cout << "Tienes " << edad << " años." << endl << endl;

	// Al aplicar la función
	PersonaCumpleanos(edad);

	// Después de la función
	cout << "Sigues teniendo " << edad << " años." << endl << endl;

	/// Con punteros
	PersonaCumpleanosPuntero(&edad);

	// Después de que cambie la edad con el puntero.
	cout << "Eres joven con nueva edad de " << edad << " años. Gracias a los punteros * &" << endl << endl;

	system("pause>0");
}

void PersonaCumpleanos(int edad)
{
	edad -= 10;
	cout << "¡Celebraste " << edad << " años!" << endl << endl;
}

void PersonaCumpleanosPuntero(int* edad) {
	*edad -= 20;  //cambia el valor de edad en la dirección de memoria &edad
	cout << "¡Celebraste " << *edad << " años!" << endl << endl;
	cout << "La dirección de memoria es: 0x" << edad << endl << endl;
}
