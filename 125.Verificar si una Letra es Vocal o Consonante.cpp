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
    cout << "Ingrese una letra: ";
    cin >> c;

    if (!isalpha(c)) {
        cout << "No es una letra." << endl;
    } else {
        char cmin = tolower(c);
        if (cmin == 'a' || cmin == 'e' || cmin == 'i' || cmin == 'o' || cmin == 'u') {
            cout << "Es vocal." << endl;
        } else {
            cout << "Es consonante." << endl;
        }
    }

    return 0;
}


