#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de bytes a asignar: ";
    cin >> n;

    void* memoria = malloc(n);
    cout << "Memoria asignada en: " << memoria << endl;

    free(memoria);
    cout << "Memoria liberada correctamente.\n";
}
