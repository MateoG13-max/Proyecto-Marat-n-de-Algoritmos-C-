#include <iostream>
using namespace std;

int main() {
    string preguntas[3] = {"2+2=", "5*3=", "Raíz cuadrada de 9="};
    int respuestas[3] = {4, 15, 3};
    int aciertos = 0, r;

    for (int i = 0; i < 3; i++) {
        cout << preguntas[i];
        cin >> r;
        if (r == respuestas[i]) aciertos++;
    }

    cout << "Tu IQ aproximado: " << 80 + aciertos * 20 << endl;
}
