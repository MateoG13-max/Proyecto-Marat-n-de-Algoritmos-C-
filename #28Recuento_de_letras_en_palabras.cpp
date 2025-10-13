#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char palabra[50];
    cout << "Escribe una palabra: ";
    cin >> palabra;

    int* letras = new int(strlen(palabra));
    *letras = strlen(palabra);

    cout << "Tiene " << *letras << " letras.\n";
    delete letras;
}

