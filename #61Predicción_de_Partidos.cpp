#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Número de partidos previos: ";
    cin >> n;
    double* resultados = new double[n];
    int victorias = 0;

    for (int i = 0; i < n; i++) {
        cout << "¿Ganó el equipo? (1 sí / 0 no): ";
        cin >> resultados[i];
        if (resultados[i] == 1) victorias++;
    }

    cout << "Probabilidad estimada de ganar: " << (victorias * 100.0 / n) << "%\n";
    delete[] resultados;
}

