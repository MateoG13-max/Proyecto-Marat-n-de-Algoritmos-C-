#include <iostream>
using namespace std;

int main() {
    string* posts = nullptr;
    int n = 0;
    char op;
    do {
        string mensaje;
        cout << "Publica algo: ";
        cin.ignore();
        getline(cin, mensaje);
        string* nuevo = new string[n+1];
        for (int i = 0; i < n; i++) nuevo[i] = posts[i];
        nuevo[n] = mensaje;
        delete[] posts;
        posts = nuevo;
        n++;

        cout << "¿Agregar otro post? (s/n): ";
        cin >> op;
    } while (op == 's');

    cout << "\n📰 Tus publicaciones:\n";
    for (int i = 0; i < n; i++) cout << "- " << posts[i] << endl;

    delete[] posts;
}
