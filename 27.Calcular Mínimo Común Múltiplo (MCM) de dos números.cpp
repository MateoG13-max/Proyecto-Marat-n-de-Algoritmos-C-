/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

long long mcd(long long x, long long y) {
    while (y != 0) {
        long long r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main() {
    long long a, b;
    cout << "Ingrese dos números positivos: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Valores inválidos." << endl;
    } else {
        long long gcd = mcd(a, b);
        long long mcm = (a / gcd) * b;  // evitar desbordes
        cout << "El MCM de " << a << " y " << b << " es " << mcm << endl;
    }

    return 0;
}
