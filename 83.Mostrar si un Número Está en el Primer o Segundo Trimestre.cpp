/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int mes;

    cout << "Ingrese un número entre 1 y 6: ";
    cin >> mes;

    if (mes >= 1 && mes <= 3) {
        cout << "Primer trimestre." << endl;
    } else if (mes >= 4 && mes <= 6) {
        cout << "Segundo trimestre." << endl;
    } else {
        cout << "Número fuera de rango." << endl;
    }

    return 0;
}

