#include <iostream>
using namespace std;

void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    cout << " Ingresa dos números para intercambiarlos:\n";
    cout << "Número 1: "; cin >> x;
    cout << "Número 2: "; cin >> y;

    intercambiar(&x, &y);

    cout << "➡️ Ahora: Número 1 = " << x << ", Número 2 = " << y << endl;
    return 0;
}
