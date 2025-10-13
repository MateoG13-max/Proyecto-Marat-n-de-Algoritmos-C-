#include <iostream>
using namespace std;

class Cuenta {
private:
    string titular;
    double saldo;
public:
    Cuenta(string t, double s) : titular(t), saldo(s) {}
    void depositar(double monto) { saldo += monto; }
    void mostrar() { cout << "Titular: " << titular << " | Saldo: $" << saldo << endl; }
};

int main() {
    Cuenta c1("Mateo", 500.0);
    c1.depositar(200.0);
    c1.mostrar();
    return 0;
}

