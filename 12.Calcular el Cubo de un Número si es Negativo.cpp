/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num;

    cout << "Ingrese un número: ";
    cin >> num;

    if (num < 0) {
        cout << "Cubo: " << pow(num, 3) << endl;
    } else {
        cout << "No es negativo." << endl;
    }

    return 0;
}


