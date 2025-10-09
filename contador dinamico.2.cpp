#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char texto[200];
    cout << "Escribe una frase: ";
    cin.getline(texto, 200);

    int* conteo = new int[2]{0, 0}; // [0]=letras, [1]=dígitos

    for (char* p = texto; *p != '\0'; ++p) {
        if (isalpha(*p)) conteo[0]++;
        else if (isdigit(*p)) conteo[1]++;
    }

    cout << "Letras: " << conteo[0] << " | Dígitos: " << conteo[1] << "\n";
    delete[] conteo;
    return 0;
}

