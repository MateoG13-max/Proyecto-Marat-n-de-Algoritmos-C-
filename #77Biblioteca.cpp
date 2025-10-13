#include <iostream>
using namespace std;

struct Libro {
    string titulo;
    bool prestado;
};

int main() {
    int n;
    cout << "¿Cuántos libros registrará?: ";
    cin >> n;

    Libro *libros = new Libro[n];
    for (int i = 0; i < n; i++) {
        cout << "Título del libro #" << i+1 << ": ";
        cin >> libros[i].titulo;
        libros[i].prestado = false;
    }

    int p;
    cout << "Ingrese número del libro prestado (1-" << n << "): ";
    cin >> p;
    libros[p-1].prestado = true;

    cout << "\nEstado actual:\n";
    for (int i = 0; i < n; i++)
        cout << libros[i].titulo << " -> " << (libros[i].prestado ? "Prestado" : "Disponible") << endl;

    delete[] libros;
}
