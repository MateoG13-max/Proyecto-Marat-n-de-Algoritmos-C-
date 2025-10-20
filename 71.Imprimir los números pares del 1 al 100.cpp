/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    cout << "Números pares del 1 al 100:" << endl;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}
