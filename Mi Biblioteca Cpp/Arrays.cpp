#include "Arrays.h"
#include <iostream>
#include <string>

using namespace std;

void Arrays()
{
	int longArray = 5;
	int miArray1[5]{};

	// inicializo a cer toda el array.
	for (int i = 0; i < longArray; i++)
	{
		cout << "miArray[" << i << "] = " << miArray1[i] << endl;
	}
	cout << endl;

	// Ahora les asigno cualquier valor.
	for (int j = 0; j < longArray; j++) {
		miArray1[j] = (j + 1) * 2;
		cout << "miArray[" << j << "] = " << miArray1[j] << endl;
	}
	cout << endl;

	string z;
	getline(cin, z);
}
