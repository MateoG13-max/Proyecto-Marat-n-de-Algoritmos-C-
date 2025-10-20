/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int N, contador = 0;
    cout << "Ingrese un número entero positivo: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 3 == 0) contador++;
    }

    cout << "Hay " << contador << " múltiplos de 3 entre 1 y " << N << endl;
    return 0;
}

