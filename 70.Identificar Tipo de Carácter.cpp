/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char c;

    cout << "Ingrese un carácter: ";
    cin >> c;

    if (isalpha(c)) {
        cout << "Es una letra." << endl;
    } else if (isdigit(c)) {
        cout << "Es un dígito." << endl;
    } else {
        cout << "Es un símbolo." << endl
