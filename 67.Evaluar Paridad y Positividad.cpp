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
    cout << "Ingrese un número entero: ";
    cin >> num;

    if (num == 0) {
        cout << "Cero." << endl;
    } else {
        if (num > 0) {
            cout << "Positivo y ";
        } else {
            cout << "Negativo y ";
        }

        if (num % 2 == 0) {
            cout << "par." << endl;
        } else {
            cout << "impar." << endl;
        }
    }

    return 0;
}


