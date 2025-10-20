/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;

    fahrenheit = celsius * 9 / 5 + 32;
    cout << "Temperatura en Fahrenheit: " << fahrenheit << endl;

    return 0;
}


