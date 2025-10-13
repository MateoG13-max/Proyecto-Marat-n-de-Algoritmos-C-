#include <iostream>
#include <cstring>
using namespace std;

int contarVocales(char* cad) {
    int cont = 0;
    while (*cad) {
        if (strchr("aeiouAEIOU", *cad)) cont++;
        cad++;
    }
    return cont;
}

int main() {
    char frase[100];
    cout << "Escribe una frase: ";
    cin.getline(frase, 100);
    cout << "Total de vocales: " << contarVocales(frase) << endl;
}



