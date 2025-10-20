/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double b;
    int N;
    cout << "Ingrese la base: ";
    cin >> b;
    cout << "Ingrese el exponente máximo N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        double resultado = pow(b, i);
        cout << b << "^" << i << " = " << resultado << endl;
    }

    return 0;
}
