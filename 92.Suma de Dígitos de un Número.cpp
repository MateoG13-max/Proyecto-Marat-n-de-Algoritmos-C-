/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un número entero positivo: ";
    cin >> num;

    int suma = 0;
    int aux = num;
    while (aux > 0) {
        suma += aux % 10;
        aux /= 10;
    }

    cout << "La suma de los dígitos de " << num << " es " << suma << endl;

    return 0;
}

