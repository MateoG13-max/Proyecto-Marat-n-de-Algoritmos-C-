/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float nivel, capacidad, porcentaje;

    do {
        cout << "Ingrese la capacidad del tanque (litros): ";
        cin >> capacidad;
    } while (capacidad <= 0);

    do {
        cout << "Ingrese el nivel actual de agua (litros): ";
        cin >> nivel;
    } while (nivel < 0 || nivel > capacidad);

    porcentaje = (nivel / capacidad) * 100;

    cout << "Nivel actual: " << porcentaje << "%" << endl;

    if (porcentaje < 25) {
        cout << "Nivel bajo" << endl;
    } else if (porcentaje <= 75) {
        cout << "Nivel medio" << endl;
    } else {
        cout << "Nivel alto" << endl;
    }

    return 0;
}
