#include <iostream>
using namespace std;

int main() {
    int* numeros = nullptr;
    int n = 0, valor;
    char seguir;

    do {
        cout << "Ingresa un número: ";
        cin >> valor;
        int* nuevo = new int[n + 1]; // nuevo array +1
        for (int i = 0; i < n; i++) nuevo[i] = numeros[i];
        nuevo[n] = valor;

        delete[] numeros; // liberar anterior
        numeros = nuevo;
        n++;

        cout << "¿Deseas continuar? (s/n): ";
        cin >> seguir;
    } while (seguir == 's');

    int suma = 0;
    for (int i = 0; i < n; i++) suma += numeros[i];
    cout << "Suma total = " << suma << endl;

    delete[] numeros;
}
