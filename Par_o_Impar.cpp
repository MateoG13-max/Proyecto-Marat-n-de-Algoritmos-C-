/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main() {
    int numero = 32;  // valor fijo para prueba
    cout << "Numero es: " << numero << "\n";
    if (numero % 2 == 0)
        cout << "El numero es par.";
    else
        cout << "El numero es impar.";
    return 0;
}
