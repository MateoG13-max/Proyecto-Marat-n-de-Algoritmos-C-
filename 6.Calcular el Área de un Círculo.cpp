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
    double radio, area;
    do {
        cout << "Ingrese el radio del círculo (positivo): ";
        cin >> radio;
    } while (radio <= 0);

    area = M_PI * pow(radio, 2);
    cout << "El área del círculo es: " << area << endl;

    return 0;
}


