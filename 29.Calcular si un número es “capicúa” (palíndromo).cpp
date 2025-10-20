/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Ingrese un número entero no negativo: ";
    cin >> num;

    if (num < 0) {
        cout << "Número inválido para capicúa." << endl;
        return 0;
    }

    long long original = num;
    long long invertido = 0;

    while (num > 0) {
        int dig = num % 10;
        invertido = invertido * 10 + dig;
        num /= 10;
    }

    if (invertido == original) {
        cout << original << " es capicúa." << endl;
    } else {
        cout << original << " no es capicúa." << endl;
    }

    return 0;
}
