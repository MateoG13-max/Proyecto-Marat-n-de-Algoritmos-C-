/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad inválida." << endl;
    } else {
        double suma = 0.0;
        double valor;
        for (int i = 0; i < n; i++) {
            cout << "Ingrese número " << i+1 << ": ";
            cin >> valor;
            suma += valor;
        }
        double promedio = suma / n;
        cout << "El promedio es: " << promedio << endl;
    }

    return 0;
}

