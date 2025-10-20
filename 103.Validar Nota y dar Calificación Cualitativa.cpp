/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int nota;
    do {
        cout << "Ingrese la calificación (0‑100): ";
        cin >> nota;
    } while (nota < 0 || nota > 100);

    if (nota >= 90) {
        cout << "Excelente" << endl;
    } else if (nota >= 75) {
        cout << "Muy Bueno" << endl;
    } else if (nota >= 60) {
        cout << "Bueno" << endl;
    } else {
        cout << "Insuficiente" << endl;
    }

    return 0;
}


