#include <iostream>
using namespace std;

void normalize(double* arr, int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) sum += arr[i];
    if (sum == 0) return;
    for (int i = 0; i < n; ++i) arr[i] /= sum; // modificación in-place
}

int main() {
    int n; cout << "¿Cuántos valores? "; cin >> n;
    double* arr = new double[n];
    for (int i = 0; i < n; ++i) { cout << "Valor " << i << ": "; cin >> arr[i]; }

    normalize(arr, n);

    cout << "Valores normalizados: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << (i+1==n?'\n':' ');
    delete[] arr;
    return 0;
}


