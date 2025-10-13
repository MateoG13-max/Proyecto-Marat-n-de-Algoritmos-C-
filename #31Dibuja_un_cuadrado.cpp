#include <iostream>
using namespace std;

int main() {
    int* lado = new int;
    cout << "Tamaño del cuadrado: ";
    cin >> *lado;

    for (int i = 0; i < *lado; i++) {
        for (int j = 0; j < *lado; j++) cout << "* ";
        cout << endl;
    }

    delete lado;
}
