// Ejercicio 121 - Factorial recursivo (uso básico de recursión y validación)
#include <iostream>
using namespace std;

// Calcula factorial de n de forma recursiva (n >= 0)
long long factorial(long long n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    long long n;
    cout << "Factorial recursivo. Ingresa n (>=0): ";
    if (!(cin >> n) || n < 0) { cout << "Entrada inválida\n"; return 1; }
    cout << n << "! = " << factorial(n) << "\n";
    return 0;
}
