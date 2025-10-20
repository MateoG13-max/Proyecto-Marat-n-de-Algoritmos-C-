/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float peso, altura, imc;

    do {
        cout << "Ingrese su peso (kg): ";
        cin >> peso;
    } while (peso <= 0);

    do {
        cout << "Ingrese su altura (m): ";
        cin >> altura;
    } while (altura <= 0);

    imc = peso / (altura * altura);

    cout << "IMC: " << imc << endl;

    if (imc < 18.5) {
        cout << "Bajo peso" << endl;
    } else if (imc < 25) {
        cout << "Peso normal" << endl;
    } else if (imc < 30) {
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Obesidad" << endl;
    }

    return 0;
}


