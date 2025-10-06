/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int numero, divisores = 0;
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    if (numero <= 1) {
        cout << "No es primo." << endl;
    } else {
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                divisores++;
                break;
            }
        }

        if (divisores == 0) {
            cout << "Es un numero primo." << endl;
        } else {
            cout << "No es un numero primo." << endl;
        }
    }

    return 0;
}
