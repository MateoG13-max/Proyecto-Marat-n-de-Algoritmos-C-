#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int* secreto = new int(rand() % 10 + 1); // número entre 1-10
    int intento;

    cout << "🎯 Adivina el número (1-10):\n";
    do {
        cout << "Tu intento: ";
        cin >> intento;
        if (intento < *secreto) cout << "Muy bajo!\n";
        else if (intento > *secreto) cout << "Muy alto!\n";
        else cout << "🎉 ¡Correcto!\n";
    } while (intento != *secreto);

    delete secreto;
    return 0;
}
