#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int* vidaJugador = new int(100);
    int* vidaEnemigo = new int(100);

    cout << "¡Comienza la batalla!\n";
    while (*vidaJugador > 0 && *vidaEnemigo > 0) {
        int golpe = rand() % 25;
        *vidaEnemigo -= golpe;
        cout << "Golpeas al enemigo: -" << golpe << " HP (" << *vidaEnemigo << " restantes)\n";

        if (*vidaEnemigo <= 0) break;

        golpe = rand() % 20;
        *vidaJugador -= golpe;
        cout << "El enemigo te golpea: -" << golpe << " HP (" << *vidaJugador << " restantes)\n";
    }

    if (*vidaJugador > 0) cout << "🏆 ¡Ganaste la batalla!\n";
    else cout << "💀 Has sido derrotado.\n";

    delete vidaJugador;
    delete vidaEnemigo;
}


