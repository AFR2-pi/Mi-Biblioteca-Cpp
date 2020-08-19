/*
Programa dise�ado por: Andr�s Fabrizio Rodr�guez Rojas
Fecha: 2020-ago-03

Descripci�n: Programa que muestra en consola el mensaje hola mundo.
*/

#include <iostream>			//Librer�a b�sica de entrada y salida.
#include <string>			//Librer�a de manejo de cadenas.
#include "HolaMundo.h"

using namespace std;		//nombre del espacio para diferenciarlo de otros proyectos.

void HolaMundo() {

	cout << "\t\t\t----------------" << endl;
	cout << "\t\t\tHola Cochino C++" << endl;				//mensaje
	cout << "\t\t\t----------------" << endl;

	cout << endl << endl;			//Escribe en la salida un salto de l�nea

	string z;
	getline(cin, z);
}

/*
El primer test lo hice con solo cout, system y return para ver que no hayan problemas y funcion� bien.
*/
