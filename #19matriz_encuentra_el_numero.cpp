#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
  Genera una matriz dinámica 4x4, busca el mayor valor.
  El usuario intenta adivinar su posición.
*/

int main() {
    srand((unsigned)time(nullptr));
    int filas = 4, cols = 4;

    // reservar filas
    int** mat = new int*[filas];
    for (int i = 0; i < filas; ++i) mat[i] = new int[cols];

    // rellenar aleatoriamente y mostrar
    cout << "Matriz 4x4:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < cols; ++j) {
            mat[i][j] = rand() % 100; // 0..99
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }

    // encontrar mayor y su posición
    int maxVal = mat[0][0], maxI = 0, maxJ = 0;
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < cols; ++j)
            if (mat[i][j] > maxVal) { maxVal = mat[i][j]; maxI = i; maxJ = j; }

    int guessI, guessJ;
    cout << "Adivina la fila (0-3) y columna (0-3) del número mayor: ";
    cin >> guessI >> guessJ;

    if (guessI == maxI && guessJ == maxJ) cout << "¡Correcto! El mayor es " << maxVal << " en (" << maxI << "," << maxJ << ")\n";
    else cout << "No es correcto. El mayor era " << maxVal << " en (" << maxI << "," << maxJ << ")\n";

    // liberar memoria
    for (int i = 0; i < filas; ++i) delete[] mat[i];
    delete[] mat;
    return 0;
}
