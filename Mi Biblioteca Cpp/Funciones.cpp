#include <iostream>
#include <string>
#include "Funciones.h"

using namespace std;

double suma(double a, double b);
void saludo(string nombre, int edad = 10);

void Funciones()
{
	cout << endl << endl;
	cout << "2.2 + 5 = " << suma(2.2, 5) << endl;
	cout << "5.2 + 3 = " << suma(5.2, 3) << endl;
	cout << "4 + 7 = " << suma(4, 7) << endl << endl;
	
	saludo("Fabrizio", 50);
	saludo("Ana");

	string z;
	getline(cin, z);
}

double suma(double a, double b) {
	return a + b;
}

void saludo(string nombre, int edad) {
	cout << "Tu nombre es " << nombre << " y tienes " << edad << " años." << endl << endl;
}

