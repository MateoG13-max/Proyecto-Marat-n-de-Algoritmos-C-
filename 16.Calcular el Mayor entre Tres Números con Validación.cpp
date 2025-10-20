/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    do {
        cout << "Ingrese tres números (ninguno puede ser 0): ";
        cin >> a >> b >> c;
    } while (a == 0 || b == 0 || c == 0);

    int mayor = a;
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    cout << "El mayor es: " << mayor << endl;

    return 0;
}


