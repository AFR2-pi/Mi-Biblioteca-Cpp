/*
Programa diseñado por: Andrés Fabrizio Rodríguez Rojas
Fecha: 2020-ago-03

Descripción: Programa que muestra en consola el mensaje hola mundo.
*/

#include <iostream>			//Librería básica de entrada y salida.
#include <string>			//Librería de manejo de cadenas.
#include "HolaMundo.h"

using namespace std;		//nombre del espacio para diferenciarlo de otros proyectos.

void HolaMundo() {

	cout << "\t\t\t----------------" << endl;
	cout << "\t\t\tHola Cochino C++" << endl;				//mensaje
	cout << "\t\t\t----------------" << endl;

	cout << endl << endl;			//Escribe en la salida un salto de línea

	string z;
	getline(cin, z);
}

/*
El primer test lo hice con solo cout, system y return para ver que no hayan problemas y funcionó bien.
*/
