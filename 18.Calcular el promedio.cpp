/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, promedio;
    cout << "Ingrese tres notas: ";
    cin >> nota1 >> nota2 >> nota3;

    promedio = (nota1 + nota2 + nota3) / 3;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
