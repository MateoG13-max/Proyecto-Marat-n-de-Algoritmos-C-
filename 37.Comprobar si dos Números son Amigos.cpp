/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int sumaDivisores(int x) {
    int suma = 0;
    for (int i = 1; i <= x / 2; i++) {
        if (x % i == 0) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int a, b;
    cout << "Ingrese dos números enteros positivos: ";
    cin >> a >> b;

    int sumaA = sumaDivisores(a);
    int sumaB = sumaDivisores(b);

    if (sumaA == b && sumaB == a) {
        cout << a << " y " << b << " son números amigos." << endl;
    } else {
        cout << a << " y " << b << " no son números amigos." << endl;
    }

    return 0;
}

