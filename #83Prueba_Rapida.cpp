#include <iostream>
using namespace std;

int main() {
    string *respuestas = new string[3];
    string *correctas = new string[3]{"a","b","a"};
    string preguntas[3] = {
        "1. ¿2+2=? (a)4 (b)5",
        "2. Capital de Francia (a)Londres (b)Paris",
        "3. El sol es una (a)estrella (b)planeta"
    };
    int puntos = 0;

    for (int i = 0; i < 3; i++) {
        cout << preguntas[i] << endl;
        cout << "Respuesta: ";
        cin >> respuestas[i];
        if (respuestas[i] == correctas[i]) puntos++;
    }
    cout << "Puntaje final: " << puntos << "/3\n";
    delete[] respuestas;
    delete[] correctas;
}



