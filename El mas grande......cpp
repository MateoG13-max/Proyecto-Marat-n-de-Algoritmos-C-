#include <iostream>
using namespace std;

int mayor(int* arr, int n) {
    int max = *arr;
    for (int i = 1; i < n; ++i)
        if (*(arr+i) > max) max = *(arr+i);
    return max;
}

int menor(int* arr, int n) {
    int min = *arr;
    for (int i = 1; i < n; ++i)
        if (*(arr+i) < min) min = *(arr+i);
    return min;
}

int main() {
    int n; cout << "Cantidad: "; cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int (*f)(int*,int);
    cout << "1=Mayor 2=Menor: ";
    int op; cin >> op;
    f = (op == 1) ? mayor : menor;

    cout << "Resultado: " << f(arr, n) << "\n";
    delete[] arr;
    return 0;
}

