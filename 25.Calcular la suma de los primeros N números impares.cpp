/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int N, suma = 0, impar = 1;
    cout << "Ingrese la cantidad de números impares a sumar: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        suma += impar;
        impar += 2;
    }

    cout << "La suma de los primeros " << N << " impares es: " << suma << endl;
    return 0;
}

