#include <locale.h>  //para leer el idioma local
#include <iostream>
#include <string>
#include <cmath>

#include "TiposDeDato.h"

using namespace std;

void TiposDeDato() {
	setlocale(LC_ALL, "spanish");

	double intTipo = pow(2, sizeof(int) * 8);
	long int unsignedIntTipo = pow(2, sizeof(unsigned int)*8);

	cout << "Tama�o de int                : " << sizeof(int) << "|      " << intTipo << " a " << intTipo-1 << endl;
	cout << "Tama�o de unsigned int :       " << sizeof(unsigned int) << "|      " << 0 << " a " << unsignedIntTipo << endl;
	cout << endl;

	cout << "Tama�o de __int8 :             " << sizeof(__int8) << endl;
	cout << "Tama�o de unsigned __int8 :    " << sizeof(unsigned __int8) << endl;
	cout << endl;

	cout << "Tama�o de __int16 :            " << sizeof(__int16) << endl;
	cout << "Tama�o de unsigned __int16 :   " << sizeof(unsigned __int16) << endl;
	cout << endl;

	cout << "Tama�o de __int32 :            " << sizeof(__int32) << endl;
	cout << "Tama�o de unsigned __int32 :   " << sizeof(unsigned __int32) << endl;
	cout << endl;

	cout << "Tama�o de __int64 :            " << sizeof(__int64) << endl;
	cout << "Tama�o de unsigned __int64 :   " << sizeof(unsigned __int64) << endl;
	cout << endl;

	cout << "Tama�o de bool :               " << sizeof(bool) << endl;
	cout << endl;

	cout << "Tama�o de char :               " << sizeof(char) << endl;
	cout << "Tama�o de signed char :        " << sizeof(signed char) << endl;
	cout << "Tama�o de unsigned char :      " << sizeof(unsigned char) << endl;
	cout << endl;

	cout << "Tama�o de short :              " << sizeof(short) << endl;
	cout << "Tama�o de unsigned short int : " << sizeof(unsigned short int) << endl;
	cout << "Tama�o de long int :           " << sizeof(long int) << endl;
	cout << "Tama�o de unsigned long int :  " << sizeof(unsigned long int) << endl;
	cout << endl;

	cout << "Tama�o de long long          : " << sizeof(long long) << endl;
	cout << "Tama�o de unsigned long long : " << sizeof(unsigned long long) << endl;
	cout << endl;

	cout << "Size enum :                    " << "variable" << endl;
	cout << endl;

	cout << "Tama�o de float :              " << sizeof(float) << endl;
	cout << endl;

	cout << "Tama�o de double :             " << sizeof(double) << endl;
	cout << "Tama�o de long double :        " << sizeof(long double) << endl;
	cout << endl;

	cout << "Tama�o de wchar_t :            " << sizeof(wchar_t) << endl;
	cout << endl;

	string z;
	getline(cin, z);
}