/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secreto = rand() % 100 + 1;
    int intento;

    cout << "Adivina el numero entre 1 y 100:" << endl;

    do {
        cout << "Ingresa tu intento: ";
        cin >> intento;

        if (intento < secreto) {
            cout << "El numero es mayor." << endl;
        } else if (intento > secreto) {
            cout << "El numero es menor." << endl;
        } else {
            cout << "¡Felicidades! Adivinaste el numero." << endl;
        }
    } while (intento != secreto);

    return 0;
}
