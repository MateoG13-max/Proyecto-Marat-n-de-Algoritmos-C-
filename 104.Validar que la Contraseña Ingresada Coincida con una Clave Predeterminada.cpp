/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string claveCorrecta = "1234";
    string ingreso;

    cout << "Ingrese la contraseña: ";
    cin >> ingreso;

    if (ingreso == claveCorrecta) {
        cout << "Acceso concedido." << endl;
    } else {
        cout << "Contraseña incorrecta." << endl;
    }

    return 0;
}


