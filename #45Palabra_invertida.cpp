#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char palabra[50];
    cout << "🔁 Escribe una palabra: ";
    cin >> palabra;

    char* fin = palabra + strlen(palabra) - 1;
    cout << "Invertida: ";
    while (fin >= palabra) cout << *fin--;
    cout << endl;
}
