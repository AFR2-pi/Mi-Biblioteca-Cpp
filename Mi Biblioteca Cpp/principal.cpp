#include <iostream>
#include <locale.h>
#include "HolaMundo.h"
#include "TiposDeDato.h"
#include "EnumYSwith.h"
#include "Loops.h"
#include "Funciones.h"
#include "PunterosFunciones.h"
#include "PunterosArrays.h"
#include "Clases.h"
#include "Variables.h"
#include "Macros.h"
#include "Arrays.h"
#include "ClasesHerencia.h"
#include "FuncionesMatematicas.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "spanish");

	int cont = 0;
	bool fin = false;

	while ((cont < 3) && (!fin)){

		cout << "0. Hola Mundo" << endl;
		cout << "1. Tipos de Datos" << endl;
		cout << "2. Variables" << endl;
		cout << "3. Uso de Enum y switch" << endl;
		cout << "4. Loops while, do-while y for" << endl;
		cout << "5. Funciones" << endl;
		cout << "6. Punteros a Funciones" << endl;
		cout << "7. Punteros a Arrays" << endl;
		cout << "8. Macros" << endl;
		cout << "9. Arrays" << endl;
		cout << "a. Clases" << endl;
		cout << "b. Clases Herencia" << endl;
		cout << "f. Funciones Matemáticas" << endl;
		cout << "z. Salir" << endl << endl << endl;
		cont++;


		printf("Escoge una opción: \n");
		char c = getchar();
		cout << endl;

		switch (c) {
		case '0':
			HolaMundo();
			break;
		case '1':
			TiposDeDato();
			break;
		case '2':
			Variables();
			break;
		case '3':
			EnumYSwitch();
			break;
		case '4':
			Loops();
			break;
		case '5':
			Funciones();
			break;
		case '6':
			PunterosFunciones();
			break;
		case '7':
			PunterosArrays();
			break;
		case '8':
			Macros();
			break;
		case '9':
			Arrays();
			break;
		case 'a':
			Clases();
			break;
		case 'b':
			ClasesHerencia();
			break;
		case 'f':
			FuncionesMatematicas();
			break;
		case 'z':
			cout << "Termina el programa." << endl;
			fin = true;
			break;
		/*default:
			cout << "Termina el programa." << endl;
			fin = true;
			break;*/
		}

		
		
	}// fin de while

	//system("pause>0");
	return 0;
}