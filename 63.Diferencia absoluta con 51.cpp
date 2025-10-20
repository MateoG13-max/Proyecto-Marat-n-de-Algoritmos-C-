#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    int d = abs(n - 51);
    int resultado;
    if (n > 51) {
        resultado = 3 * d;
    } else {
        resultado = d;
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}
