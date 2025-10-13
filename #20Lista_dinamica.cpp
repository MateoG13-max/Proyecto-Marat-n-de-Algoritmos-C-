#include <iostream>
using namespace std;

/*
  Programa interactivo que mantiene un array dinámico.
  Se añade un número cada vez, y cuando la capacidad se llena,
  se crea un nuevo array con el doble de capacidad, se copian
  los elementos y se libera la memoria anterior.
*/

int main() {
    int capacity = 2;             // capacidad inicial
    int size = 0;                 // elementos usados
    int* data = new int[capacity]; // array dinámico inicial

    char seguir = 's';
    while (seguir == 's') {
        int valor;
        cout << "Ingresa un número: ";
        cin >> valor;

        // Si no hay espacio, redimensionar (duplicar)
        if (size == capacity) {
            int newCap = capacity * 2;
            int* nuevo = new int[newCap];
            // copiar elementos
            for (int i = 0; i < size; ++i) nuevo[i] = data[i];
            delete[] data; // liberar memoria antigua
            data = nuevo;
            capacity = newCap;
            cout << "(Redimensionado a capacidad " << capacity << ")\n";
        }

        data[size++] = valor; // almacenar nuevo valor

        cout << "¿Deseas ingresar otro? (s/n): ";
        cin >> seguir;
    }

    // Mostrar elementos
    cout << "Lista final: ";
    for (int i = 0; i < size; ++i) cout << data[i] << (i+1==size?'\n':' ');

    delete[] data; // liberar memoria antes de salir
    return 0;
}

