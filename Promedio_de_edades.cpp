#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de personas: ";
    cin >> n;

    int* edades = new int[n];
    int suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Edad #" << i+1 << ": ";
        cin >> edades[i];
        suma += edades[i];
    }

    cout << "Promedio: " << (double)suma / n << endl;
    delete[] edades;
}
