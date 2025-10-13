#include <iostream>
using namespace std;

class Producto {
public:
    string nombre;
    int cantidad;
    Producto(string n, int c) : nombre(n), cantidad(c) {}
};

int main() {
    int n;
    cout << "¿Cuántos productos registrará?: ";
    cin >> n;
    Producto **inventario = new Producto*[n];

    for (int i = 0; i < n; i++) {
        string nombre; int cant;
        cout << "Producto #" << i+1 << " nombre: ";
        cin >> nombre;
        cout << "Cantidad: ";
        cin >> cant;
        inventario[i] = new Producto(nombre, cant);
    }

    cout << "\nInventario total:\n";
    for (int i = 0; i < n; i++)
        cout << inventario[i]->nombre << ": " << inventario[i]->cantidad << endl;

    for (int i = 0; i < n; i++) delete inventario[i];
    delete[] inventario;
}



