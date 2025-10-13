#include <iostream>
using namespace std;

int main() {
    int* memoria = new int;
    cout << "💾 Escribe un valor para guardar: ";
    cin >> *memoria;
    cout << "Guardado en dirección " << memoria << ": " << *memoria << endl;

    delete memoria;
}
