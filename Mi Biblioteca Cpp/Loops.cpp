#include "Loops.h"
#include <iostream>
#include <string>

using namespace std;

void Loops()
{
    int contWhile = 7;
    int contDoWhile = 7;

    
    // while
    cout << "contador en while" << endl;
    cout << "Si no cumple la condición la primera vez, no se ejecuta." << endl;
    while (contWhile < 10) {
        cout << "contador while: " << contWhile << endl;
        contWhile++;
    }
    cout << endl;

    
    // do-while
    cout << "contador en do-while" << endl;
    cout << "Por lo menos se ejecuta una vez." << endl;
    do {
        cout << "contador do-while: " << contDoWhile << endl;
        contDoWhile++;
    } while (contDoWhile < 10);
    cout << endl;

    
    // for
    cout << "contador en for" << endl;
    for(int contFor = 7; contFor < 10; contFor++) {
        cout << "contador for: " << contFor << endl;
    }
    cout << endl;


    // Doble for
    cout << "doble for" << endl;
    for (int i = 5, j = 10; i + j < 20; i++, j++) {
        cout << "i + j = " << (i + j) << '\n';
    }
    cout << endl;

    string z;
    getline(cin, z);
}
