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
    double num;
    cout << "Ingrese un número: ";
    cin >> num;

    cout << "Cuadrado: " << pow(num, 2) << endl;
    cout << "Cubo: " << pow(num, 3) << endl;

    return 0;
}

