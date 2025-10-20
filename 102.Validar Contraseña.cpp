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
    string contrasenaCorrecta = "admin123";
    string intento;
    int intentos = 0;

    while (intentos < 3) {
        cout << "Ingrese la contraseña: ";
        cin >> intento;

        if (intento == contrasenaCorrecta) {
            cout << "Acceso permitido." << endl;
            break;
        } else {
            cout << "Contraseña incorrecta." << endl;
        }

        intentos++;
    }

    if (intentos == 3) {
        cout << "Acceso denegado." << endl;
    }

    return 0;
}
