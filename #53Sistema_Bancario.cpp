#include <iostream>
using namespace std;

struct Cliente {
    string nombre;
    double* transacciones;
    int cantidad;
};

int main() {
    Cliente cliente;
    cliente.cantidad = 0;
    cliente.transacciones = nullptr;
    cout << "Nombre del cliente: ";
    getline(cin, cliente.nombre);

    char opcion;
    do {
        cout << "Ingresa monto (+depósito / -retiro): ";
        double monto;
        cin >> monto;

        // Crear nuevo array con una transacción más
        double* nuevo = new double[cliente.cantidad + 1];
        for (int i = 0; i < cliente.cantidad; i++)
            nuevo[i] = cliente.transacciones[i];
        nuevo[cliente.cantidad] = monto;

        delete[] cliente.transacciones;
        cliente.transacciones = nuevo;
        cliente.cantidad++;

        cout << "¿Deseas otra transacción? (s/n): ";
        cin >> opcion;
    } while (opcion == 's');

    double saldo = 0;
    for (int i = 0; i < cliente.cantidad; i++)
        saldo += cliente.transacciones[i];

    cout << "\nCliente: " << cliente.nombre << " | Saldo final: $" << saldo << endl;
    delete[] cliente.transacciones;
}
