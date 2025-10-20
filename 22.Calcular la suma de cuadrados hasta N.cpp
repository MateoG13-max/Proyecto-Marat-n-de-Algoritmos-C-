#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese un número entero positivo (N): ";
    cin >> N;

    if (N < 1) {
        cout << "Número inválido." << endl;
        return 0;
    }

    long long suma = 0;
    for (int i = 1; i <= N; i++) {
        suma += i * i;
    }

    cout << "La suma de los cuadrados hasta " << N << " es: " << suma << endl;
    return 0;
}
