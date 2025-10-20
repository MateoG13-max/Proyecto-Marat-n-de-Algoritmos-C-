#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    cout << "El MCD es: " << a << endl;
    return 0;
}
