#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántas notas vas a ingresar? ";
    cin >> n;

    double* notas = new double[n];
    double suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Nota #" << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    cout << "Promedio = " << suma / n << endl;

    delete[] notas;
    return 0;
}

