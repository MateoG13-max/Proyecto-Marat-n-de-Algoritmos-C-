/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float nota;

    do {
        cout << "Ingrese su calificación (0 - 10): ";
        cin >> nota;
    } while (nota < 0 || nota > 10);

    if (nota >= 9.0) {
        cout << "Nota: A" << endl;
    } else if (nota >= 7.0) {
        cout << "Nota: B" << endl;
    } else if (nota >= 5.0) {
        cout << "Nota: C" << endl;
    } else {
        cout << "Nota: F" << endl;
    }

    return 0;
}

