#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int lanzar() { return rand() % 6 + 1; }

int main() {
    srand(time(0));
    int (*dado)() = lanzar;

    cout << " Lanzando el dado 3 veces:\n";
    for (int i = 0; i < 3; i++) cout << "Resultado: " << dado() << endl;
    return 0;
}
