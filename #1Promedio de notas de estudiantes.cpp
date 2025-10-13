#include <iostream>
using namespace std;

int main() {
    int alumnos, notas;
    cout << "Número de alumnos: "; cin >> alumnos;
    cout << "Notas por alumno: "; cin >> notas;

    double** grupo = new double*[alumnos];
    for (int i = 0; i < alumnos; ++i) grupo[i] = new double[notas];

    for (int i = 0; i < alumnos; ++i) {
        cout << "Alumno #" << i+1 << ":\n";
        for (int j = 0; j < notas; ++j) {
            cout << "Nota " << j+1 << ": ";
            cin >> grupo[i][j];
        }
    }

    for (int i = 0; i < alumnos; ++i) {
        double sum = 0;
        for (int j = 0; j < notas; ++j) sum += grupo[i][j];
        cout << "Promedio alumno #" << i+1 << ": " << (sum/notas) << "\n";
    }

    for (int i = 0; i < alumnos; ++i) delete[] grupo[i];
    delete[] grupo;
    return 0;
}

