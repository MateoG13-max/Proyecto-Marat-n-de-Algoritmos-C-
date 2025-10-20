/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Ingrese un número entero positivo: ";
    cin >> num;

    if (num < 0) num = -num;  // convertir a positivo si fuera negativo

    int sumaPares = 0;
    while (num > 0) {
        int dig = num % 10;
        if (dig % 2 == 0) {
            sumaPares += dig;
        }
        num /= 10;
    }

    cout << "La suma de dígitos pares es: " << sumaPares << endl;
    return 0;
}
