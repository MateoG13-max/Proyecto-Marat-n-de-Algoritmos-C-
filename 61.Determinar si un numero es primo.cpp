/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
bool esPrimo(int n) {
    if (n <= 1) return false;  // Los números menores o iguales a 1 no son primos.
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false; // Si se encuentra un divisor, no es primo.
    }
    return true;
}

int main() {
    int n;
    std::cout << "Ingresa un número entero: ";
    std::cin >> n;

    if (esPrimo(n)) {
        std::cout << n << " es un número primo." << std::endl;
    } else {
        std::cout << n << " no es un número primo." << std::endl;
    }

    return 0;
}