#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string paises[] = {"Ecuador", "Perú", "Chile", "Colombia", "México"};
    string capitales[] = {"Quito", "Lima", "Santiago", "Bogotá", "Ciudad de México"};
    srand(time(0));

    int aciertos = 0;
    for (int i = 0; i < 5; i++) {
        int idx = rand() % 5;
        string resp;
        cout << "Capital de " << paises[idx] << ": ";
        cin >> resp;
        if (resp == capitales[idx]) aciertos++;
    }

    cout << "Aciertos: " << aciertos << "/5\n";
}
