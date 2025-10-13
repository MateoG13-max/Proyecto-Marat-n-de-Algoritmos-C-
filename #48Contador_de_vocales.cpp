#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char frase[100];
    cout << "Escribe una frase: ";
    cin.getline(frase, 100);

    char* p = frase;
    int contador = 0;
    while (*p) {
        char c = tolower(*p);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') contador++;
        p++;
    }

    cout << "🔤 Vocales encontradas: " << contador << endl;
    return 0;
}


