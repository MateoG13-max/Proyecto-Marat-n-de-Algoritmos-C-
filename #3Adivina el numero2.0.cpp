#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand((unsigned)time(nullptr));
    int* secreto = new int(rand() % 100 + 1);

    int intento, intentos = 0;
    do {
        cout << "Adivina el número (1-100): ";
        cin >> intento;
        intentos++;
        if (intento < *secreto) cout << "Muy bajo\n";
        else if (intento > *secreto) cout << "Muy alto\n";
        else cout << "¡Correcto! Lo lograste en " << intentos << " intentos\n";
    } while (intento != *secreto);

    delete secreto;
    return 0;
}

