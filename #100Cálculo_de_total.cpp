#include <iostream>
using namespace std;

class Factura {
private:
    double subtotal;
public:
    Factura(double s) : subtotal(s) {}
    double total() { return subtotal * 1.12; } // IVA 12%
    void mostrar() { cout << "Total con IVA: $" << total() << endl; }
};

int main() {
    Factura f(100);
    f.mostrar();
    return 0;
}


