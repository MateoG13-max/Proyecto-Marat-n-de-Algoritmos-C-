#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    int edad;
};

int main() {
    int capacidad = 2, n = 0;
    Alumno* lista = new Alumno[capacidad];

    int op;
    do {
        cout << "\n1=agregar 2=eliminar 3=listar 0=salir\nOpción: ";
        cin >> op;
        if (op == 1) {
            if (n == capacidad) {
                int nuevaCap = capacidad * 2;
                Alumno* tmp = new Alumno[nuevaCap];
                for (int i = 0; i < n; ++i) tmp[i] = lista[i];
                delete[] lista;
                lista = tmp;
                capacidad = nuevaCap;
            }
            cin.ignore();
            cout << "Nombre: "; getline(cin, lista[n].nombre);
            cout << "Edad: "; cin >> lista[n].edad;
            ++n;
        } else if (op == 2) {
            int idx; cout << "Índice a eliminar (0.." << n-1 << "): "; cin >> idx;
            if (idx >=0 && idx < n) {
                for (int i = idx; i < n-1; ++i) lista[i] = lista[i+1];
                --n;
            } else cout << "Índice inválido\n";
        } else if (op == 3) {
            cout << "Lista de alumnos:\n";
            for (int i = 0; i < n; ++i) cout << i << ": " << lista[i].nombre << " (" << lista[i].edad << ")\n";
        }
    } while (op != 0);

    delete[] lista;
    return 0;
}



