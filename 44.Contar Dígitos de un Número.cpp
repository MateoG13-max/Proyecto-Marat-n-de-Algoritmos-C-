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
    cout << "Ingrese un número entero positivo: ";
    cin >> num;

    if (num == 0) {
        cout << "El número tiene 1 dígito." << endl;
    } else {
        int contador = 0;
        int aux = num;
        while (aux != 0) {
            aux /= 10;
            contador++;
        }
        cout << "El número " << num << " tiene " << contador << " dígitos." << endl;
    }

    return 0;
}

