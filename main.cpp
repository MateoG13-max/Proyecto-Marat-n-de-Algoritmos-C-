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
    unsigned long long factorial = 1; 
    cout << "Ingresa un número entero positivo: ";
    cin >> numero;
    
    if (numero < 0) {
        cout << "El número debe ser positivo." << endl;
    } else {
        for (int i = 1; i <= numero; i++) {
            factorial *= i;
        }

        cout << "El factorial de " << numero << " es: " << factorial << endl;
    }

    return 0;
}