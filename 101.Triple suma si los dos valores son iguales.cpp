#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;

    int resultado;
    if (a == b) {
        resultado = 3 * (a + b);
    } else {
        resultado = a + b;
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}
