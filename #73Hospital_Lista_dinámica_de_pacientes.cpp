#include <iostream>
using namespace std;

class Paciente {
public:
    string nombre;
    string diagnostico;
};

int main() {
    int n;
    cout << "¿Cuántos pacientes ingresarán?: ";
    cin >> n;

    Paciente *lista = new Paciente[n];
    for (int i = 0; i < n; i++) {
        cout << "Paciente #" << i+1 << " nombre: ";
        cin >> lista[i].nombre;
        cout << "Diagnóstico: ";
        cin >> lista[i].diagnostico;
    }

    cout << "\nRegistro de pacientes:\n";
    for (int i = 0; i < n; i++)
        cout << lista[i].nombre << " - " << lista[i].diagnostico << endl;

    delete[] lista;
}
