/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Ingrese las coordenadas (x y): ";
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "Primer cuadrante" << endl;
    else if (x < 0 && y > 0)
        cout << "Segundo cuadrante" << endl;
    else if (x < 0 && y < 0)
        cout << "Tercer cuadrante" << endl;
    else if (x > 0 && y < 0)
        cout << "Cuarto cuadrante" << endl;
    else
        cout << "Está sobre un eje" << endl;

    return 0;
}

