#include <iostream>
using namespace std;

int main() {
    char origen[100];
    cout << "Escribe una palabra: ";
    cin >> origen;

    char* destino = new char[100];
    char* p = origen;
    char* q = destino;

    while (*p != '\0') {
        *q = *p;
        ++p; ++q;
    }
    *q = '\0';

    cout << "Copia: " << destino << "\n";
    delete[] destino;
    return 0;
}

