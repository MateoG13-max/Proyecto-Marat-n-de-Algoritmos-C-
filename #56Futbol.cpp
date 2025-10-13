#include <iostream>
using namespace std;

struct Equipo {
    string nombre;
    int puntos;
};

int main() {
    int n;
    cout << "Número de equipos: ";
    cin >> n;
    cin.ignore();
    Equipo* equipos = new Equipo[n];

    for (int i = 0; i < n; i++) {
        cout << "Nombre del equipo " << i+1 << ": ";
        getline(cin, equipos[i].nombre);
        equipos[i].puntos = 0;
    }

    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++) {
            int g1, g2;
            cout << equipos[i].nombre << " vs " << equipos[j].nombre << " (goles): ";
            cin >> g1 >> g2;
            if (g1 > g2) equipos[i].puntos += 3;
            else if (g2 > g1) equipos[j].puntos += 3;
            else { equipos[i].puntos++; equipos[j].puntos++; }
        }

    cout << "\n🏆 Resultados finales:\n";
    for (int i = 0; i < n; i++)
        cout << equipos[i].nombre << ": " << equipos[i].puntos << " pts\n";

    delete[] equipos;
}
