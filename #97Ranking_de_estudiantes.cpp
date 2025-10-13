#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos estudiantes hay en el ranking?: ";
    cin >> n;

    string* nombres = new string[n];
    float* notas = new float[n];

    for (int i = 0; i < n; i++) {
        cout << "Nombre del estudiante #" << i + 1 << ": ";
        cin >> nombres[i];
        cout << "Nota: ";
        cin >> notas[i];
    }

    // Encontrar la nota más alta
    float mayor = notas[0];
    int pos = 0;
    for (int i = 1; i < n; i++) {
        if (*(notas + i) > mayor) {
            mayor = *(notas + i);
            pos = i;
        }
    }

    cout << "\n🏆 Mejor estudiante: " << nombres[pos] << " con nota " << mayor << endl;

    delete[] nombres;
    delete[] notas;
}


