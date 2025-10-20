#include <iostream>
using namespace std;

int main() {
    int num, original, invertido = 0, digito;

    cout << "Ingrese un número: ";
    cin >> num;

    original = num;

    while (num > 0) {
        digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }

    if (original == invertido)
        cout << "Es un número palíndromo." << endl;
    else
        cout << "No es un número palíndromo." << endl;

    return 0;
}
