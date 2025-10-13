#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exp;
    cout << "Base: ";
    cin >> base;
    cout << "Exponente: ";
    cin >> exp;

    double *resultado = new double(pow(base, exp));
    cout << "Resultado: " << *resultado << endl;
    delete resultado;
}


