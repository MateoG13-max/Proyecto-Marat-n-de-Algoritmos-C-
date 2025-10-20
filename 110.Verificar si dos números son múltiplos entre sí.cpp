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
    cout << "Ingrese dos números enteros: ";
    cin >> a >> b;

    if (a == 0 || b == 0) {
        cout << "No se puede verificar múltiples con cero." << endl;
    } else if (a % b == 0) {
        cout << a << " es múltiplo de " << b << "." << endl;
    } else if (b % a == 0) {
        cout << b << " es múltiplo de " << a << "." << endl;
    } else {
        cout << "Ninguno es múltiplo del otro." << endl;
    }

    return 0;
}
