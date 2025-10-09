#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int* secreto = new int(rand() % 5 + 1);
    int intento;

    cout << "Memoriza un número entre 1 y 5...\n";
    cout << "¿Cuál crees que es? ";
    cin >> intento;

    cout << ((*secreto == intento) ? "😎 Correcto!" : "❌ Incorrecto!") << endl;
    delete secreto;
}
