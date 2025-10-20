/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int n, factorial = 1;
    std::cout << "Ingresa un número entero positivo: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: El número debe ser positivo." << std::endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    std::cout << "El factorial de " << n << " es: " << factorial << std::endl;
    return 0;
}