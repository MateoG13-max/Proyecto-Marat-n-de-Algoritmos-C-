#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char buffer[512];
    cout << "Escribe una frase: ";
    cin.getline(buffer, 512);

    char objetivo[100];
    cout << "Palabra a buscar: ";
    cin.getline(objetivo, 100);

    int count = 0;
    char* copia = new char[strlen(buffer) + 1];
    strcpy(copia, buffer); // trabajar sobre copia porque strtok modifica
    char* token = strtok(copia, " ,.-;:!?");
    while (token) {
        if (strcmp(token, objetivo) == 0) ++count;
        token = strtok(nullptr, " ,.-;:!?");
    }
    cout << "La palabra '" << objetivo << "' aparece " << count << " veces.\n";
    delete[] copia;
    return 0;
}


