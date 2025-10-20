/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int n, producto = 1;
    // 1. Pedir al usuario que ingrese un número
    std::cout << "Ingresa un número entero positivo: ";
    std::cin >> n;

    // 2. Validar que n sea positivo
    if (n < 0) {
        std::cout << "Error: El número debe ser positivo." << std::endl;
        return 1;
    }

    // 3. Bucle para calcular el producto de los primeros n números
    for (int i = 1; i <= n; ++i) {
        producto *= i;
    }

    // 4. Mostrar el resultado
    std::cout << "El producto de los primeros " << n << " números es: " << producto << std::endl;
    return 0;
}