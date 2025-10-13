#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char* palabras[] = {"perro", "gato", "sol", "luna"};
    char entrada[20];
    int aciertos = 0;
    for (int i = 0; i < 4; i++) {
        cout << "Escribe: " << palabras[i] << " → ";
        cin >> entrada;
        if (strcmp(palabras[i], entrada) == 0) aciertos++;
    }
    cout << "Aciertos: " << aciertos << "/4\n";
}
