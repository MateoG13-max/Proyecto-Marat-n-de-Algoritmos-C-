#include <iostream>
using namespace std;

int main() {
    int n; cout << "Cantidad: "; cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int* inicio = arr;
    int* fin = arr + n - 1;

    while (inicio < fin) {
        int temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        ++inicio; --fin;
    }

    cout << "Invertido: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << "\n";

    delete[] arr;
    return 0;
}
