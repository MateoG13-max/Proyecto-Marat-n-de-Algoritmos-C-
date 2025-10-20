/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int N, num;
    int positivos = 0, negativos = 0, ceros = 0;

    cout << "Ingrese la cantidad de números: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> num;

        if (num > 0) positivos++;
        else if (num < 0) negativos++;
        else ceros++;
    }

    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros << endl;

    return 0;
}

