/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int A, B;
    cout << "Ingrese el primer número: ";
    cin >> A;
    cout << "Ingrese el segundo número: ";
    cin >> B;

    if (B == 0) {
        cout << "No se puede dividir entre cero." << endl;
    } else if (A % B == 0) {
        cout << A << " es divisible entre " << B << "." << endl;
    } else {
        cout << A << " no es divisible entre " << B << "." << endl;
    }

    return 0;
}
