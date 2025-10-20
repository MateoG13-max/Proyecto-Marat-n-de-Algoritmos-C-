#include <iostream>
using namespace std;

int sumaDivisores(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            suma += i;
    return suma;
}

int main() {
    int a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;

    if (sumaDivisores(a) == b && sumaDivisores(b) == a) {
        cout << a << " y " << b << " son números amigos." << endl;
    } else {
        cout << a << " y " << b << " no son números amigos." << endl;
    }

    return 0;
}
