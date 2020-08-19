#include "Macros.h"
#include <iostream>
#include <string>

using namespace std;

#define DATE 31

void Macros(){
	// Macro definition 
	//#define double AREA(double l, double b) {return l * b} 
	#define AREA(l, b) (l * b) 

	// Given lengths l1 and l2 
	int l1 = 10, l2 = 5, area;

	// Find the area using macros 
	area = AREA(l1, l2);

	// Print the area 
	cout << "Área del rectángulo es: " << area << endl;

	string z;
	getline(cin, z);
}
