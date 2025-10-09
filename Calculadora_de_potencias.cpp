#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base;
    int exp;
    cout << "Base: "; cin >> base;
    cout << "Exponente: "; cin >> exp;

    double* resultado = new double(pow(base, exp));
    cout << base << "^" << exp << " = " << *resultado << endl;

    delete resultado;
}
