#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño de matriz NxN: ";
    cin >> n;

    int** A = new int*[n];
    int** B = new int*[n];
    int** C = new int*[n];
    for (int i = 0; i < n; i++) {
        A[i] = new int[n];
        B[i] = new int[n];
        C[i] = new int[n];
    }

    cout << "Valores para A y B:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "]: "; cin >> A[i][j];
            cout << "B[" << i << "][" << j << "]: "; cin >> B[i][j];
            C[i][j] = A[i][j] + B[i][j];
        }

    cout << "\nResultado de A+B:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << C[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < n; i++) { delete[] A[i]; delete[] B[i]; delete[] C[i]; }
    delete[] A; delete[] B; delete[] C;
}
