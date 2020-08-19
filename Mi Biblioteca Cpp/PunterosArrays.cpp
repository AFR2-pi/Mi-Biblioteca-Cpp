#include "PunterosArrays.h"
#include <iostream>
#include <string>

using namespace std;

void PunterosArrays()
{
	cout << endl;
	int posicionAVer = 1;

	int numerosDeLaSuerte[] = { 1, 2, 5, 3, 7, 9 };
	cout << "Direcci�n de la lista de n�meros de la suerte: 0x" << numerosDeLaSuerte << endl;
	cout << "Direcci�n de la lista de n�meros de la suerte en otro formato: 0x" << &numerosDeLaSuerte[posicionAVer] << endl;
	cout << "valor en la posici�n " << posicionAVer << ": " << numerosDeLaSuerte[posicionAVer] << endl << endl;

	// Puntero de puntero
	// numerosDeLaSuerte tiene la direcci�n de la lista, *numerosConPunteros tiene los valores de la lista.
	int* numerosConPunteros = numerosDeLaSuerte;
	cout << "Apuntando a: 0x" << numerosConPunteros << " que tiene el primer valor: " << *numerosConPunteros << endl << endl;

	numerosConPunteros++;
	cout << "Apuntando a: 0x" << numerosConPunteros << " que tiene el segundo valor: " << *numerosConPunteros << endl << endl;

	string z;
	getline(cin, z);
}
