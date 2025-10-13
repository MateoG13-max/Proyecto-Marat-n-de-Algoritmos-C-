#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese número de estudiantes: ";
    cin >> n;

    double *notas = new double[n];
    double suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Nota del estudiante #" << i + 1 << ": ";
        cin >> *(notas + i);
        suma += *(notas + i);
    }

    cout << "Promedio general: " << suma / n << endl;
    delete[] notas;
}

