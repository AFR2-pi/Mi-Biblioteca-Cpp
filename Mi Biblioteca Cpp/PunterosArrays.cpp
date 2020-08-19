#include "PunterosArrays.h"
#include <iostream>
#include <string>

using namespace std;

void PunterosArrays()
{
	cout << endl;
	int posicionAVer = 1;

	int numerosDeLaSuerte[] = { 1, 2, 5, 3, 7, 9 };
	cout << "Dirección de la lista de números de la suerte: 0x" << numerosDeLaSuerte << endl;
	cout << "Dirección de la lista de números de la suerte en otro formato: 0x" << &numerosDeLaSuerte[posicionAVer] << endl;
	cout << "valor en la posición " << posicionAVer << ": " << numerosDeLaSuerte[posicionAVer] << endl << endl;

	// Puntero de puntero
	// numerosDeLaSuerte tiene la dirección de la lista, *numerosConPunteros tiene los valores de la lista.
	int* numerosConPunteros = numerosDeLaSuerte;
	cout << "Apuntando a: 0x" << numerosConPunteros << " que tiene el primer valor: " << *numerosConPunteros << endl << endl;

	numerosConPunteros++;
	cout << "Apuntando a: 0x" << numerosConPunteros << " que tiene el segundo valor: " << *numerosConPunteros << endl << endl;

	string z;
	getline(cin, z);
}
