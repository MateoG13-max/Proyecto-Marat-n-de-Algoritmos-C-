#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned)time(nullptr));
    int n; cout << "Cuántos números? "; cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) arr[i] = rand() % 100;

    // mostrar original
    cout << "Original: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << ' ';
    cout << '\n';

    // burbuja usando aritmética de punteros
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            int* p = arr + j;
            if (*p > *(p + 1)) {
                int tmp = *p;
                *p = *(p + 1);
                *(p + 1) = tmp;
            }
        }
    }

    cout << "Ordenado: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << ' ';
    cout << '\n';

    delete[] arr;
    return 0;
}

