/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int inicio, fin, contador = 0;
    cout << "Ingrese el valor inicial: ";
    cin >> inicio;
    cout << "Ingrese el valor final: ";
    cin >> fin;

    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) contador++;
    }

    cout << "Cantidad de números pares: " << contador << endl;
    return 0;
}


