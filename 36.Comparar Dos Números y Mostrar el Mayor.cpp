/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Ingrese dos números: ";
    cin >> a >> b;

    if (a > b) {
        cout << "El mayor es: " << a << endl;
    } else if (b > a) {
        cout << "El mayor es: " << b << endl;
    } else {
        cout << "Ambos son iguales." << endl;
    }

    return 0;
}

