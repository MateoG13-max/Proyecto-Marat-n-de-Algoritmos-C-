#include <iostream>
using namespace std;

/*
  Suma de dos matrices dinámicas NxM.
  El usuario ingresa los valores y se muestra la matriz resultante.
*/

int main() {
    int n, m;
    cout << "Filas: "; cin >> n;
    cout << "Columnas: "; cin >> m;

    // crear matrices dinámicas
    int** A = new int*[n];
    int** B = new int*[n];
    int** C = new int*[n];
    for (int i = 0; i < n; ++i) {
        A[i] = new int[m];
        B[i] = new int[m];
        C[i] = new int[m];
    }

    cout << "Ingrese valores para la matriz A:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> A[i][j];

    cout << "Ingrese valores para la matriz B:\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> B[i][j];

    // sumar matrices
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            C[i][j] = A[i][j] + B[i][j];

    cout << "Resultado (A+B):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            cout << C[i][j] << "\t";
        cout << "\n";
    }

    for (int i = 0; i < n; ++i) { delete[] A[i]; delete[] B[i]; delete[] C[i]; }
    delete[] A; delete[] B; delete[] C;
    return 0;
}
