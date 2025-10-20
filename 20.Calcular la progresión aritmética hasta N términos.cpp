/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a1, d, N;
    cout << "Ingrese el primer término (a1): ";
    cin >> a1;
    cout << "Ingrese la diferencia (d): ";
    cin >> d;
    cout << "Ingrese el número de términos (N): ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        int termino = a1 + (i - 1) * d;
        cout << termino << " ";
    }
    cout << endl;

    return 0;
}
