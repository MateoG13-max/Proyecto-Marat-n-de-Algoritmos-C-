#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Número de estudiantes: ";
    cin >> n;
    double** notas = new double*[n];
    int m;

    for (int i = 0; i < n; i++) {
        cout << "Notas del estudiante #" << i+1 << ": ";
        cin >> m;
        notas[i] = new double[m];
        double suma = 0;
        for (int j = 0; j < m; j++) {
            cout << "Nota " << j+1 << ": ";
            cin >> notas[i][j];
            suma += notas[i][j];
        }
        cout << "Promedio: " << suma / m << "\n";
    }

    for (int i = 0; i < n; i++) delete[] notas[i];
    delete[] notas;
}
