#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char original[100];
    cout << "Texto: ";
    cin.getline(original, 100);

    char* copia = new char[strlen(original) + 1];
    char* p = original;
    char* q = copia;

    while ((*q++ = *p++) != '\0');

    cout << "Copia: " << copia << endl;
    delete[] copia;
}
