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

    if (num % 2 == 0 && num % 7 == 0) {
        cout << "Es múltiplo de 2 y de 7." << endl;
    } else if (num % 2 == 0) {
        cout << "Es múltiplo de 2." << endl;
    } else if (num % 7 == 0) {
        cout << "Es múltiplo de 7." << endl;
    } else {
        cout << "No es múltiplo de 2 ni de 7." << endl;
    }

    return 0;
}


