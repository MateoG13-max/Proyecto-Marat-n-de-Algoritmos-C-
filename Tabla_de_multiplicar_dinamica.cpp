#include <iostream>
using namespace std;

int main() {
    int* n = new int;
    cout << "Número para tabla: ";
    cin >> *n;

    for (int i = 1; i <= 10; i++)
        cout << *n << " x " << i << " = " << (*n * i) << endl;

    delete n;
}
