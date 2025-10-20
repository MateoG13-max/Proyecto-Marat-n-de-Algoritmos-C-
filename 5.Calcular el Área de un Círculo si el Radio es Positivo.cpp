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
    double radio;

    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    if (radio > 0) {
        double area = M_PI * pow(radio, 2);
        cout << "El área es: " << area << endl;
    } else {
        cout << "El radio debe ser positivo." << endl;
    }

    return 0;
}


