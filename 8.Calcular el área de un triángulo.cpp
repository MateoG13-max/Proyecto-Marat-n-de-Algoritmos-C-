/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float base, altura, area;
    cout << "Ingrese la base del triángulo: ";
    cin >> base;
    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;

    area = (base * altura) / 2;
    cout << "El área del triángulo es: " << area << endl;

    return 0;
}
