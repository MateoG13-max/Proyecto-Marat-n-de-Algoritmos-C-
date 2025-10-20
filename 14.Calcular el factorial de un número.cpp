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
    cout << "Ingrese un número entero no negativo: ";
    cin >> n;

    if (n < 0) {
        cout << "Número inválido." << endl;
    } else {
        unsigned long long factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "El factorial de " << n << " es " << factorial << endl;
    }

    return 0;
}
