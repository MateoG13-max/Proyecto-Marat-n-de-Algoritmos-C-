/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float temp;

    do {
        cout << "Ingrese su temperatura corporal (°C): ";
        cin >> temp;
    } while (temp < 30.0 || temp > 45.0);

    if (temp < 36.0) {
        cout << "Hipotermia" << endl;
    } else if (temp <= 37.5) {
        cout << "Temperatura normal" << endl;
    } else {
        cout << "Fiebre" << endl;
    }

    return 0;
}


