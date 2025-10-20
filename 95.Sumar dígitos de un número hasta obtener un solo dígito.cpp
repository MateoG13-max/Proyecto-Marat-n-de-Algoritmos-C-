#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    while (num >= 10) {
        int suma = 0;
        while (num > 0) {
            suma += num % 10;
            num /= 10;
        }
        num = suma;
    }

    cout << "Resultado: " << num << endl;
    return 0;
}
