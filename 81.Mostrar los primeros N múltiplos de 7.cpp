/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de múltiplos de 7 a mostrar: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << 7 * i << " ";
    }
    cout << endl;

    return 0;
}
