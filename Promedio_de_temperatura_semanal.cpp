#include <iostream>
using namespace std;

int main() {
    int dias;
    cout << "¿Cuántos días medirás? ";
    cin >> dias;

    float* temps = new float[dias];
    float suma = 0;
    for (int i = 0; i < dias; i++) {
        cout << "Temperatura día " << i + 1 << ": ";
        cin >> temps[i];
        suma += temps[i];
    }

    cout << "🌡️ Promedio: " << suma / dias << "°C\n";
    delete[] temps;
}
