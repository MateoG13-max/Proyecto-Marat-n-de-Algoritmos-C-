#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    bool soloMayusculas = true;

    cout << "Ingrese una cadena: ";
    cin >> texto;

    for (char c : texto) {
        if (c < 'A' || c > 'Z') {
            soloMayusculas = false;
            break;
        }
    }

    if (soloMayusculas)
        cout << "La cadena contiene solo letras mayúsculas." << endl;
    else
        cout << "La cadena contiene caracteres que no son mayúsculas." << endl;

    return 0;
}
