#include <iostream>
using namespace std;

int main() {
    int* score = new int(0);
    string resp;

    cout << "Pregunta 1: ¿Cuánto es 12 * 12?\n> ";
    cin >> resp;
    if (resp == "144") (*score)++;

    cout << "Pregunta 2: ¿Capital de Alemania?\n> ";
    cin >> resp;
    if (resp == "Berlin" || resp == "berlin") (*score)++;

    cout << "Tu puntaje final: " << *score << "/2\n";
    delete score;
}





