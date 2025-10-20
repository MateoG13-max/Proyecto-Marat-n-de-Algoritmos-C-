/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
int main() {
    int n, suma = 0;
    // 1. Pedir al usuario que ingrese un número
    std::cout << "Ingresa un número entero positivo: ";
    std::cin >> n;

    // 2. Validar que n sea positivo
    if (n < 0) {
        std::cout << "Error: El número debe ser positivo." << std::endl;
        return 1;
    }

    // 3. Bucle para sumar los primeros n números impares
    for (int i = 1; i <= n; ++i) {
        int numero_impar = 2 * i - 1;
        suma += numero_impar;
    }

    // 4. Mostrar el resultado
    std::cout << "La suma de los primeros " << n << " números impares es: " << suma << std::endl;
    return 0;
}