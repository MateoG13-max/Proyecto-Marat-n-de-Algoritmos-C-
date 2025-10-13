#include <iostream>
using namespace std;

class Partido {
public:
    int goles1, goles2;
    Partido() : goles1(0), goles2(0) {}
    void anotar(int eq) { if(eq == 1) goles1++; else goles2++; }
    void mostrar() { cout << "Equipo 1: " << goles1 << " - " << goles2 << " Equipo 2\n"; }
};

int main() {
    Partido *p = new Partido();
    int opcion;
    do {
        cout << "\n1. Gol equipo 1\n2. Gol equipo 2\n3. Mostrar marcador\n4. Salir\nOpción: ";
        cin >> opcion;
        if (opcion == 1) p->anotar(1);
        else if (opcion == 2) p->anotar(2);
        else if (opcion == 3) p->mostrar();
    } while (opcion != 4);
    delete p;
}



