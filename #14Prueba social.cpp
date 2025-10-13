#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char linea[1024];
    cout << "Escribe una línea: ";
    cin.getline(linea, 1024);

    size_t len = strlen(linea);
    char* rev = new char[len + 1];

    // copiar en orden inverso
    for (size_t i = 0; i < len; ++i) rev[i] = linea[len - 1 - i];
    rev[len] = '\0';

    cout << "Invertida: " << rev << "\n";
    delete[] rev;
    return 0;
}



