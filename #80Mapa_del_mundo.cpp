#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos países desea ingresar?: ";
    cin >> n;
    string *paises = new string[n];
    string *capitales = new string[n];

    for (int i = 0; i < n; i++) {
        cout << "País #" << i+1 << ": ";
        cin >> paises[i];
        cout << "Capital: ";
        cin >> capitales[i];
    }

    cout << "\nLista de países:\n";
    for (int i = 0; i < n; i++)
        cout << paises[i] << " - " << capitales[i] << endl;

    delete[] paises;
    delete[] capitales;
}

