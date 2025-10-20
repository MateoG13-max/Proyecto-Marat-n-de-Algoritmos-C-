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

    cout << "Ingrese un número: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "La mitad del número es: " << num / 2 << endl;
    } else {
        cout << "El número no es par." << endl;
    }

    return 0;
}

