#include <iostream>
using namespace std;

struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

int main() {
    int n = 0;
    Producto* inventario = nullptr;
    char op;

    do {
        Producto nuevo;
        cout << "Nombre: "; cin >> nuevo.nombre;
        cout << "Precio: "; cin >> nuevo.precio;
        cout << "Cantidad: "; cin >> nuevo.cantidad;

        Producto* temp = new Producto[n+1];
        for (int i = 0; i < n; i++) temp[i] = inventario[i];
        temp[n] = nuevo;
        delete[] inventario;
        inventario = temp;
        n++;

        cout << "¿Agregar otro producto? (s/n): ";
        cin >> op;
    } while (op == 's');

    cout << "\nInventario:\n";
    for (int i = 0; i < n; i++)
        cout << inventario[i].nombre << " - $" << inventario[i].precio << " (" << inventario[i].cantidad << " unidades)\n";

    delete[] inventario;
}
