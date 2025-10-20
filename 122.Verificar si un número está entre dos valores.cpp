#include <iostream>
using namespace std;

int main() {
    int n, minimo, maximo;
    cout << "Ingrese número a verificar: ";
    cin >> n;
    cout << "Ingrese mínimo del rango: ";
    cin >> minimo;
    cout << "Ingrese máximo del rango: ";
    cin >> maximo;

    if (n >= minimo && n <= maximo) {
        cout << n << " está dentro del rango [" << minimo << ", " << maximo << "]." << endl;
    } else {
        cout << n << " está fuera del rango." << endl;
    }

    return 0;
}
