#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos gastos quieres registrar hoy?: ";
    cin >> n;

    float* gastos = new float[n];
    float total = 0;

    for (int i = 0; i < n; i++) {
        cout << "Gasto #" << i + 1 << " ($): ";
        cin >> *(gastos + i);
        total += *(gastos + i);
    }

    cout << "Total gastado: $" << total << endl;
    cout << "Promedio por gasto: $" << total / n << endl;

    delete[] gastos;
    return 0;
}




