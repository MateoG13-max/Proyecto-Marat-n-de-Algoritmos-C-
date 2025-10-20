#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Ingrese cantidad de elementos: ";
    cin >> N;
    if (N <= 0) {
        cout << "Cantidad inválida." << endl;
        return 0;
    }

    vector<double> arr(N);
    double suma = 0;
    for (int i = 0; i < N; i++) {
        cout << "Ingrese valor " << i+1 << ": ";
        cin >> arr[i];
        suma += arr[i];
    }

    double promedio = suma / N;
    int contador = 0;
    for (double v : arr) {
        if (v > promedio) contador++;
    }

    cout << "Promedio = " << promedio << endl;
    cout << "Cantidad de elementos mayores que el promedio: " << contador << endl;

    return 0;
}
