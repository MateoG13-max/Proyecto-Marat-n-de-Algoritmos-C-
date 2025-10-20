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

    // Validar edad entre 0 y 120
    do {
        cout << "Ingrese su edad (0 a 120): ";
        cin >> edad;
    } while (edad < 0 || edad > 120);

    if (edad < 18) {
        cout << "Nivel de riesgo: Bajo" << endl;
    } else if (edad <= 60) {
        cout << "Nivel de riesgo: Medio" << endl;
    } else {
        cout << "Nivel de riesgo: Alto" << endl;
    }

    return 0;
}
