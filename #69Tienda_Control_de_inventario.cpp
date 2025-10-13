#include <iostream>
using namespace std;

class Producto {
private:
    string nombre;
    int cantidad;
public:
    Producto(string n, int c) : nombre(n), cantidad(c) {}
    void vender(int q) { cantidad -= q; }
    void mostrar() { cout << "Producto: " << nombre << " | Cantidad: " << cantidad << endl; }
};

int main() {
    Producto p("Laptop", 20);
    p.vender(5);
    p.mostrar();
    return 0;
}


