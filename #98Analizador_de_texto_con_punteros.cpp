#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char texto[200];
    cout << "Escribe una frase: ";
    cin.getline(texto, 200);

    int letras = 0, espacios = 0, digitos = 0;
    char* ptr = texto;

    // Recorremos carácter por carácter
    while (*ptr) {
        if (isalpha(*ptr)) letras++;
        else if (isspace(*ptr)) espacios++;
        else if (isdigit(*ptr)) digitos++;
        ptr++;
    }

    cout << "\n📈 Análisis del texto:\n";
    cout << "Letras: " << letras << "\n";
    cout << "Espacios: " << espacios << "\n";
    cout << "Dígitos: " << digitos << endl;
}


