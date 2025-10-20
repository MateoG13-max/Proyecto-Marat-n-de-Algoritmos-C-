/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de números (mínimo 2): ";
    cin >> N;
    if (N < 2) {
        cout << "Debe ingresar al menos 2 números." << endl;
        return 0;
    }

    int mayor = numeric_limits<int>::min();
    int segundo = numeric_limits<int>::min();
    int num;

    for (int i = 0; i < N; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> num;

        if (num > mayor) {
            segundo = mayor;
            mayor = num;
        } else if (num > segundo && num < mayor) {
            segundo = num;
        }
    }

    if (segundo == numeric_limits<int>::min()) {
        cout << "No hay segundo mayor distinto." << endl;
    } else {
        cout << "El segundo mayor es: " << segundo << endl;
    }

    return 0;
}
