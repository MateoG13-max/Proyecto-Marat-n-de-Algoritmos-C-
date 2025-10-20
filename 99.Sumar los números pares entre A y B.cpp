/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int A, B, suma = 0;
    cout << "Ingrese dos números (A y B): ";
    cin >> A >> B;

    if (A > B) swap(A, B);

    for (int i = A; i <= B; i++) {
        if (i % 2 == 0) suma += i;
    }

    cout << "La suma de pares entre " << A << " y " << B << " es " << suma << endl;
    return 0;
}
