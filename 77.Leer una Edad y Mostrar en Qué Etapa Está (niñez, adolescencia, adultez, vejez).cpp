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
    cout << "Ingrese la edad: ";
    cin >> edad;

    if (edad >= 0 && edad <= 12) {
        cout << "Niñez." << endl;
    } else if (edad <= 17) {
        cout << "Adolescencia." << endl;
    } else if (edad <= 64) {
        cout << "Adultez." << endl;
    } else {
        cout << "Vejez." << endl;
    }

    return 0;
}


