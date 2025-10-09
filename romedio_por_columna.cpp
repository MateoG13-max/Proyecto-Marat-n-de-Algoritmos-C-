#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Filas (m): "; cin >> m;
    cout << "Columnas (n): "; cin >> n;
    if (m <= 0 || n <= 0) return 0;

    // reservar un bloque contiguo
    double* block = new double[m * n];

    // leer valores
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j) {
            cout << "Temp[" << i << "][" << j << "]: ";
            cin >> block[i * n + j];
        }

    // calcular promedio por columna
    for (int j = 0; j < n; ++j) {
        double sum = 0;
        for (int i = 0; i < m; ++i) sum += block[i * n + j];
        cout << "Promedio columna " << j << " = " << (sum / m) << "\n";
    }

    delete[] block;
    return 0;
}

