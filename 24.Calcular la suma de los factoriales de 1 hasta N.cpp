#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int N;
    cout << "Ingrese un número entero positivo (N): ";
    cin >> N;

    if (N < 1) {
        cout << "Número inválido." << endl;
        return 0;
    }

    unsigned long long suma = 0;
    for (int i = 1; i <= N; i++) {
        suma += factorial(i);
    }

    cout << "La suma de factoriales hasta " << N << " es: " << suma << endl;
    return 0;
}
