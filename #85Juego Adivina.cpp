#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int* secreto = new int(rand() % 100 + 1);
    int intento;

    cout << "Adivina el número secreto (1-100):\n";
    do {
        cout << "> ";
        cin >> intento;
        if (intento < *secreto) cout << "Demasiado bajo!\n";
        else if (intento > *secreto) cout << "Demasiado alto!\n";
    } while (intento != *secreto);

    cout << "🎉 ¡Correcto! El número era " << *secreto << endl;
    delete secreto;
}





