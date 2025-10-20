/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int opcion;

    cout << "MENÚ:\n1. Saludar\n2. Despedir\n3. Salir\nSeleccione una opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1: cout << "Hola!" << endl; break;
        case 2: cout << "Adiós!" << endl; break;
        case 3: cout << "Saliendo..." << endl; break;
        default: cout << "Opción no válida." << endl;
    }

    return 0;
}


