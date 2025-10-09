#include <iostream>
#include <string>
using namespace std;

int main() {
    string canciones[] = {"Shape of You", "Believer", "Havana", "Perfect"};
    string* p = canciones;

    cout << "🎧 Canciones disponibles:\n";
    for (int i = 0; i < 4; i++) cout << i+1 << ". " << *(p+i) << endl;

    int eleccion;
    cout << "Elige una (1-4): ";
    cin >> eleccion;
    cout << "▶️ Reproduciendo: " << *(p + (eleccion-1)) << endl;
}
