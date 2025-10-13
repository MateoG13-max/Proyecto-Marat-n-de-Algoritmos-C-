#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int* dias = new int(7);
    float* temperaturas = new float[*dias];

    cout << "📅 Temperaturas de la semana:\n";
    for (int i = 0; i < *dias; i++) {
        *(temperaturas + i) = (rand() % 15) + 15; // entre 15 y 30 °C
        cout << "Día " << i + 1 << ": " << *(temperaturas + i) << " °C\n";
    }

    delete dias;
    delete[] temperaturas;
    return 0;
}

