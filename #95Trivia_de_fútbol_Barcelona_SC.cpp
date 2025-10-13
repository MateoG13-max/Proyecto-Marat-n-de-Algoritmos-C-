#include <iostream>
using namespace std;

int main() {
    int* score = new int(0);
    string resp;

    cout << "⚽ Bienvenido al quiz de Barcelona SC ⚽\n";

    cout << "1) ¿En qué ciudad juega de local?\n> ";
    cin >> resp;
    if (resp == "Guayaquil" || resp == "guayaquil") (*score)++;

    cout << "2) ¿Color principal de su camiseta?\n> ";
    cin >> resp;
    if (resp == "Amarillo" || resp == "amarillo") (*score)++;

    cout << "3) ¿Cuántas estrellas tiene?\n> ";
    cin >> resp;
    if (resp == "16") (*score)++;

    cout << "Tu puntaje final: " << *score << "/3" << endl;

    delete score;
}


