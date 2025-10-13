#include <iostream>
using namespace std;

struct Cuenta {
    string nombre;
    double saldo;
};

int main() {
    Cuenta* cliente = new Cuenta{"Mateo", 100.0};
    int op;
    do {
        cout << "\n1. Depositar\n2. Retirar\n3. Ver saldo\n4. Salir\nOpción: ";
        cin >> op;
        if (op == 1) { double d; cout << "Monto: "; cin >> d; cliente->saldo += d; }
        else if (op == 2) { double r; cout << "Monto: "; cin >> r; cliente->saldo -= r; }
        else if (op == 3) cout << "💳 Saldo: $" << cliente->saldo << endl;
    } while (op != 4);

    delete cliente;
}
