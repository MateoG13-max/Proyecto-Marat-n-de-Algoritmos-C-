#include <iostream>
#include <string>
using namespace std;

struct Cuenta {
    string nombre;
    double saldo;
};

int main() {
    int n;
    cout << "¿Cuántas cuentas abrirás? ";
    cin >> n;
    cin.ignore();

    Cuenta* cuentas = new Cuenta[n]; // array dinámico de cuentas

    // inicializar cuentas
    for (int i = 0; i < n; ++i) {
        cout << "Nombre para cuenta #" << i << ": ";
        getline(cin, cuentas[i].nombre);
        cuentas[i].saldo = 0.0;
    }

    int idx; int op;
    do {
        cout << "\nCuenta (índice) y operación 0=salir 1=depositar 2=retirar 3=saldo: ";
        cin >> idx >> op;
        if (op == 1) {
            double m; cin >> m; cuentas[idx].saldo += m;
        } else if (op == 2) {
            double m; cin >> m;
            if (m <= cuentas[idx].saldo) cuentas[idx].saldo -= m;
            else cout << "Fondos insuficientes\n";
        } else if (op == 3) {
            cout << "Saldo de " << cuentas[idx].nombre << ": $" << cuentas[idx].saldo << "\n";
        }
    } while (op != 0);

    delete[] cuentas; // liberar
    return 0;
}

