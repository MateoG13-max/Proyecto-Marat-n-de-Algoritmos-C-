#include <iostream>
using namespace std;

int main() {
    int num, digito;
    int sumaPares = 0, sumaImpares = 0;

    cout << "Ingrese un número entero positivo: ";
    cin >> num;

    while (num > 0) {
        digito = num % 10;
        if (digito % 2 == 0)
            sumaPares += digito;
        else
            sumaImpares += digito;
        num /= 10;
    }

    cout << "Suma de dígitos pares: " << sumaPares << endl;
    cout << "Suma de dígitos impares: " << sumaImpares << endl;

    return 0;
}
