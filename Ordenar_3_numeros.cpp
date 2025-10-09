#include <iostream>
using namespace std;

void ordenar(int* a, int* b, int* c) {
    if (*a > *b) swap(*a, *b);
    if (*b > *c) swap(*b, *c);
    if (*a > *b) swap(*a, *b);
}

int main() {
    int a, b, c;
    cout << "Ingresa 3 números: ";
    cin >> a >> b >> c;

    ordenar(&a, &b, &c);
    cout << "Orden ascendente: " << a << ", " << b << ", " << c << endl;
}
