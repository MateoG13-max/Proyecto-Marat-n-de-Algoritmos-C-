#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "👩‍🎓 ¿Cuántos estudiantes registrarás? ";
    cin >> n;
    cin.ignore();

    string* estudiantes = new string[n];
    for (int i = 0; i < n; i++) {
        cout << "Nombre #" << i + 1 << ": ";
        getline(cin, estudiantes[i]);
    }

    cout << "\n📋 Lista completa:\n";
    for (int i = 0; i < n; i++) cout << "- " << estudiantes[i] << endl;

    delete[] estudiantes;
    return 0;
}
