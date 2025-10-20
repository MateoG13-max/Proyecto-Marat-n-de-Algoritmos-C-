#include <iostream>
using namespace std;

int main() {
    int num, i;
    bool esPrimo = true;

    cout << "Ingrese un número mayor que 1: ";
    cin >> num;

    if (num <= 1) {
        cout << "No válido para verificar si es primo." << endl;
        return 0;
    }

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo)
        cout << num << " es primo." << endl;
    else
        cout << num << " no es primo." << endl;

    return 0;
}
