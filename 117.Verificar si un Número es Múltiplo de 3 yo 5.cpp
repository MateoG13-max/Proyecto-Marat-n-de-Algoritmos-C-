/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero % 3 == 0 && numero % 5 == 0) {
        cout << "Es múltiplo de 3 y 5." << endl;
    } else if (numero % 3 == 0) {
        cout << "Es múltiplo de 3." << endl;
    } else if (numero % 5 == 0) {
        cout << "Es múltiplo de 5." << endl;
    } else {
        cout << "No es múltiplo de 3 ni de 5." << endl;
    }

    return 0;
}
