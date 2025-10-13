#include <iostream>
using namespace std;

class Vuelo {
public:
    string destino;
    int asientos;
    int reservados;
    Vuelo(string d, int a): destino(d), asientos(a), reservados(0) {}
    void reservar() { if(reservados < asientos) reservados++; }
};

int main() {
    string destino; int a;
    cout << "Destino del vuelo: "; cin >> destino;
    cout << "Número de asientos: "; cin >> a;

    Vuelo *v = new Vuelo(destino, a);
    int r;
    cout << "¿Cuántas reservas desea hacer?: ";
    cin >> r;
    for (int i = 0; i < r; i++) v->reservar();

    cout << "Asientos ocupados: " << v->reservados << " / " << v->asientos << endl;
    delete v;
}
