#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Número de empleados: ";
    cin >> n;

    double *salarios = new double[n];
    double total = 0;

    for (int i = 0; i < n; i++) {
        cout << "Salario del empleado #" << i+1 << ": ";
        cin >> salarios[i];
        total += salarios[i];
    }

    cout << "\nPromedio salarial: $" << total / n << endl;
    delete[] salarios;
}


