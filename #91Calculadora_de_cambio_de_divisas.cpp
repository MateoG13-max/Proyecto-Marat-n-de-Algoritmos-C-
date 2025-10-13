#include <iostream>
using namespace std;

int main() {
    double* monto = new double;
    double tasa = 0.93; // Euro a dólar
    cout << "Ingresa monto en EUR: ";
    cin >> *monto;
    cout << "Equivalente en USD: " << *monto * tasa << endl;
    delete monto;
}





