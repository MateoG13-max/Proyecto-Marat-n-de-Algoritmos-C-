#include <iostream>
using namespace std;

class Habitacion {
public:
    int numero;
    bool ocupada;
    Habitacion(int n): numero(n), ocupada(false) {}
};

int main() {
    int n;
    cout << "Número de habitaciones: ";
    cin >> n;
    Habitacion **hotel = new Habitacion*[n];
    for (int i = 0; i < n; i++)
        hotel[i] = new Habitacion(i + 1);

    int r;
    cout << "Ingrese número de habitación a reservar: ";
    cin >> r;
    hotel[r-1]->ocupada = true;

    cout << "\nEstado del hotel:\n";
    for (int i = 0; i < n; i++)
        cout << "Habitación " << hotel[i]->numero << ": " << (hotel[i]->ocupada ? "Ocupada" : "Libre") << endl;

    for (int i = 0; i < n; i++) delete hotel[i];
    delete[] hotel;
}
