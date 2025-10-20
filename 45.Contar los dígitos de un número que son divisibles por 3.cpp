#include <iostream>
using namespace std;

int main() {
    long long num;
    cout << "Ingrese un número entero positivo: ";
    cin >> num;

    if (num < 0) num = -num;
    int contador = 0;
    while (num > 0) {
        int dig = num % 10;
        if (dig % 3 == 0) {
            contador++;
        }
        num /= 10;
    }

    cout << "Cantidad de dígitos divisibles por 3: " << contador << endl;
    return 0;
}
