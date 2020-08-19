#include "PunterosFunciones.h"

#include <iostream>

using namespace std;

void PersonaCumpleanos(int edad);
void PersonaCumpleanosPuntero(int *edad);

void PunterosFunciones()
{
	// Punteros con funciones
	int edad = 50;
	// Antes de la funci�n
	cout << "Tienes " << edad << " a�os." << endl << endl;

	// Al aplicar la funci�n
	PersonaCumpleanos(edad);

	// Despu�s de la funci�n
	cout << "Sigues teniendo " << edad << " a�os." << endl << endl;

	/// Con punteros
	PersonaCumpleanosPuntero(&edad);

	// Despu�s de que cambie la edad con el puntero.
	cout << "Eres joven con nueva edad de " << edad << " a�os. Gracias a los punteros * &" << endl << endl;

	system("pause>0");
}

void PersonaCumpleanos(int edad)
{
	edad -= 10;
	cout << "�Celebraste " << edad << " a�os!" << endl << endl;
}

void PersonaCumpleanosPuntero(int* edad) {
	*edad -= 20;  //cambia el valor de edad en la direcci�n de memoria &edad
	cout << "�Celebraste " << *edad << " a�os!" << endl << endl;
	cout << "La direcci�n de memoria es: 0x" << edad << endl << endl;
}
