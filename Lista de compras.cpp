#include <iostream>
#include <string>
using namespace std;

int main() {
    int capacidad = 2, n = 0;
    string* lista = new string[capacidad];
    string item;
    char seguir = 's';

    while (seguir == 's') {
        if (n == capacidad) {
            capacidad *= 2;
            string* tmp = new string[capacidad];
            for (int i = 0; i < n; ++i) tmp[i] = lista[i];
            delete[] lista;
            lista = tmp;
        }

        cout << "Agrega un producto: ";
        cin.ignore();
        getline(cin, item);
        lista[n++] = item;

        cout << "¿Agregar otro? (s/n): ";
        cin >> seguir;
    }

    cout << "Tu lista final:\n";
    for (int i = 0; i < n; ++i) cout << "- " << lista[i] << "\n";

    delete[] lista;
    return 0;
}
