#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char frase[200];
    char palabra[50];
    cout << "Frase: ";
    cin.getline(frase,200);
    cout << "Palabra a buscar: ";
    cin.getline(palabra,50);

    char* p = strstr(frase, palabra);
    if (p) cout << "✅ Encontrada en posición " << (p - frase) << endl;
    else cout << "❌ No encontrada\n";
}

