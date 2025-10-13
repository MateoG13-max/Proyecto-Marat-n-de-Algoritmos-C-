#include <iostream>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anio;
};

int main() {
    int n;
    cout << "¿Cuántos libros deseas registrar?: ";
    cin >> n;

    Libro* libros = new Libro[n];
    for (int i = 0; i < n; i++) {
        cout << "Libro #" << i + 1 << " - Título: ";
        cin >> libros[i].titulo;
        cout << "Autor: ";
        cin >> libros[i].autor;
        cout << "Año: ";
        cin >> libros[i].anio;
    }

    cout << "\n📚 Catálogo de libros:\n";
    for (int i = 0; i < n; i++)
        cout << libros[i].titulo << " (" << libros[i].anio << ") de " << libros[i].autor << endl;

    delete[] libros;
}





