/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingresa un número: ";
     cin >> numero;
    
    cout << "Tabla de multiplicar del " << numero << ":\n";
        
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
