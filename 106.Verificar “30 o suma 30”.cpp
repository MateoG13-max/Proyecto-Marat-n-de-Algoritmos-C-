#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;

    if (a == 30 || b == 30 || (a + b == 30)) {
        cout << "Cumple la condición." << endl;
    } else {
        cout << "No cumple." << endl;
    }

    return 0;
}
