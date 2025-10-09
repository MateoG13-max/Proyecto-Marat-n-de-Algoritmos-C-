#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int filas = 3, cols = 3;
    int** matriz = new int*[filas];
    for (int i = 0; i < filas; i++) matriz[i] = new int[cols];

    // Rellenar con números aleatorios
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < cols; j++)
            matriz[i][j] = rand() % 10;

    int x, y;
    cout << "🎯 Adivina la posición del número mayor (x y): ";
    cin >> x >> y;

    int maxVal = 0, maxX = 0, maxY = 0;
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < cols; j++)
            if (matriz[i][j] > maxVal) { maxVal = matriz[i][j]; maxX = i; maxY = j; }

    if (x == maxX && y == maxY) cout << "🎉 ¡Correcto!\n";
    else cout << "❌ Fallaste. Estaba en (" << maxX << "," << maxY << ")\n";

    for (int i = 0; i < filas; i++) delete[] matriz[i];
    delete[] matriz;
}

