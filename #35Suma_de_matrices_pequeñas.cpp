#include <iostream>
using namespace std;

int main() {
    int filas = 2, cols = 2;
    int** A = new int*[filas];
    int** B = new int*[filas];
    int** C = new int*[filas];

    for (int i = 0; i < filas; i++) {
        A[i] = new int[cols];
        B[i] = new int[cols];
        C[i] = new int[cols];
    }

    cout << "Introduce valores de A y B:\n";
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i << "][" << j << "]: "; cin >> A[i][j];
            cout << "B[" << i << "][" << j << "]: "; cin >> B[i][j];
            C[i][j] = A[i][j] + B[i][j];
        }

    cout << "🧩 Suma:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) cout << C[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < filas; i++) {
        delete[] A[i]; delete[] B[i]; delete[] C[i];
    }
    delete[] A; delete[] B; delete[] C;
}
