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
    cout << "Ingrese el dividendo y el divisor: ";
    cin >> A >> B;

    if (B == 0) {
        cout << "Error: no se puede dividir entre cero." << endl;
    } else {
        cout << "El residuo es: " << A % B << endl;
    }

    return 0;
}
