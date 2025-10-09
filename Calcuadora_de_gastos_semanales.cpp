#include <iostream>
using namespace std;

int main() {
    double* gastos = new double[7];
    double total = 0;

    cout << "💰 Ingresa tus gastos diarios:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Día " << i + 1 << ": ";
        cin >> gastos[i];
        total += gastos[i];
    }

    cout << "Total semanal: $" << total << endl;
    cout << "Promedio diario: $" << total / 7 << endl;

    delete[] gastos;
}
