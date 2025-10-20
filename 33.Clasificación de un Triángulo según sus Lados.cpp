/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Validar lados positivos
    do {
        cout << "Ingrese los tres lados del triángulo: ";
        cin >> a >> b >> c;
    } while (a <= 0 || b <= 0 || c <= 0);

    if (a == b && b == c) {
        cout << "Triángulo equilátero" << endl;
    } else if (a == b || b == c || a == c) {
        cout << "Triángulo isósceles" << endl;
    } else {
        cout << "Triángulo escaleno" << endl;
    }

    return 0;
}
