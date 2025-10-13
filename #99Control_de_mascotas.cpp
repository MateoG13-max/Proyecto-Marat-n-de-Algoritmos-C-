#include <iostream>
using namespace std;

class Mascota {
private:
    string nombre;
    string especie;
public:
    Mascota(string n, string e) : nombre(n), especie(e) {}
    void mostrar() { cout << "Mascota: " << nombre << " (" << especie << ")" << endl; }
};

int main() {
    Mascota m("Rocky", "Perro");
    m.mostrar();
    return 0;
}



