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
    cout << "Ingrese cantidad de números: ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad inválida." << endl;
    } else {
        double valor;
        cout << "Ingrese el número 1: ";
        cin >> valor;

        double mayor = valor;
        double menor = valor;

        for (int i = 2; i <= n; i++) {
            cout << "Ingrese el número " << i << ": ";
            cin >> valor;
            if (valor > mayor) mayor = valor;
            if (valor < menor) menor = valor;
        }

        cout << "El mayor es: " << mayor << endl;
        cout << "El menor es: " << menor << endl;
    }

    return 0;
}

