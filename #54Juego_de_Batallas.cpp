#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Jugador {
    string nombre;
    int vida;
    int ataque;
};

void atacar(Jugador* atacante, Jugador* defensor) {
    int dano = rand() % atacante->ataque + 1;
    defensor->vida -= dano;
    cout << atacante->nombre << " hace " << dano << " de daño!\n";
}

int main() {
    srand(time(0));
    Jugador* p1 = new Jugador{"Héroe", 100, 25};
    Jugador* p2 = new Jugador{"Enemigo", 100, 20};

    while (p1->vida > 0 && p2->vida > 0) {
        atacar(p1, p2);
        if (p2->vida <= 0) break;
        atacar(p2, p1);
    }

    cout << (p1->vida > 0 ? "🏆 ¡Ganó el Héroe!" : "💀 El enemigo venció...") << endl;
    delete p1; delete p2;
}
