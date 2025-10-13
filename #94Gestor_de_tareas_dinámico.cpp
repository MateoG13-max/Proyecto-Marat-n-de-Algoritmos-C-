#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántas tareas deseas agregar hoy?: ";
    cin >> n;
    cin.ignore();

    string* tareas = new string[n]; // Array dinámico para almacenar tareas
    for (int i = 0; i < n; i++) {
        cout << "Tarea #" << i + 1 << ": ";
        getline(cin, tareas[i]);
    }

    cout << "\n📋 Lista de tareas pendientes:\n";
    for (int i = 0; i < n; i++) {
        cout << "- " << *(tareas + i) << endl;
    }

    delete[] tareas;
    return 0;
}


