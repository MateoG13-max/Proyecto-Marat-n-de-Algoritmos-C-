/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float nota;

    cout << "Ingrese su nota (0-10): ";
    cin >> nota;

    if (nota >= 9) {
        cout << "A" << endl;
    } else if (nota >= 8) {
        cout << "B" << endl;
    } else if (nota >= 7) {
        cout << "C" << endl;
    } else if (nota >= 6) {
        cout << "D" << endl;
    } else {
        cout << "F" << endl;
    }

    return 0;
}
