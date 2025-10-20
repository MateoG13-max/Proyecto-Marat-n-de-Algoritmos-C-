/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Ingrese la calificación con letra (A-F): ";
    cin >> letra;

    switch (letra) {
        case 'A': case 'a':
            cout << "Excelente" << endl;
            break;
        case 'B': case 'b':
            cout << "Bueno" << endl;
            break;
        case 'C': case 'c':
            cout << "Regular" << endl;
            break;
        case 'D': case 'd':
            cout << "Deficiente" << endl;
            break;
        case 'F': case 'f':
            cout << "Reprobado" << endl;
            break;
        default:
            cout << "Letra no válida." << endl;
    }

    return 0;
}


