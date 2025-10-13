#include <iostream>
using namespace std;

double calcularPromedio(double* arr, int n) {
    double suma = 0;
    for (int i = 0; i < n; i++) suma += arr[i];
    return suma / n;
}

int main() {
    int n;
    cout << "Cuántos números: ";
    cin >> n;
    double* arr = new double[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Promedio = " << calcularPromedio(arr,n) << endl;
    delete[] arr;
}
