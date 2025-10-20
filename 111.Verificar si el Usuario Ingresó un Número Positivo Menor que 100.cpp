/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Ingrese un número positivo menor que 100: ";
    cin >> num;

    if (num > 0 && num < 100) {
        cout << "Número válido." << endl;
    } else {
        cout << "Número inválido." << endl;
    }

    return 0;
}


