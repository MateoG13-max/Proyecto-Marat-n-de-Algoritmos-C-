#include <iostream>

// Intercambia los valores apuntados por a y b
void swapInts(int* a, int* b) {
    // paso 1: validar punteros
    if (!a || !b) return;
    // paso 2: usar variable temporal para swap
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    std::cout << "Introduce dos enteros separados por espacio: ";
    std::cin >> x >> y;

    std::cout << "Antes: x=" << x << " y=" << y << "\n";
    swapInts(&x, &y); // paso: pasar direcciones
    std::cout << "Después: x=" << x << " y=" << y << "\n";
    return 0;
}

