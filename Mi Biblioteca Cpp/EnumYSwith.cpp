#include "EnumYSwith.h"
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

enum ColorDeOjos { Marrones, Azules, Verdes, Grises, Violetas, Rojos, Celestes, Pardos, Ambares, Heterocromia };
enum class Mammal { kangaroo, deer, human };

void EnumYSwitch()
{
	setlocale(LC_ALL, "spanish");

	
	string colores[] = { "Marrones", "Azules", "Verdes", "Grises", "Violetas", "Rojos", "Celestes", "Pardos", "Ambares", "Heterocromia" };

	ColorDeOjos colorDeOjos = Ambares;
	Mammal m = Mammal::deer;

	switch (colorDeOjos) {
	case Marrones:
		cout << "79% de la gente tiene color de ojos " << colores[colorDeOjos] << endl;
		break;
	case Azules:
		cout << "10% de la gente tiene color de ojos " << colores[colorDeOjos] << endl;
		break;
	case Verdes:
		cout << "2% de la gente tiene color de ojos " << colores[colorDeOjos] << endl;
		break;
	case Grises:
		cout << "< 1% de la gente tiene color de ojos " << colores[colorDeOjos] << endl;
		break;
	case Violetas:
		cout << "< 1% de la gente tiene color de ojos " << colores[colorDeOjos] << endl;
		break;
	case Rojos:
		cout << "< 1% de la gente tiene color de ojos " << colores[colorDeOjos] << endl;
		break;
	case Celestes:
		cout << "10%% de la gente tiene color de ojos " << colores[colorDeOjos] << endl;
		break;
	case Pardos:
		cout << "5% de la gente tiene color de ojos " << colores[colorDeOjos] << endl;
		break;
	case Ambares:
		cout << "5% de la gente tiene color de ojos " << colores[colorDeOjos] << endl;
		break;
	case Heterocromia:
		cout << "< 1% de la gente tiene color de ojos " << colores[colorDeOjos] << endl;
		break;
	default:
		cout << "¡Ese color no existe!" << endl;
		break;
	}

	string z;
	getline(cin, z);
}
