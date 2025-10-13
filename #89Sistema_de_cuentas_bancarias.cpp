#include <iostream>
using namespace std;

struct Cuenta {
    string nombre;
    double saldo;
};

int main() {
    int n;
    cout << "¿Cuántas cuentas deseas crear?: ";
    cin >> n;

    Cuenta* cuentas = new Cuenta[n];
    for (int i = 0; i < n; i++) {
        cout << "Titular: ";
        cin >> cuentas[i].nombre;
        cout << "Saldo inicial: ";
        cin >> cuentas[i].saldo;
    }

    int id;
    double monto;
    cout << "Selecciona una cuenta (0-" << n - 1 << "): ";
    cin >> id;
    cout << "Monto a depositar: ";
    cin >> monto;

    cuentas[id].saldo += monto;
    cout << "Nuevo saldo: " << cuentas[id].saldo << endl;

    delete[] cuentas;
}





