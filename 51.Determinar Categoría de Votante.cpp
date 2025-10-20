/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int edad;

    do {
        cout << "Ingrese su edad: ";
        cin >> edad;
    } while (edad < 0 || edad > 120);

    if (edad < 16) {
        cout << "No vota" << endl;
    } else if ((edad >= 16 && edad < 18) || edad > 65) {
        cout << "Voto opcional" << endl;
    } else {
        cout << "Voto obligatorio" << endl;
    }

    return 0;
}
