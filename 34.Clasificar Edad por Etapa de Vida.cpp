/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad < 13) {
        cout << "Niño" << endl;
    } else if (edad < 18) {
        cout << "Adolescente" << endl;
    } else if (edad < 60) {
        cout << "Adulto" << endl;
    } else {
        cout << "Adulto mayor" << endl;
    }

    return 0;
}
