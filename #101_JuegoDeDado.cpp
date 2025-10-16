#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dado {
public:
    Dado() { srand((unsigned)time(nullptr)); }
    virtual int tirar() { return rand() % 6 + 1; } // 1..6
};

class Jugador {
public:
    string nombre;
    int puntaje = 0;
    Jugador(string n): nombre(n) {}
};

int main() {
    int n;
    cout << "¿Cuántos jugadores?: "; cin >> n;
    vector<Jugador> jugadores;
    for (int i=0;i<n;i++){ string s; cout<<"Nombre jugador "<<i+1<<": "; cin>>s; jugadores.emplace_back(s); }

    Dado dado;
    int rondas=3;
    for (int r=0;r<rondas;r++){
        cout<<"\\n--- Ronda "<<r+1<<" ---\\n";
        for (auto &j: jugadores){
            int v = dado.tirar();
            j.puntaje += v;
            cout<<j.nombre<<" obtuvo "<<v<<" (total "<<j.puntaje<<")\\n";
        }
    }
    int best = -1; string ganador;
    for (auto &j: jugadores) if (j.puntaje > best){ best = j.puntaje; ganador = j.nombre; }
    cout<<"\\nGanador: "<<ganador<<" con "<<best<<" puntos.\\n";
    return 0;
}