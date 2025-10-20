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

    if ((numero >= 10 && numero <= 99) || (numero <= -10 && numero >= -99)) {
        cout << "Tiene dos dígitos." << endl;
    } else {
        cout << "No tiene dos dígitos." << endl;
    }

    return 0;
}
