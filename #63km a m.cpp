#include <iostream>
using namespace std;

double km_m(double x) { return x * 1000; }
double m_km(double x) { return x / 1000; }

int main() {
    double (*convertir[2])(double) = {km_m, m_km};
    int op;
    double valor;
    cout << "1) km→m\n2) m→km\nOpción: ";
    cin >> op;
    cout << "Valor: "; cin >> valor;
    cout << "Resultado: " << convertir[op-1](valor) << endl;
}
