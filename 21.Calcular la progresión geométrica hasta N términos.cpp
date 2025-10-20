/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    long long g1;
    long long r;
    int N;
    cout << "Ingrese el primer término (g1): ";
    cin >> g1;
    cout << "Ingrese la razón (r): ";
    cin >> r;
    cout << "Ingrese la cantidad de términos (N): ";
    cin >> N;

    long long termino = g1;
    for (int i = 1; i <= N; i++) {
        cout << termino << " ";
        termino *= r;
    }
    cout << endl;

    return 0;
}
