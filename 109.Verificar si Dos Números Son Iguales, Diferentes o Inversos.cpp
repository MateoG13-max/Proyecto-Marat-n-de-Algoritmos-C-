/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int invertir(int num) {
    int inverso = 0;
    while (num > 0) {
        inverso = inverso * 10 + num % 10;
        num /= 10;
    }
    return inverso;
}

int main() {
    int a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;

    if (a == b) {
        cout << "Son iguales." << endl;
    } else if (invertir(a) == b || invertir(b) == a) {
        cout << "Son inversos." << endl;
    } else {
        cout << "Son diferentes." << endl;
    }

    return 0;
}


