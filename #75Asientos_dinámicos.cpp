#include <iostream>
using namespace std;

int main() {
    int asientos;
    cout << "Ingrese cantidad de asientos del bus: ";
    cin >> asientos;

    bool *ocupados = new bool[asientos]{false};
    int elegir;
    cout << "Elija un asiento (1-" << asientos << "): ";
    cin >> elegir;
    ocupados[elegir - 1] = true;

    cout << "\nMapa de asientos:\n";
    for (int i = 0; i < asientos; i++)
        cout << "Asiento " << i + 1 << ": " << (ocupados[i] ? "Ocupado" : "Libre") << endl;

    delete[] ocupados;
}

