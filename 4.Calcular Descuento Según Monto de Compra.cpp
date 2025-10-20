/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float compra, total;

    cout << "Ingrese el valor de la compra: ";
    cin >> compra;

    if (compra > 100) {
        total = compra * 0.9; // 10% descuento
    } else if (compra > 50) {
        total = compra * 0.95; // 5% descuento
    } else {
        total = compra; // sin descuento
    }

    cout << "Total a pagar: $" << total << endl;

    return 0;
}
