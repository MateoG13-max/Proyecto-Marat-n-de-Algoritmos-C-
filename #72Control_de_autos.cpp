#include <iostream>
using namespace std;

struct Auto {
    string placa;
    bool reparado;
};

int main() {
    int n;
    cout << "¿Cuántos autos ingresaron al taller?: ";
    cin >> n;

    Auto *autos = new Auto[n];
    for (int i = 0; i < n; i++) {
        cout << "Placa del auto #" << i + 1 << ": ";
        cin >> autos[i].placa;
        autos[i].reparado = false;
    }

    int index;
    cout << "Ingrese el número del auto reparado (1-" << n << "): ";
    cin >> index;
    autos[index - 1].reparado = true;

    cout << "\nEstado de autos:\n";
    for (int i = 0; i < n; i++)
        cout << autos[i].placa << " -> " << (autos[i].reparado ? "Listo" : "Pendiente") << endl;

    delete[] autos;
}

