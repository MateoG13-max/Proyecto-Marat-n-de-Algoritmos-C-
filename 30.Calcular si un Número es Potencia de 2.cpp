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

    if (num <= 0) {
        cout << "Debe ingresar un número positivo." << endl;
    } else {
        bool esPotencia2 = false;
        int val = 1;
        while (val < num) {
            val *= 2;
        }
        if (val == num) {
            esPotencia2 = true;
        }

        if (esPotencia2) {
            cout << num << " es potencia de 2." << endl;
        } else {
            cout << num << " no es potencia de 2." << endl;
        }
    }

    return 0;
}

